#include "ofMain.h"


class ofApp : public ofBaseApp{
    
public:
    void setup();
    void draw();
    
    ofImage atmosphere;
    int x_pos;
    int y_pos;
};

void ofApp::setup(){
    
    ofHideCursor();
    atmosphere.load("Mars.jpg");
    x_pos = (ofGetWidth() - atmosphere.getWidth())/2;
    y_pos = (ofGetHeight() - atmosphere.getHeight())/2;
    
}

void ofApp::draw(){
    
    ofBackground(0);
    atmosphere.draw(x_pos, y_pos);
}

int main(){
    
    ofSetupOpenGL(1025,768,OF_FULLSCREEN);
    ofRunApp(new ofApp());
}