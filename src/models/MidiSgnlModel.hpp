//
//  KnobModel.hpp
//  001_midi_module
//
//  Created by nicola bertelloni on 23/12/2019.
//

#ifndef KnobModel_hpp
#include "ofMain.h"
#include "ofxMidi.h"
#include <stdio.h>
#define KnobModel_hpp

struct MidiSgnl {
  int order;
  string label;
  int channel;
  int control;
  
  MidiSgnl(int ord, string lbl, int ch, int ctrl){
    order = ord;
    label = lbl;
    channel = ch;
    control = ctrl;
  }
  
  bool operator< (const MidiSgnl &other) const {
    return order < other.order;
    }
  
  string status;
  int pitch;
  int velocity;
  int value;
  int getValue();
  void data(string st, int pit, int vel, int val);
};

#endif /* KnobModel_hpp */
