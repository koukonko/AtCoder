#include <iostream>
#include <math.h>
#include <string>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int N, M;
	cin >> N;

	string s[101] = {};
	int s_count[101] = {};
	int idx = 0;
	for(int i = 0; i < N; ++i){
		string tmp = "";
		cin >> tmp;
		bool flag = true;
		for(int j = 0; j < 101; ++j){
			if(s[j] == tmp){
				flag = false;
				s_count[j]++;
			}
		}
		if(flag){
			s_count[idx]++;
			s[idx++] = tmp;
		}
	}

	cin >> M;
	for(int j = 0; j < M; ++j){
		string tmp = "";
		cin >> tmp;
		for(int j = 0; j < 101; ++j){
			if(s[j] == tmp){
				s_count[j]--;
			}
		}
	}
	int max = 0;
	for(int i = 0; i < 101; ++i){
		max = MAX(max, s_count[i]);
	}
	if(max < 0){
		max = 0;
	}
	cout << max << endl;
}

