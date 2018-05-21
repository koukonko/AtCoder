#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;


int main(){
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	string ans = "Balanced";

	if(A + B > C + D){
		ans = "Left";
	} else if(A + B < C + D){
		ans = "Right";
	}

	cout << ans << endl;
}

