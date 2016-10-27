#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <math.h> 
#define lli long long int
using namespace std;


int cnt[27];
int qc = 0;
int tc = 0;
string s;
int n;
char h[50001];
int x = 0;
int y = 0;

void fill(){
	for(int i = 0; i < n; i++){
		if(s[i] == '?'){
			s[i] = 'A';
		}
	}
}
int main(){
	cin >> s;
	n = s.length();
	bool valid = true;
	if(n < 26) {
		cout << -1; 
		return 0;
	}
	for(int i = 25; i < n; i++)
	{
		x = 0;
		qc = 0;
		tc = 0;
		valid = true;
		memset(cnt, 0, sizeof(cnt));
		for(int j = i; j >= i - 25; j--){
			if(s[j] == '?'){
				qc++;
				continue;
			}
			cnt[s[j]-'A']++;
			if(cnt[s[j]-'A'] >= 2){
				valid = false;
				break;
			}
		}
		if(valid){
			for(int k = 0; k < 26; k++){

				if(cnt[k] == 0){
					tc++;
					h[x] = ('A' + k);

					x++;
				}
			}
			
			if(qc - tc >= 0){
				for(int m = i; m >= i - 25; m--){

					if(s[m] == '?' && y < qc - tc){
						s[m] = 'A';
						y++;
					}
				}

				x = tc-1;
				for(int l = i; l >= i - 25; l--){
					if(s[l] == '?'){
						s[l] = h[x];
						x--;
					}
				}
				fill();
				cout << s << endl;
				return 0;
			}
			
		}
		
	}
	cout << -1;
}