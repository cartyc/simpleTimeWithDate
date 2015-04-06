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

////////////////////////////////////////////
/////                                 //////
/////     Set Text Layer Details      //////
/////                                 //////
////////////////////////////////////////////

static void update_time(){
  //Set time structure
  time_t temp = time(NULL);
  struct tm *tick_time = localtime(&temp);

  //Create a time buffer
  static char hourBuffer[] = "00";
  static char minBuffer[] = "00";
  
  //Write the current hours and minutes!
  if (clock_is_24h_style() == true){
    //Use 24 hours format
    strftime(hourBuffer, sizeof("00"), "%H", tick_time);
    strftime(minBuffer, sizeof("00"), "%M", tick_time);
  } else{
    strftime(hourBuffer, sizeof("00"), "%I", tick_time);
    strftime(minBuffer, sizeof("00"), "%M", tick_time);
  }

  //Display this on the textlayer
  text_layer_set_text(s_minute, minBuffer);
  text_layer_set_text(s_hour, hourBuffer);
}

////////////////////////////////////////////
/////                                 //////
/////   Initialize the watchFace      //////
/////                                 //////
////////////////////////////////////////////
static void init(){

}


////////////////////////////////////////////
/////                                 //////
/////   DeInitialize the watchFace    //////
/////                                 //////
////////////////////////////////////////////
static void deinit(){

}

////////////////////////////////////////////
/////                                 //////
/////   Where the magic Happens       //////
/////                                 //////
////////////////////////////////////////////
int main(void){
  
  // Start running the watchFace
  init();
  
  //Run the loop
  app_event_loop(); 
  
  //Shut it down!
  deinit();

}