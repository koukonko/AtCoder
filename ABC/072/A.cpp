#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	ll X, t;
	cin >> X >> t;

	ll ans = X - t;
	if(ans < 0) ans = 0;
	cout << ans << endl;
}
