#include <iostream>

using namespace std;

int main(){
	int rows, cols, k, r, c;
	cin >> rows >> cols >> k;

	bool** unsafe = new bool*[rows];
	int **pos = new int*[rows];
	for(size_t i=0;i<rows;++i){
		unsafe[i]= new bool[cols];
		pos[i] = new int[cols];
	}

	pos[0][0] = 1;

	for(size_t i=0;i<k;++i){
		cin >> r >> c;
		unsafe[r-1][c-1]=true;
	}

	for(int i=0;i<rows;++i){
		for(int j=0;j<cols;++j){
			if (!unsafe[i][j]) {
					if (i - 1 >= 0)
						pos[i][j] += pos[i - 1][j];
					if (j - 1 >= 0)
						pos[i][j] += pos[i][j - 1];
				}
		}
	}

	cout << pos[rows-1][cols-1] << endl;

	for(size_t i = 0; i < rows; ++i) {
    	delete [] unsafe[i];
    	delete [] pos[i];
	}
	delete [] unsafe;
	delete [] pos;
	return 0;
}
