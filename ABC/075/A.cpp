#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int A, B, C;
	cin >> A >> B >> C;

	if(A == B) cout << C << endl;
	else if(A == C) cout << B << endl;
	else if(B == C) cout << A << endl;
}
