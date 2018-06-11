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

	int pre_a = 0, pre_b = 1;
	bool flag = true;
	for(int i = 2; i <= 999; ++i){
		if(pre_a - a == pre_b - b){
			break;
		} else{
			pre_a = pre_b;
			pre_b += i;
		}
	}
	cout << abs(pre_b - b) << endl;
}