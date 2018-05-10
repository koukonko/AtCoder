#include <iostream>
#include <math.h>
#include <string>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	string s;
	cin >> s;

	int min = 0, max = 200001;
	for(int i = 0; i < s.length(); ++i){
		if(s[i] == 'A'){
			min = i;
			break;
		}
	}
	for(int i = s.length() - 1; i >= 0; --i){
		if(s[i] == 'Z'){
			max = i;
			break;
		}
	}

	cout << (max - min + 1) << endl;
}

