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
	lli n;
	cin >> n;
	lli a[n];
	lli min1 = 1e9 + 1;
	lli pos;
	lli pos2[200001];
	lli mcount = -1;
	bool dupe = false;
	bool same = true;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		min1 = ::min(min1, a[i]);
	}

	for(int i = 0; i < n; i++){
		if(a[i] == min1){
			pos = i;
			break;
		}
		else if(a[i] != min1){
			same = false;
		}
	}
	lli x = 0;
	for(int i = pos+1; i < n; i++){
		if(a[i] == min1){
			pos2[x] = i;
			dupe = true;
			x++;
		}
		else if(a[i] != min1){
			same = false;
		}
	}
	lli ans = 0;
	lli ans1;
	lli count = 0;
	if(same){
		cout << min1 * n;
		return 0;
	}
	if(!dupe){
		ans = min1 * n + n - 1;
	}
	else{
		for(int i = pos+1; i < pos2[x-1]; i++){
			if(a[i] > min1){
				count++;
			}
			else if(a[i] == min1){
				count = 0;
			}
			mcount = max(mcount, count);
		}
		ans = mcount + min1 * n;
		ans1 = min1 * n + (n - pos2[x-1]) - 1 + pos;
		cout << max(ans, ans1);
		return 0;
	}
	cout << ans << endl;
}