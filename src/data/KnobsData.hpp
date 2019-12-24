//
//  KnobsData.hpp
//  001_midi_module
//
//  Created by nicola bertelloni on 23/12/2019.
//

#ifndef KnobsData_hpp
#define KnobsData_hpp

#include "ofMain.h"
#include <stdio.h>
#include "MidiDataModel.hpp"

class KnobsData {
public:
  vector<MidiDataModel> data;
  
  KnobsData(){
      data.push_back(MidiDataModel("Knob 1 top",1,7,21));
      data.push_back(MidiDataModel("Knob 2 top",1,7,22));
      data.push_back(MidiDataModel("Knob 3 top",1,7,23));
      data.push_back(MidiDataModel("Knob 4 top",1,7,24));
      data.push_back(MidiDataModel("Knob 5 top",1,7,25));
      data.push_back(MidiDataModel("Knob 6 top",1,7,26));
      data.push_back(MidiDataModel("Knob 7 top",1,7,27));
      data.push_back(MidiDataModel("Knob 8 top",1,7,28));
      
      data.push_back(MidiDataModel("Knob 1 bottom",1,7,41));
      data.push_back(MidiDataModel("Knob 2 bottom",1,7,42));
      data.push_back(MidiDataModel("Knob 3 bottom",1,7,43));
      data.push_back(MidiDataModel("Knob 4 bottom",1,7,44));
      data.push_back(MidiDataModel("Knob 5 bottom",1,7,45));
      data.push_back(MidiDataModel("Knob 6 bottom",1,7,46));
      data.push_back(MidiDataModel("Knob 7 bottom",1,7,47));
      data.push_back(MidiDataModel("Knob 8 bottom",1,7,48));
  }
};


#endif /* KnobsData_hpp */
