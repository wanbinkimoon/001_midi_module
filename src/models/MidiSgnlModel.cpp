//
//  KnobModel.cpp
//  001_midi_module
//
//  Created by nicola bertelloni on 23/12/2019.
//

#include "MidiSgnlModel.hpp"

void MidiSgnl::data(ofxMidiMessage& msg){
  pitch = msg.pitch;
  velocity = msg.velocity;
  value = msg.value;
}
