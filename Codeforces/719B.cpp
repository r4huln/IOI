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

int main(){
	int n;
	cin >> n;
	string s;

	cin >> s;
	int cnt[2];
	for(int i = 0; i < n; i++){
		cnt[s[i]]++;
	}
	int adj = 0;
	string s1, s2;
	char tx1 = 'b';
	int error1 = 0;
	int error2 = 0;
	int r0 = 0;
	int b0 = 0;
	for(int i = 0; i < n; i++){
		if(s[i] != tx1){
			error1++;
			if(tx1 == 'r'){
				r0++;
			}
			if(tx1 == 'b'){
				b0++;
			}
		}
		if(tx1 == 'b'){
			tx1 = 'r'; 
		}
		else{
			tx1 = 'b';
		}
	}
	tx1 = 'r';
	int r = 0;
	int b = 0;
	for(int i = 0; i < n; i++){
		if(s[i] != tx1){
			error2++;
			if(tx1 == 'r'){
				r++;
			}
			if(tx1 == 'b'){
				b++;
			}
		}
		if(tx1 == 'b'){
			tx1 = 'r'; 

		}
		else{
			tx1 = 'b';
		}
	}
	int ans = min(r0, b0) + (max(r0,b0)-min(r0, b0));
	int ans1 = min(r, b) + (max(r, b)-min(r, b));
	
	cout << min(ans, ans1);
	
}