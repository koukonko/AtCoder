#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	string N;
	cin >> N;

	for(int i = 0; i < N.length(); ++i){
		if(N[i] == '9'){
			std::cout << "Yes" << endl;
			return 0;
		}
	}
	std::cout << "No" << endl;
	return 0;
}
