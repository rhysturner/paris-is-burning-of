#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
    ofVideoPlayer video1;
    ofVideoPlayer video2;
    ofVideoPlayer video3;
    ofVideoPlayer video4;
    ofVideoPlayer video5;
    ofVideoPlayer video6;
    ofVideoPlayer video7;
    ofVideoPlayer video8;
    
    ofVideoPlayer v52;
    ofVideoPlayer v53;
    ofVideoPlayer v54;
    
    ofImage image1;
    ofImage image2;
    
    int curVid;
	

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
