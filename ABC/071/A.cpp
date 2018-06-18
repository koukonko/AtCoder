#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int x, a, b;
	cin >> x >> a >> b;

	if(abs(x - a) < abs(x - b)){
		cout << "A" << endl;
	} else{
		cout << "B" << endl;
	}
}
