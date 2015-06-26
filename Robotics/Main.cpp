/*
 * Main.cpp
 *
 *  Created on: Jun 23, 2015
 *      Author: colman
 */

#include <iostream>
#include "Map.h"
#include "Utils.h"

using namespace std;

int main(){
	char* mapPath = "/usr/roboticLabMap.png";

	Map map = Map(mapPath);

	map.printOriginalMap();
	return 0;
}

