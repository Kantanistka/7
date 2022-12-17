#include "file_read.hpp"
#include <fstream>

using namespace std;

namespace fileRead {
	vector<vector<int>> squareMatrix(string filename) { // считывает порядок и квадратную матрицу из файла
		ifstream file_in; //вводной файл
		file_in.open(filename);

		int n;
		file_in >> n;

		vector<vector<int>> matrix{};
		for (int i = 0; i < n; i++) {
			vector<int> row{};
			for (int j = 0; j < n; j++) {
				int a;
				file_in >> a;
				row.push_back(a);
			}
			matrix.push_back(row);
		}
		
		file_in.close();
		return matrix;
	}
}