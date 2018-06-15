#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int H, W;
	cin >> H >> W;

	string S[50];
	for(int i = 0; i < H; ++i){
		cin >> S[i];
	}

	int dir[9][2] = {
		{ -1, -1 },{ -1, 0 },{ -1, 1 },
	{ 0, -1 },{ 0, 0 },{ 0, 1 },
	{ 1, -1 },{ 1, 0 },{ 1, 1 },
	};

	for(int i = 0; i < H; ++i){
		string ans = "";
		for(int j = 0; j < W; ++j){
			int count = 0;
			if(S[i][j] == '.'){
				for(int k = 0; k < 9; ++k){
					if((i + dir[k][0]) >= 0 && (i + dir[k][0]) < H && (j + dir[k][1]) >= 0 && (j + dir[k][1]) < W){
						if(S[i + dir[k][0]][j + dir[k][1]] == '#'){
							count++;
						}
					}
				}
				ans += to_string(count);
			} else{
				ans += '#';
			}
		}
		S[i] = ans;
	}

	for(int i = 0; i < H; ++i){
		cout << S[i] << endl;
	}
}
