#pragma once

#include "ofMain.h"
#include "ofxMidi.h"
#include "ofxGuiExtended.h"

class ofApp : public ofBaseApp, public ofxMidiListener{
  
public:
  void setup();
  void update();
  void draw();
  void exit();
  
  void keyPressed(int key);
  void keyReleased(int key);
  void mouseMoved(int x, int y );
  void mouseDragged(int x, int y, int button);
  void mousePressed(int x, int y, int button);
  void mouseReleased(int x, int y, int button);
  void mouseEntered(int x, int y);
  void mouseExited(int x, int y);
  void windowResized(int w, int h);
  void dragEvent(ofDragInfo dragInfo);
  void gotMessage(ofMessage msg);
  
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

