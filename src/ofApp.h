#pragma once

#include "ofMain.h"
#include "ofxMidi.h"
#include "ofxGuiExtended.h"
#include "MidiSgnlModel.hpp"
#include "KnobsData.hpp"

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
  void newMidiMessage(ofxMidiMessage& eventArgs);
  string convertMidiStatus(MidiStatus status);
  
  enum {
    KNOB_NUMB = 16,
    PAD_NUMB = 8,
    ARROW_NUMB = 4
  };
  
  std::vector<MidiSgnl> knobs;
  std::vector<MidiSgnl> pads;
  std::vector<MidiSgnl> arrows;
  
  vector<MidiSgnl> sortMidi(vector<MidiSgnl> toSort){
    std::sort(toSort.begin(), toSort.end());
    return toSort;
  }
  
  KnobsData knobsData;
  
  ofxGui gui;
  ofxGuiPanel* knobsPanel;
  ofxGuiContainer* knobContainter;
  ofParameter<int> knobValue;
};
