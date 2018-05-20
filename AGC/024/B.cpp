#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;


int main(){
	int P[200001];
	int N;
	cin >> N;

	for(int i = 0; i < N; ++i){
		int j;
		cin >> j;
		P[--j] = i;
	}

	int tmp = P[0], max_length = 1;
	int counter = 1;
	for(int i = 1; i < N; ++i){
		if(P[i - 1] < P[i]){
			counter++;
		} else{
			counter = 1;
		}
		max_length = MAX(max_length, counter);
	}

	cout << N - max_length << endl;

}

