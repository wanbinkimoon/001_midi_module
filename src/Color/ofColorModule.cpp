//
//  ofColorModule.cpp
//  001_midi_module
//
//  Created by nicola bertelloni on 26/12/2019.
//

#include "ofColorModule.h"
void ofColorModule::setup(){
  ofSetWindowTitle("Color Palette PICKER");
  
  colorPanelONE = gui.addPanel("COLOR PALETTE");
  colorPanelONE->loadTheme("theme_three.json", true);
  colorPanelONE->setPosition(ofPoint(20,20));
  colorContONE = colorPanelONE->addContainer("", ofJson({{"direction", "horizontal"}}));
  
  for(unsigned int i = 0; i < 8; i++){
    colorContONE->add(palette[i].set("color – " + ofToString(i), ofColor(127),ofColor(0,0),ofColor(255)), ofJson({{"width", 100}, {"height", 80}}));
  }
  
  ofBackground(10);
}
