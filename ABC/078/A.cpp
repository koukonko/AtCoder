#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	char A, B;
	cin >> A >> B;

	if(A == B) cout << '=' << endl;
	else if(A < B) cout << '<' << endl;
	else cout << '>' << endl;
}
