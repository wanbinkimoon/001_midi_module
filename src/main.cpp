#include "ofMain.h"
#include "ofApp.hpp"
#include "ofMidiModule.h"
#include "ofAppGLFWWindow.h"

//========================================================================
int main( ){
//	ofSetupOpenGL(920, 940, OF_WINDOW);			// <-------- setup the GL context
//  ofRunApp(new ofMidiModule());

  ofGLFWWindowSettings settings;
  
//  settings.multiMonitorFullScreen = true;
  settings.setSize(920, 940);
  settings.setPosition(glm::vec2(20,20));
  settings.resizable = false;
  shared_ptr<ofAppBaseWindow> ofMidiWindow = ofCreateWindow(settings);
  
  settings.windowMode = OF_FULLSCREEN;
//  settings.setSize(300, 300);
  settings.setPosition(glm::vec2(0,0));
//  settings.resizable = false;
  shared_ptr<ofAppBaseWindow> ofAppWindow = ofCreateWindow(settings);
  
  shared_ptr<ofMidiModule> MidiModule(new ofMidiModule);
  shared_ptr<ofApp> MainApp(new ofApp);
  MainApp->midi = MidiModule;

  ofRunApp(ofMidiWindow, MidiModule);
  ofRunApp(ofAppWindow, MainApp);
  ofRunMainLoop();
}
