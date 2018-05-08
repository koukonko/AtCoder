#include <iostream>
#include <math.h>
#include <string>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	string s;
	cin >> s;

	for(int i = 0; i < s.length(); i += 2){
		cout << s[i];
	}
	cout << endl;
}
