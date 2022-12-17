/* Дана целочисленная матрица{Aij}i = 1...n; j = 1..n, n <= 100.
Если все диагональные элементы матрицы положительны и содержат цифры 3 или 5,
заменить минимальные элементы столбцов на суммы квадратов элементов соответствующих столбцов. */
#include "file_read.cpp"
#include "task.cpp"
#include "file_write.cpp"

#include <vector>

using namespace std;

int main()
{
	auto matrix = fileRead::squareMatrix("vvod.txt");

	if (task::checkDiagonals(matrix)) {
		for (int j = 0; j < matrix.size(); j++)
			matrix[task::findMinimumInColumn(matrix, j)][j] = task::sumOfSquaresInColumn(matrix, j);
	}

	fileWrite::matrix(matrix, "vyvod.txt");
}
