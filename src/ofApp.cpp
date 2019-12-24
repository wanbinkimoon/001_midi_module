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
    knobs = sortMidi(knobs);
  }
  
  knobsPanel = gui.addPanel("header color", ofJson({{"width", 270}}));
  knobsPanel->setPosition(ofPoint(20,20));
  
//  knobContainter = gui.addContainer("vertical sliders", ofJson({{"direction", "horizontal"}}));
//  knobContainter->setPosition(knobsPanel->getShape().getTopRight()+ofPoint(0,0));
//  
//  for(unsigned int i = 0; i < knobs.size(); i++){
//  knobsPanel->add(knobValue.set("knob", knobs[0].value, 0, 1), ofJson({{"type", "circular"},{"width", 80}, {"height", 80}, {"precision", 4}}));
//  }
  
//  knobsPanel->getHeader()->setBackgroundColor(ofColor(255, 125, 200));
}

//--------------------------------------------------------------
void ofApp::update(){
  
}

//--------------------------------------------------------------
void ofApp::newMidiMessage(ofxMidiMessage& msg) {
  
  //  ofLog(OF_LOG_VERBOSE, "midi play : " + convertMidiStatus(msg.status));
  //  ofLog(OF_LOG_VERBOSE, "midi play on channel:" + ofToString(msg.channel));
  //  ofLog(OF_LOG_VERBOSE, "midi play control:" + ofToString(msg.control));
  //  ofLog(OF_LOG_VERBOSE, "midi play pitch:" + ofToString(msg.pitch));
  //  ofLog(OF_LOG_VERBOSE, "midi play whith value:" + ofToString(msg.value));
  //  ofLog(OF_LOG_VERBOSE, "-------------------------------------------- \n");
  
  if(knobs.size() > 0)
    for(MidiSgnl k : knobs)
      if(msg.channel == k.channel && msg.control == k.control)
        k.data("status", msg.pitch, msg.velocity, msg.value);
    
//  ofLog(OF_LOG_VERBOSE, "knob value:" + ofToString(knobs[0].value));
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
  ofBackground(20);
//  ofDrawRectangle(200, 20, ofMap(knobs[0].value, 0, 127.0, 10, 400, true), 30);
  
//  ofLog(OF_LOG_VERBOSE, "knob order:" + ofToString(knobs[0].order));
//  ofLog(OF_LOG_VERBOSE, "knob on channel:" + ofToString(knobs[0].channel));
//  ofLog(OF_LOG_VERBOSE, "knob control:" + ofToString(knobs[0].control));
//  ofLog(OF_LOG_VERBOSE, "knob pitch:" + ofToString(knobs[0].pitch));
  ofLog(OF_LOG_VERBOSE, "knob value:" + ofToString(knobs[0].value));
//  ofLog(OF_LOG_VERBOSE, "-------------------------------------------- \n");
}

//--------------------------------------------------------------
void ofApp::exit() {
  // clean up
  midiIn.closePort();
  midiIn.removeListener(this);
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
