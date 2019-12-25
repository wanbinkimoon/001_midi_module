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
  void exit();
  float smooth = .5;
  float LEFT, RIGHT;
  vector<float> bands;
  float centroid;
  
  ofxAudioAnalyzer audioAnalyzer;
  
  int MARGIN = 20;
  int GRAPH_HEIGHT = 200;
  int GRAPH_WIDTH  = ofGetWidth() - (MARGIN * 2);
  
  int CELL_NUMB = 8;
  int CELL_GAP = 3;
  float CELL_HEIGHT = (GRAPH_HEIGHT / CELL_NUMB) - CELL_GAP;
  
  float BAND_WIDTH;
  int BAND_NUMB;
  int BAND_GAP = 6;
  
  ofColor RED = ofColor(250, 80, 50);
  ofColor ORANGE = ofColor(250, 160, 30);
  ofColor YELLOW = ofColor(250, 200, 30);
  ofColor GREEN = ofColor(150, 210, 80);
  int ALPHA;
  
  ofxGui gui;
  ofxGuiPanel* audioPanelONE;
  ofxGuiContainer* audioContONE;
//  ofxGuiContainer* knobsOneBottom;
};



#endif /* SoundModule_hpp */
