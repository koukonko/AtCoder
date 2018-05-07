#include <iostream>
#include <math.h>
#include <string>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int N;
	cin >> N;

	int l[101] = {};

	for(int i = 1; i <= 100; ++i){
		int count = 0;
		for(int j = i; j % 2 == 0; j /= 2){
			count++;
		}
		l[i] = count;
	}
	int max = 0, id = 0;
	for(int i = 0; i <= N; ++i){
		if(max <= l[i]){
			id = i;
		}
		max = MAX(max, l[i]);
	}
	cout << id << endl;
}
