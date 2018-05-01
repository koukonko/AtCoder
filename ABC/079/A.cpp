#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
	string N;
	cin >> N;
	int count = 0;
	if(N[0] == N[1] && N[1] == N[2]) count++;
	else if(N[1] == N[2] && N[2] == N[3]) count++;

	if(count > 0){
		cout << "Yes" << endl;
	} else{
		cout << "No" << endl;
	}
}
