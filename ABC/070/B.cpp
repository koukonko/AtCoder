#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	if(A <= C && B >= C){
		if(B <= D){
			cout << B - C << endl;
		} else{
			cout << D - C << endl;
		}
	} else if(A >= C && A <= D){
		if(B >= D){
			cout << D - A << endl;
		} else{
			cout << B - A << endl;
		}
	} else{
		cout << 0 << endl;
	}
}
