#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int N, K;
	cin >> N >> K;

	int ans = 1;
	while(N-- > 0){
		int pre = ans * 2 - ans;
		if(pre < K){
			ans *= 2;
		} else{
			ans += K;
		}
	}
	cout << ans << endl;
}
