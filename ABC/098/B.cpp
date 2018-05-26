#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;


int main(){
	int N;
	cin >> N;
	string S;
	cin >> S;

	int max = 0;

	for(int i = 1; i < S.length(); ++i){
		string first = S.substr(0, i);
		string second = S.substr(i, S.length() - 1);
		int first_box[27] = {};
		int second_box[27] = {};

		int count = 0;

		//cout << first << " " << second << endl;

		for(int j = 0; j < first.length(); ++j){
			first_box[first[j] - 'a']++;
		}
		for(int j = 0; j < second.length(); ++j){
			second_box[second[j] - 'a']++;
		}

		for(int j = 0; j < 27; ++j){
			if(first_box[j] > 0 && second_box[j] > 0){
				count++;
			}
		}

		max = MAX(count, max);
	}

	cout << max << endl;
}

