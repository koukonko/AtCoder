#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
	int N, L;
	cin >> N >> L;

	string box[101] = {};
	for(int i = 0; i < N; ++i){
		cin >> box[i];
	}


	string ans = "";

	for(int i = 0; i < N - 1; ++i){
		for(int j = i + 1; j < N; ++j){
			if(box[i] > box[j]){
				string tmp = box[i];
				box[i] = box[j];
				box[j] = tmp;
			}
		}
	}

	for(int i = 0; i < N; ++i){
		ans += box[i];
	}
	cout << ans << endl;
}
