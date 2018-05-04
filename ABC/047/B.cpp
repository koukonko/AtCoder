#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
	int W, H, N;
	cin >> W >> H >> N;

	int box[101][101] = {};

	while(N-- > 0){
		int x, y, a;
		cin >> x >> y >> a;
		for(int i = 1; i <= 100; ++i){
			for(int j = 1; j <= 100; ++j){
				if((a == 1 && i <= x) || (a == 2 && i > x) || (a == 3 && j <= y) || (a == 4 && j > y)){
					box[i][j] = 1;
				}
			}
		}
	}

	int ans = 0;
	for(int i = 1; i <= W; ++i){
		for(int j = 1; j <= H; ++j){
			if(box[i][j] != 1){
				ans++;
			}
		}
	}
	cout << ans << endl;
}
