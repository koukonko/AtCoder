#include <iostream>
#include <math.h>
#include <string>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int N, K;
	cin >> N >> K;

	int l[51] = {};

	int ans = 0;
	while(N-- > 0){
		cin >> l[N];
	}
	for(int i = 0; i < 49; ++i){
		for(int j = i + 1; j < 50; ++j){
			if(l[i] < l[j]){
				int tmp = l[i];
				l[i] = l[j];
				l[j] = tmp;
			}
		}
	}

	for(int i = 0; i < K; ++i){
		ans += l[i];
	}

	cout << ans << endl;
}
