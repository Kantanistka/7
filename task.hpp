#pragma once

#include <vector>

using namespace std;

namespace task {
	bool checkDiagonals(vector<vector<int>> squareMatrix); // ��������� ��������� �� ������������ ��������

	bool containsDigit(int checked, int digit); // ��������� ����� �� ������� ������ �����

	int findMinimumInColumn(vector<vector<int>> matrix, int column); // ���������� ����� ������������ �������� � �������

	int sumOfSquaresInColumn(vector<vector<int>> matrix, int column); // ���������� ����� ��������� ��������� � �������
}