#ifndef DLL_MAIN_HPP_INCLUDED
#define DLL_MAIN_HPP_INCLUDED

#include <windows.h>

#include "ats_define.hpp"

// Called when this plug-in is loaded
 void WINAPI atsLoad();

// Called when this plug-in is unloaded
 void WINAPI atsDispose();

// Returns the version numbers of ATS plug-in
 int WINAPI atsGetPluginVersion();

// Called when the train is loaded
 void WINAPI atsSetVehicleSpec(ATS_VEHICLESPEC);

// Called when the game is started
 void WINAPI atsInitialize(int);

// Called every frame
 ATS_HANDLES WINAPI atsElapse(ATS_VEHICLESTATE vs, int *p_panel, int *p_sound);

// Called when the power is changed
 void WINAPI atsSetPower(int notch);

// Called when the brake is changed
 void WINAPI atsSetBrake(int notch);

// Called when the reverser is changed
 void WINAPI atsSetReverser(int pos);

// Called when any ATS key is pressed
 void WINAPI atsKeyDown(int ats_key_code);

// Called when any ATS key is released
 void WINAPI atsKeyUp(int ats_key_code);

// Called when the horn is used
 void WINAPI atsHornBlow(int ats_horn);

// Called when the door is opened
 void WINAPI atsDoorOpen();

// Called when the door is closed
 void WINAPI atsDoorClose();

// Called when current signal is changed
 void WINAPI atsSetSignal(int signal);

// Called when the beacon data is received
 void WINAPI atsSetBeaconData(ATS_BEACONDATA beacon_data);

#endif	// DLL_MAIN_HPP_INCLUDED
