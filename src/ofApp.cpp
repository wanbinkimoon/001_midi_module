#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofSetLogLevel(OF_LOG_VERBOSE);
  // print input ports to console
  midiIn.listInPorts();
  
  // open port by number (you may need to change this)
  midiIn.openPort(0);
  //midiIn.openPort("IAC Pure Data In");  // by name
  //midiIn.openVirtualPort("ofxMidiIn Input"); // open a virtual port
  
  midiIn.ignoreTypes(false, false, false);
  
  // add ofApp as a listener
  midiIn.addListener(this);
  
  // print received messages to the console
  midiIn.setVerbose(true);
  
  ofBackground(120, 20, 120);
  
  for(MidiDataModel data : knobsData.knobsData){
    knobs.push_back(MidiSgnl(data.order, data.label, data.channel, data.control));
  }
}

//--------------------------------------------------------------
void ofApp::update(){
  
}

string ofApp::convertMidiStatus(MidiStatus status){
  switch(status){
    case MIDI_NOTE_OFF:
      return "OFF";
    case MIDI_NOTE_ON:
      return "ON";
    default:
      return "NONE";
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofBackground(120, 20, 120);
  for(unsigned int i = 0; i < knobs.size(); i++){
    ofDrawRectangle(20 * i, 20, 15, 15);
  }
}

//--------------------------------------------------------------
void ofApp::exit() {
  
  // clean up
  midiIn.closePort();
  midiIn.removeListener(this);
}

//--------------------------------------------------------------
void ofApp::newMidiMessage(ofxMidiMessage& msg) {
  
    ofLog(OF_LOG_VERBOSE, "midi play : " + convertMidiStatus(msg.status));
    ofLog(OF_LOG_VERBOSE, "midi play on channel:" + ofToString(msg.channel));
    ofLog(OF_LOG_VERBOSE, "midi play control:" + ofToString(msg.control));
    ofLog(OF_LOG_VERBOSE, "midi play pitch:" + ofToString(msg.pitch));
    ofLog(OF_LOG_VERBOSE, "midi play whith value:" + ofToString(msg.value));
  
  // add the latest message to the message queue
//  midiMessages.push_back(msg);
  
  // remove any old messages if we have too many
//  while(midiMessages.size() > maxMessages) {
//    midiMessages.erase(midiMessages.begin());
//  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
