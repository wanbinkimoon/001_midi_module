#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
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
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::exit() {
  
  // clean up
  midiIn.closePort();
  midiIn.removeListener(this);
}

//--------------------------------------------------------------
void ofApp::newMidiMessage(ofxMidiMessage& msg) {
  
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
