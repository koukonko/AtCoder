#include <iostream>
#include <math.h>
#include <string>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int K, S;
	cin >> K >> S;

	int count = 0;
	for(int i = 0; i <= K; ++i){
		for(int j = 0; j <= K; ++j){
			if(i + j <= S && i + j + K >= S){
				//cout << "X:" << i << " Y:" << j << " Z:" << K << endl;
				count++;
			}
		}
	}

	cout << count << endl;
}

