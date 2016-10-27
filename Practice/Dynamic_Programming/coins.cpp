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
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#define lli long long int

using namespace std;
map<int, long long> dp;
lli solve(int n){
	if(n == 0){
		return 0;
	}
	if(dp[n] >= 0){
		return dp[n];
	}
	dp[n] = n;
	dp[n] = max(dp[n], solve(n/2)+ solve(n/3)+ solve(n/4));

	return dp[n];
}

int main(){
	lli n, sum;
	while(scanf("%lld",&n)==1){
 		cout << solve(n);
	}	
}