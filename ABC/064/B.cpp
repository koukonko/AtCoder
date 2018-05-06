#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
	int N;
	cin >> N;

	int max = 0, min = 1001;
	for(int i = 0; i < N; ++i){
		int input;
		cin >> input;
		if(max < input) max = input;
		if(min > input) min = input;
	}

	cout << max - min << endl;
}
