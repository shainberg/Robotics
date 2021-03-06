/*
 * Map.h
 *
 *  Created on: Jun 23, 2015
 *      Author: Ori Damari & Or Shainberg
 */

#ifndef MAP_H_
#define MAP_H_

#include "lodepng.h";
#include "Matrix.h"

class Map {
	Matrix* _originalMap;
	int _height, _width;
	Matrix* _robotGrid;
public:
	Map(char* mapPath);
	virtual ~Map();

	void loadPng(char* mapPath);
	void blowMap();
	void printOriginalMap() const{
		_originalMap->print();
	}
};

#endif /* MAP_H_ */
