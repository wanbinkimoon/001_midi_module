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
  ofParameter<int> knobsDISPLAY[16];
  ofParameter<bool> padsONE[8];
  ofParameter<bool> padsTWO[8];
  ofParameter<bool> channel;
  ofParameter<bool> arrows[4];
  
  ofxGui gui;
  ofxGuiGroup* knobsOne;
  ofxGuiContainer* knobsOneTop;
  ofxGuiContainer* knobsOneBottom;
  
  ofxGuiGroup* padsOne;
  ofxGuiContainer* padOneCont;
  
  ofxGuiGroup* knobsTwo;
  ofxGuiContainer* knobsTwoTop;
  ofxGuiContainer* knobsTwoBottom;
  
  ofxGuiGroup* padsTwo;
  ofxGuiContainer* padTwoCont;
  
  
  int SLIDER_SIDE = 100;
};

