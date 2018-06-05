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

	string line = "";
	cin >> line;
	bool flag = true;

	for(int i = 0; i < a + b + 1; ++i){
		if(a == i && line[i] != '-'){
			flag = false;
		} else if(a != i && !(line[i] >= '0' && line[i] <= '9')){
			flag = false;
		}
	}

	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;
}


