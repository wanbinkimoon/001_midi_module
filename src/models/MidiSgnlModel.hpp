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

class MidiSgnl : public ofBaseApp{
  
public:
  int order;
  string label;
  int channel;        //< 1 - 16
  int control;        //< 0 - 127
  
  MidiSgnl(int ord, string lbl, int ch, int ctrl){
    order = ord;
    label = lbl;
    channel = ch;
    control = ctrl;
  }
  
  string status;
  int pitch;
  int velocity;
  int value;
  void data(string st, int pit, int vel, int val ){
    status = st;
    pitch = pit;
    velocity = vel;
    value = val;
  };
};

#endif /* KnobModel_hpp */
