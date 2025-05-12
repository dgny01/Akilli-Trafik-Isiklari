#pragma once
#include <string>
#include <iostream>
using namespace std;

enum LightColor{RED, YELLOW, GREEN};

struct TrafficLight {
	int id;
	LightColor currentColor;
	int redDuration;
	int yellowDuration;
	int greenDuration;
	int timer;
};
void changeLight(TrafficLight& light);
string colorToString(LightColor color);
void printLightStatus(const TrafficLight& light);
