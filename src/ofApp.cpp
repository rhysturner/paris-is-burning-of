#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    curVid = 1;
    
    video1.loadMovie( "paris-is-burning.mov" );	//Load the video file
    video2.loadMovie( "RUSHMORE.mov" );	//Load the video file
    video3.loadMovie( "MIKEQ.mov" );	//Load the video file
    video4.loadMovie( "AbsolutElyx1.mp4" );	//Load the video file
    video5.loadMovie( "paris-is-burning-small.mov" );	//Load the video file
    v52.loadMovie( "paris-is-burning-small.mov" );
    v53.loadMovie( "paris-is-burning-small.mov" );
    v54.loadMovie( "paris-is-burning-small.mov" );
    
    image1.loadImage("05_1465-US-Rock-DPS-720p.jpg");
    image2.loadImage("AbsolutElyx2-720p.jpg");
    
    
//    video1.width = 1280;
//    video1.height = 720;
//    
//    video2.width = 1280;
//    video2.height = 720;
//    
//    video3.width = 1280;
//    video3.height = 720;
//    
//    video4.width = 1280;
//    video4.height = 720;
    
    //video5.width = 1280;
    //video5.height = 720;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    switch (curVid) {
        case 1:
            video1.update();
            break;
            
        case 2:
            video2.update();
            break;
            
        case 3:
            video3.update();
            break;
            
        case 4:
            video4.update();
            break;
            
        case 5:
            video5.update();
            v52.update();
            v53.update();
            v54.update();
            break;
            
        //case 6:
            //video6.update();
            //break;
            
        default:
            break;
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground( 0, 0, 0 );	//Set white background
    
	ofSetColor( 255, 255, 255 );
	
    
    switch (curVid) {
        case 1:
            video1.draw((ofGetWidth()-video1.getWidth())/2,(ofGetHeight()-video1.getHeight())/2);
            break;
            
        case 2:
            video2.draw((ofGetWidth()-video2.getWidth())/2,(ofGetHeight()-video2.getHeight())/2);
            break;
            
        case 3:
            video3.draw((ofGetWidth()-video3.getWidth())/2,(ofGetHeight()-video3.getHeight())/2);
            break;
            
        case 4:
            video4.draw((ofGetWidth()-video4.getWidth())/2,(ofGetHeight()-video4.getHeight())/2);
            break;
            
        case 5:
            video5.draw(0,0);
            v52.draw(ofGetWidth()/2,0);
            v53.draw(0,ofGetHeight()/2);
            v54.draw(ofGetWidth()/2,ofGetHeight()/2);
            break;
            
        case 6:
            //video6.draw(0,0);
            image1.draw((ofGetWidth()-image1.getWidth())/2, (ofGetHeight()-image1.getHeight())/2);
            break;
            
        case 7:
            //video6.draw(0,0);
            image2.draw((ofGetWidth()-image2.getWidth())/2, (ofGetHeight()-image2.getHeight())/2);
            break;
            
        default:
            break;
    }
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    cout << key;
    
    if (key=='f') {
        ofToggleFullscreen();
    }
    
    
    if (key=='1') {
        
        //video1.stop();
        video2.stop();
        video3.stop();
        video4.stop();
        video5.stop();
        v52.stop();
        v53.stop();
        v54.stop();
        
        if(video1.getCurrentFrame()>1&& curVid==1)
            video1.setFrame(1);
        video1.play();
        curVid = 1;
        
    }
    
    if (key=='2') {
        
        video1.stop();
        //video2.stop();
        video3.stop();
        video4.stop();
        video5.stop();
        v52.stop();
        v53.stop();
        v54.stop();
        
        if(video2.getCurrentFrame()>1&& curVid==2)
            video2.setFrame(1);
        video2.play();
        curVid = 2;
        
    }
    
    if (key=='3') {
        
        video1.stop();
        video2.stop();
        //video3.stop();
        video4.stop();
        video5.stop();
        v52.stop();
        v53.stop();
        v54.stop();
        
        if(video3.getCurrentFrame()>1&& curVid==3)
            video3.setFrame(1);
        curVid = 3;
        video3.play();
    }
    
    if (key=='4') {
        
        video1.stop();
        video2.stop();
        video3.stop();
        //video4.stop();
        video5.stop();
        v52.stop();
        v53.stop();
        v54.stop();
        
        if(video4.getCurrentFrame()>1 && curVid==4)
            video4.setFrame(0);
        curVid = 4;
        video4.play();
    }
    
    if (key=='5') {
        
        video1.stop();
        video2.stop();
        video3.stop();
        video4.stop();
        //video5.stop();
        
        if(video5.getCurrentFrame()>1 && curVid==5){
            video5.setFrame(ofRandom(1, video5.getTotalNumFrames()));
            v52.setFrame(ofRandom(1, v52.getTotalNumFrames()));
            v53.setFrame(ofRandom(1, v53.getTotalNumFrames()));
            v54.setFrame(ofRandom(1, v54.getTotalNumFrames()));
        }
        curVid = 5;
        video5.play();
        v52.play();
        v53.play();
        v54.play();
    }
    
    if (key=='6') {
        
        video1.stop();
        video2.stop();
        video3.stop();
        video4.stop();
        video5.stop();
        v52.stop();
        v53.stop();
        v54.stop();
        
        curVid = 6;
        
    }
    
    if (key=='7') {
        
        video1.stop();
        video2.stop();
        video3.stop();
        video4.stop();
        video5.stop();
        v52.stop();
        v53.stop();
        v54.stop();
        
        curVid = 7;
        
    }
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
