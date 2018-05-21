#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;


int main(){
	int A, B, C;
	cin >> A >> B >> C;

	if(A + B >= C){
		cout << "Yes" << endl;
	} else{
		cout << "No" << endl;
	}
}

