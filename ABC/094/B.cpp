#include <iostream>
#include <math.h>
#include <string>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int N, M, X;
	cin >> N >> M >> X;

	int A[101] = {};
	for(int i = 0; i < M; ++i){
		int idx;
		cin >> idx;
		A[idx] = 1;
	}

	int adv_count = 0;
	for(int i = X; i < N; ++i){
		if(A[i] == 1){
			adv_count++;
		}
	}

	int rev_count = 0;
	for(int i = X; i > 0; --i){
		if(A[i] == 1){
			rev_count++;
		}
	}

	cout << MIN(adv_count, rev_count) << endl;
}

