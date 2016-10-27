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
	string s;
	cin >> s;
	int l = 0;
	int r = 0;
	int u = 0;
	int d = 0;
	
	for(int i = 0; i < s.length(); i++){
		if(s[i] =='L'){
			l++;
		}
		else if(s[i] == 'U'){
			u++;
		}
		else if(s[i] == 'R'){
			r++;
		}
		else{
			d++;
		}
	}
	lli y = abs(u - d);
	lli x = abs(r - l);
	lli ans = 100001;

		if((abs(y) + abs(x)) % 2 == 1){
			cout << -1;
			return 0;
		}
		else{
			ans = (y+x)/2;
		}

		cout << ans;
}