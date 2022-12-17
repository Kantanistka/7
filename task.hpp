#pragma once

#include <vector>

using namespace std;

namespace task {
	bool checkDiagonals(vector<vector<int>> squareMatrix); // проверяет диагонали на соответствие условиям

	bool containsDigit(int checked, int digit); // проверяет число на наличие нужной цифры

	int findMinimumInColumn(vector<vector<int>> matrix, int column); // возвращает номер минимального элемента в столбце

	int sumOfSquaresInColumn(vector<vector<int>> matrix, int column); // возвращает сумму квадратов элементов в столбце
}