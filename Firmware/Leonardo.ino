#include <Control_Surface.h>

USBMIDI_Interface midi;
// Fours potentiometer to analog pinout

CCPotentiometer potentiometer1(A0, {MIDI_CC::Channel_Volume, CHANNEL_1});

CCPotentiometer potentiometer2(A1, {MIDI_CC::Channel_Volume, CHANNEL_2});

CCPotentiometer potentiometer3(A2, {MIDI_CC::Channel_Volume, CHANNEL_3});

CCPotentiometer potentiometer4(A3, {MIDI_CC::Channel_Volume, CHANNEL_4});

CCPotentiometer potentiometer1(A6, {MIDI_CC::Channel_Volume, CHANNEL_5});

CCPotentiometer potentiometer2(A7, {MIDI_CC::Channel_Volume, CHANNEL_6});

CCPotentiometer potentiometer3(A8, {MIDI_CC::Channel_Volume, CHANNEL_7});

CCPotentiometer potentiometer4(A9, {MIDI_CC::Channel_Volume, CHANNEL_8});

CCPotentiometer potentiometer4(A10, {MIDI_CC::Channel_Volume, CHANNEL_9});

void setup() {
  Control_Surface.begin();
}

void loop() {
  Control_Surface.loop();
}
