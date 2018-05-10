#include <iostream>
#include <math.h>
#include <string>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	long long N;
	cin >> N;

	long long min = 10000000;

	long long i = 1, j = N / i;
	while(i <= j){
		if(N % i != 0){
			i++;
			j = N / i;
			continue;
		}
		int tmp_A = to_string(i).length();
		int tmp_B = to_string(j).length();
		int tmp_min = MAX(tmp_A, tmp_B);
		min = MIN(min, tmp_min);

		i++;
		j = N / i;
	}

	cout << min << endl;
}

