/*
 * Matrix.h
 *
 *  Created on: Jun 23, 2015
 *      Author: Ori Damari & Or Shainberg
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include <iostream>
#include "Utils.h"

using namespace std;

class Matrix {
private:
	/**
	 * Declare the matrix
	 */
	Utils::CELL_STATUS** _matrix;
	int _rows;
	int _columns;

public:
	virtual ~Matrix();

	/**
	 * Constrator - Create new Matrix with the specified size
	 */

	Matrix(int xSize, int ySize);

	Utils::CELL_STATUS get(int x, int y) const{
		if (x < _rows && y < _columns){
			return _matrix[x][y];
		}

		return Utils::OCCUPIED;
	};

	void set(int x, int y, Utils::CELL_STATUS status);

	void print() const{
		for (int i = 0; i < _rows; i++){
				for (int j = 0; j < _columns; j++){
					cout << get(i, j) << "";
				}
				cout << "\n";
			}
	}
};

#endif /* MATRIX_H_ */
