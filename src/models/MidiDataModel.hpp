//
//  MIdiDataModel.hpp
//  001_midi_module
//
//  Created by nicola bertelloni on 23/12/2019.
//

#ifndef MIdiDataModel_hpp
#define MIdiDataModel_hpp

#include "ofMain.h"
#include <stdio.h>

class MidiDataModel {
public:
  int order;
  string label;
  int channel;
  int control;
  
  MidiDataModel(string lbl, int ord, int ch, int ctrl){
    label = lbl;
    order = ord;
    channel = ch;
    control = ctrl;
  };
};


#endif /* MIdiDataModel_hpp */
