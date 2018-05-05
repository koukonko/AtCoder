#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
	int H = 0, W = 0;
	cin >> H >> W;

	int box[51][51] = {};

	int count = 0;
	while(count < W){
		string line;
		cin >> line;
		for(int i = 0; i < line.length(); ++i){
			box[i][count] = line[i] == '#' ? 1 : 0;
		}

		count++;
	}


	for(int i = 0; i < H; ++i){
		for(int j = 0; j < W; ++j){

			if(box[i][j] == 1){
				if(j >= 1 && box[i][j - 1] >= 1){ // left
					//cout << " : " << i << " " << j-1 << "left" << endl;
					box[i][j] = 2;
				} else if(i < W - 1 && box[i + 1][j] >= 1){ // bottom
					//cout << " : " << i+1 << " " << j << "bottom" << endl;
					box[i][j] = 2;
				} else if(j < H - 1 && box[i][j + 1] >= 1){ // right
					//cout << " : " << i << " " << j+1 << "right" << endl;
					box[i][j] = 2;
				} else if(i >= 1 && box[i - 1][j] >= 1){ // up
					//cout << " : " << i-1 << " " << j << "up" << endl;
					box[i][j] = 2;
				}
			}
		}
	}

	string ans = "Yes";
	for(int i = 0; i < H; ++i){
		for(int j = 0; j < W; ++j){
			if(box[i][j] == 1) ans = "No";
		}
	}

	cout << ans << endl;
}
