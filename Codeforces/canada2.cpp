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
#include <string>
#define lli long long int
using namespace std;

int main(){
	long long int x;
	string s;
	cin >> x >> s;
	lli l = s.length();
	

	bool valid = false;
	lli ans = 0;
	if(s[0] == 'f') ans += 1;
	if(s[0] == 'e') ans += 2;
	if(s[0] == 'd') ans += 3;
	if(s[0] == 'c') ans += 6;
	if(s[0] == 'b') ans += 5;
	if(s[0] == 'a') ans += 4;

	lli i = 1;
	lli r = 1;
	lli pos = 0;
	
	if(x % 4 == 1 || x % 4 == 2){
		pos = (2 * (x / 4)) + x % 4;
	}
	else{
		pos = (2 * (x / 4));
		if(x % 4 == 3) pos+= 1;
		ans-=2;
	}
	ans += ( (pos-1) * 6);
	ans += (x-1);
	cout << ans << endl;
}

