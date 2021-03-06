/*
 * Matrix.cpp
 *
 *  Created on: Jun 23, 2015
 *      Author: Ori Damari & Or Shainberg
 */

#include "Matrix.h"

Matrix::Matrix(int xSize, int ySize) {

	_matrix = new Utils::CELL_STATUS*[xSize];
	for (int i = 0; i < xSize; i++){
		_matrix[i] = new Utils::CELL_STATUS[ySize];
	}

	for (int r = 0; r < xSize; r++){
		for (int c = 0; c < ySize; c++){
			_matrix[r][c] = Utils::OCCUPIED;
		}
	}

	_rows = xSize;
	_columns = ySize;
}

void Matrix::set(int x, int y, Utils::CELL_STATUS status) {
	_matrix[x][y] = status;
}

Matrix::~Matrix() {
	for (int i = 0; i < _rows; i++){
		delete [] _matrix[i];
	}
	delete [] _matrix;
}


