#pragma once

#include "ofMain.h"
#include "ofxAndroid.h"

#include "Particle.h"

class ofApp : public ofxAndroidApp{
	
	public:
		~ofApp();

		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void windowResized(int w, int h);

		void touchDown(int x, int y, int id);
		void touchMoved(int x, int y, int id);
		void touchUp(int x, int y, int id);
		void touchDoubleTap(int x, int y, int id);
		void touchCancelled(int x, int y, int id);
		void swipe(ofxAndroidSwipeDir swipeDir, int id);

		void pause();
		void stop();
		void resume();
		void reloadTextures();

		bool backPressed();
		void okPressed();
		void cancelPressed();

		vector<Particle*> particles;

		ofVec2f mouse_point;
		ofVec2f prev_mouse_point;
};
