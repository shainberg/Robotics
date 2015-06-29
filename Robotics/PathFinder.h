/*
 * PathFinder.h
 *
 *  Created on: Jun 29, 2015
 *      Author: colman
 */

#ifndef PATHFINDER_H_
#define PATHFINDER_H_

#include "Location.h"
#include <list>
#include <vector>
#include "Point.h"
#include <cstddef>
#include "Matrix.h"

using namespace std;

class PathFinder {
public:
	PathFinder();
	PathFinder(Matrix* originalMap);
	virtual ~PathFinder();
	vector<Point*> aStar(float x1, float y1, float x2, float y2);
	Point** _robotsGrid;
	Matrix* _originalMap;
	Point* getPoint(int x, int y);
};

#endif /* PATHFINDER_H_ */
