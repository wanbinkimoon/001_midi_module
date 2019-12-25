#pragma once

#include "ofMain.h"
#include "ofxMidi.h"
#include "ofxGuiExtended.h"

class ofMidiModule : public ofBaseApp, public ofxMidiListener{
  
public:
  void setup();
  void exit();
  
  ofxMidiIn midiIn;
  void newMidiMessage(ofxMidiMessage& msg);
  
  ofParameter<int> knobsONE[16];
  ofParameter<int> knobsTWO[16];
  ofParameter<bool> padsONE[8];
  ofParameter<bool> padsTWO[8];
  ofParameter<bool> arrows[4];
  
  ofxGui gui;
  ofxGuiPanel* knobsOne;
  ofxGuiContainer* knobsOneTop;
  ofxGuiContainer* knobsOneBottom;
  
  ofxGuiPanel* padsOne;
  ofxGuiContainer* padOneCont;
  
  ofxGuiPanel* knobsTwo;
  ofxGuiContainer* knobsTwoTop;
  ofxGuiContainer* knobsTwoBottom;
  
  ofxGuiPanel* padsTwo;
  ofxGuiContainer* padTwoCont;
  
  
  int SLIDER_SIDE = 100;
};

