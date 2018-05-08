#include <iostream>
#include <math.h>
#include <string>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int A, B;
	cin >> A >> B;

	int count = 0;
	int box[3] = { 1, 0, 0 };
	int num = 10001;

	while(num <= B){
		if(num >= A && num <= B){
			count++;
		}
		box[2]++;
		for(int i = 2; i > 0; --i){
			if(box[i] >= 10){
				box[i] = 0;
				box[i - 1]++;
			}
		}
		num = box[0] * 10000 + box[1] * 1000 + box[2] * 100 + box[1] * 10 + box[0];
	}


	cout << count << endl;
}

