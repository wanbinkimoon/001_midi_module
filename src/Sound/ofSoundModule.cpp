//
//  SoundModule.cpp
//  001_midi_module
//
//  Created by nicola bertelloni on 25/12/2019.
//

#include "ofSoundModule.h"

void ofSoundModule::setup(){
  int sampleRate = 44100;
  int bufferSize = 512;
  int outChannels = 0;
  int inChannels = 2;
  // setup the sound stream
  soundStream.setup(this, outChannels, inChannels, sampleRate, bufferSize, 3);
  
  //setup ofxAudioAnalyzer with the SAME PARAMETERS
  audioAnalyzer.setup(sampleRate, bufferSize, inChannels);
  
  ofBackground(10);
}
//   ----------------------------------------------------
void ofSoundModule::audioIn(ofSoundBuffer &inBuffer){
  //ANALYZE SOUNDBUFFER:
  audioAnalyzer.analyze(inBuffer);
}
//   ----------------------------------------------------
void ofSoundModule::update(){
  rms_l = audioAnalyzer.getValue(RMS, 0, smooth);
  rms_r = audioAnalyzer.getValue(RMS, 1, smooth);
  melBands = audioAnalyzer.getValues(MEL_BANDS, 0, .2); // return an array of 24 bands

  for (int i = 0; i < melBands.size(); i++){
    melBands[i] = ofMap(melBands[i], DB_MIN, DB_MAX, 0.0, 1.0, true);
  }
}
//   ----------------------------------------------------
void ofSoundModule::draw(){
  ofBackground(10, 10, 10, 50);
  
  ofSetColor(125, 200, 255);
  for (int i = 0; i < melBands.size(); i++){
    ofDrawRectangle((20 * i) + 20, 20, 10, ofMap(melBands[i], 0, 1, 0, 100));
  }
}
