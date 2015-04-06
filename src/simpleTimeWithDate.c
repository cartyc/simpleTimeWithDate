#include <pebble.h>

//Set design vars Windows, Layers

//Window Layer
static Window *mainWidow;

//Text Layers
static TextLayer *s_dateLayer;
static TextLayer *s_hourLayer;
static TextLayer *s_minuteLayer;

//Fonts
static GFont hourFont;
static GFont minuteFont;
static GFont datetimeFont;

//Create Window
static void init()}{

}
//Destroy Window
static void deinit(){

}

//Run the Watchface
int main(void){
  
  // Start running the watchFace
  init();
  
  //Run the loop
  app_event_loop(); 
  
  //Shut it down!
  deinit();

}