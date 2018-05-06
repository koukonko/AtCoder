#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
	string S;
	cin >> S;

	int box[27] = {};

	for(int i = 0; i < S.length(); ++i){
		box[S[i] - 'a']++;
		//cout << box[S[i] - 'a'] << " " << S[i] - 'a' << endl;
	}

	string ans = "yes";
	for(int i = 0; i < S.length(); ++i){
		if(box[i] >= 2) ans = "no";
	}

	cout << ans << endl;
}
