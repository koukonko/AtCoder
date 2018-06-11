#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	string c1, c2;
	cin >> c1 >> c2;

	reverse(c2.begin(), c2.end());
	if(c1 == c2) cout << "YES" << endl;
	else cout << "NO" << endl;
}
