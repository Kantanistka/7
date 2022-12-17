#include "file_write.hpp"
#include <fstream>

using namespace std;

namespace fileWrite {
	void matrix(vector<vector<int>> matrix, string filename) { //пишем в файл матрицу
		ofstream file_out;
		file_out.open(filename);

		for (auto const& row : matrix) {
			for (auto const& element : row) {
				file_out << element << " ";
			}
			file_out << endl;
		}

		file_out.close();
	}
}