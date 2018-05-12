#include <iostream>
#include <math.h>
#include <string>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	long a, b, c, d;
	cin >> a >> b >> c >> d;

	string ans = "No";
	if((abs(a - b) <= d && abs(b - c) <= d) || abs(a - c) <= d){
		ans = "Yes";
	}

	cout << ans << endl;
}

