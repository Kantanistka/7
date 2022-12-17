#include "task.hpp"

using namespace std;

namespace task {
	bool checkDiagonals(vector<vector<int>> squareMatrix) { // ��������� ��������� �� ������������ ��������
		for (int i = 0; i < squareMatrix.size(); i++)
		{
			int a = squareMatrix[i][i], b = squareMatrix[squareMatrix.size() - 1 - i][i]; // �������� ������� � �������� ����������

			if (!(containsDigit(a, 3) || containsDigit(a, 5)) ||
				!(containsDigit(b, 3) || containsDigit(b, 5)) ||
				(a <= 0) || (b <= 0))
				return false;
		}
		return true;
	}

	bool containsDigit(int checked, int digit) { // ��������� ����� �� ������� ������ �����
		if (checked < 0) checked = -checked;

		while (checked > 0) {
			if (checked % 10 == digit) return true;
			checked /= 10;
		}
		return false;
	}

	int findMinimumInColumn(vector<vector<int>> matrix, int column) { // ���������� ����� ������������ �������� � �������
		int minimum_index = 0;
		for (int i = 1; i < matrix.size(); i++)
			if (matrix[i][column] < matrix[minimum_index][column]) minimum_index = i;
		return minimum_index;
	}

	int sumOfSquaresInColumn(vector<vector<int>> matrix, int column) { // ���������� ����� ��������� ��������� � �������
		int s = 0;
		for (int i = 1; i < matrix.size(); i++) {
			s += matrix[i][column] * matrix[i][column];
		}
		return s;
	}
}