//
//  KnobModel.cpp
//  001_midi_module
//
//  Created by nicola bertelloni on 23/12/2019.
//

#include "MidiSgnlModel.hpp"

void MidiSgnl::data(string st, int pit, int vel, int val){
  std::cout << "val enter in data: " << val << "\n";
  status = st;
  pitch = pit;
  velocity = vel;
  value = val;
  std::cout << "value exit in data: " << val << "\n";
};
