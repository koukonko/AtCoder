#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
	int N, M;
	cin >> N >> M;

	int city[51] = {};

	while(M-- > 0){
		int a, b;
		cin >> a >> b;

		city[a - 1]++;
		city[b - 1]++;
	}

	for(int i = 0; i < N; ++i){
		cout << city[i] << endl;
	}
}
