#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;

	string ans = "Yes";
	string pre = to_string(a) + to_string(b);
	double d = sqrt(atoi(pre.c_str()));
	d -= (int)d;
	if(d > 0.0) ans = "No";
	cout << ans << endl;
}


