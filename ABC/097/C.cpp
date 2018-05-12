#include <iostream>
#include <math.h>
#include <string>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	string s;
	cin >> s;
	int idx = 0;
	cin >> idx;

	string k[6] = { "{", "{", "{", "{", "{", "{" };

	for(int i = 0; i < s.length(); ++i){

		int j = MIN(5, s.length() - i);
		bool _flag = false;
		for(int id = 4; id >= 0; --id){
			string _s = string() + s[i];
			// cout << _s << " " << k[id] << endl;
			if(_s < k[id]){
				_flag = true;
			}
		}

		// cout << " : " <<  s.substr(i, j) << endl;
		for(; j > 0 && _flag; --j){
			// cout << " * " << s.substr(i, j) << endl;
			k[5] = s.substr(i, j);
			bool flag = true;

			for(int j = 0; j < 5; ++j){
				if(k[j] == k[5]){
					flag = false;
				}
			}
			if(flag){
				for(int j = 0; j < 6; ++j){
					for(int l = j + 1; l < 6; ++l){
						if(k[j] > k[l]){
							string hoge = k[j];
							k[j] = k[l];
							k[l] = hoge;
						}
					}
				}
			}
		}
	}
	cout << k[idx - 1] << endl;
}

