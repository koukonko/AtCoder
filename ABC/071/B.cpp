#include <iostream>
#include <math.h>
#include <string>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	string s;
	cin >> s;

	int box[27] = {};

	for(int i = 0; i < s.length(); ++i){
		box[s[i] - 'a']++;
	}

	for(int i = 0; i < 28; ++i){
		//cout << i << " " << (char)('a' + i) << " " << box[i] << endl;
		if(i == 26){
			cout << "None" << endl;
			break;
		} else if(box[i] == 0){
			cout << (char)('a' + i) << endl;
			break;
		}
	}
}
