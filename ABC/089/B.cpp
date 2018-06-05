#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int N;
	cin >> N;
	string ans = "Three";
	while(N-- > 0){
		string S;
		cin >> S;
		if(S == "Y"){
			ans = "Four";
		}
	}
	cout << ans << endl;
}
