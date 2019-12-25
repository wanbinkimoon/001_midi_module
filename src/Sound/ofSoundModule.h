//
//  SoundModule.hpp
//  001_midi_module
//
//  Created by nicola bertelloni on 25/12/2019.
//

#ifndef SoundModule_hpp
#define SoundModule_hpp

#include "ofMain.h"
#include "ofxGuiExtended.h"
#include "ofxAudioAnalyzer.h"

class ofSoundModule : public ofBaseApp {
  
public:
  void setup();
  void audioIn(ofSoundBuffer &inBuffer);
  void update();
  void draw();
  
  float smooth = .5;
  float rms_l, rms_r;
  vector<float> melBands;
  
  ofxAudioAnalyzer audioAnalyzer;
  ofSoundStream soundStream;

//  ofxGui gui;
//  ofxGuiPanel* knobsOne;
//  ofxGuiContainer* knobsOneTop;
//  ofxGuiContainer* knobsOneBottom;
};



#endif /* SoundModule_hpp */
