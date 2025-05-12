#include <iostream>
using namespace std;
#include <string>
#include "traffic.h"
#include <thread> // sleep_for için gerekli
#include <chrono> // sleep_for için gerekli

string colorToString(LightColor color) {
	switch(color)
	{
	case RED: return "Red";
	case YELLOW: return "Yellow";
	case GREEN: return "Green";
	default: return "Unknown";
	}
}

void printLightStatus(const TrafficLight& light) {
	cout << "Traffic light: " << light.id << " is " << colorToString(light.currentColor) << endl;
}


void changeLight(TrafficLight& light) {
	switch (light.currentColor)
	{
	case RED:
		this_thread::sleep_for(chrono::seconds(light.redDuration));
		light.currentColor = GREEN;
		break;
	case GREEN:
		this_thread::sleep_for(chrono::seconds(light.greenDuration));
		light.currentColor = YELLOW;
		break;
	case YELLOW: 
		this_thread::sleep_for(chrono::seconds(light.yellowDuration));
		light.currentColor = RED;
		break;
	}
}
