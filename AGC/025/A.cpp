#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

ll f(ll num){
	string str = to_string(num);
	ll re = 0;
	for(char c : str){
		re += c - '0';
	}
	return re;
}

int main(){
	ll N;
	cin >> N;

	ll a = 1, b = N - 1, min = 999999999999;
	for(; a < b; ++a, --b){
		ll sum_a = f(a);
		ll sum_b = f(b);
		min = MIN(min, (sum_a + sum_b));
	}
	if(N == 2) min = N;
	cout << min << endl;
}


