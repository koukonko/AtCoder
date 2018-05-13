#include <iostream>
#include <math.h>
#include <string>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int a, b, x;
	cin >> a >> b >> x;

	if(a <= x && x <= a + b){
		cout << "YES" << endl;
	} else{
		cout << "NO" << endl;
	}
}

