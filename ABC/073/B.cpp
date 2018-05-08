#include <iostream>
#include <math.h>
#include <string>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int N;
	cin >> N;

	bool seat[100001] = {};

	while(N-- > 0){
		int l, r;
		cin >> l >> r;
		for(int i = l; i <= r; ++i){
			seat[i] = true;
		}
	}

	int count = 0;
	for(int i = 0; i <= 100000; ++i){
		if(seat[i]) count++;
	}
	cout << count << endl;
}
