#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int N, A, B;
	cin >> N >> A >> B;

	cout << MIN((N * A), B) << endl;
}

