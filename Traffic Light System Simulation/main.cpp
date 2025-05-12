#include <iostream>
using namespace std;
#include <string>
#include "traffic.h"
#include <vector>
int main()
{
	TrafficLight light1 = {1, RED, 5, 2, 4, 0 };
	TrafficLight light2 = {2, GREEN, 6, 3, 5, 0 };
	TrafficLight light3 = { 3, YELLOW, 4, 2, 3, 0 };

	vector <TrafficLight> lights = { light1, light2, light3 };

	for (int i = 0; i < 3; ++i) {
		cout << "\n=== Cycle " << i + 1 << " ===\n";
		for (auto& light : lights) {
			printLightStatus(light);
			changeLight(light);
		}
	}
	return 0;
}



/* 
TrafficLight light1;
light1.id = 1;
light1.currentColor = RED;
light1.redDuration = 5;
light1.yellowDuration = 2;
light1.greenDuration = 4;

printLightStatus(light1);

changeLight(light1);
printLightStatus(light1);

changeLight(light1);
printLightStatus(light1);

changeLight(light1);
printLightStatus(light1);
*/