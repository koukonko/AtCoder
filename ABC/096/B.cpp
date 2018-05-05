#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int k;
	cin >> k;

	if(a < b){
		int tmp = a;
		a = b;
		b = tmp;
	}
	if(a < c){
		int tmp = a;
		a = c;
		c = tmp;
	}
	for(int i = 0; i < k; ++i){
		a *= 2;
	}

	int ans = a + b + c;
	cout << ans << endl;
}
