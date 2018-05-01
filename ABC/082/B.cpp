#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
	string s, t;
	cin >> s >> t;

	for(int i = 0; i < 100; ++i){
		for(int j = i + 1; j < 101; ++j){
			if(s.size() > j && s[i] > s[j]){
				char tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}

			if(t.size() > j && t[j] > t[i]){
				char tmp = t[i];
				t[i] = t[j];
				t[j] = tmp;
			}
		}
	}

	string ans = "";
	for(int i = 0; i < 101; ++i){
		if(s.size() <= i){
			if(s.size() == t.size()){
				ans = "No";
			} else{
				ans = "Yes";
			}
			break;
		} else if(t.size() <= i){
			ans = "No";
			break;
		}

		int s_num = (s[i] - 'a'), t_num = (t[i] - 'a');
		if(s_num == t_num){
			continue;
		} else if(s_num < t_num){
			ans = "Yes";
			break;
		} else if(s_num > t_num){
			ans = "No";
			break;
		}
	}

	cout << ans << endl;
}
