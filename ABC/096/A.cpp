#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;

	int ans = 0;
	ans = a - 1;

	if(a <= b){
		ans++;
	}

	cout << ans << endl;
}
