#ifndef H_OFX_SOURCES_EDITOR
#define H_OFX_SOURCES_EDITOR

#include "ofGraphics.h"
#include "ofEvents.h"
#include "ofxUI.h"
#include "ofxSurfaceManager.h"

#define DEFAULT_IMAGES_DIR "sources/images/";

class ofxSourcesEditor
{
public:
    ofxSourcesEditor();
    ~ofxSourcesEditor();
    
    void registerAppEvents();
    void unregisterAppEvents();
    
    void setup(ofEventArgs& args);
    void draw();
    void loadImage( string name, string path );
    void disable();
    void enable();
    void setSurfaceManager(ofxSurfaceManager* newSurfaceManager);
    void selectImageSourceRadioButton(string name);
    
    int getLoadedTexCount();
    ofTexture* getTexture(int index);
    
private:
    ofxSurfaceManager* surfaceManager;
    string defImgDir;
    ofxUICanvas *gui;
    void guiEvent(ofxUIEventArgs &e);
    vector<ofImage*> images;
    vector<string> imageNames;
    //ofxPanel imgSrcPanel;
    
    //void onSourceSelect(bool& value);
};

#endif