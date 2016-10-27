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

const int N = 1e5+1;
int dp[N];
int dp1[N];
int a[N];
int n;

int solve(int x){
	if(x > n){
		return 0;
	}
	if(dp[x] != -1){
		return dp[x];
	}

	dp[x] = a[x] + min(solve(x+1), solve(x+2));
	return dp[x];
}
int solve1(int v){
	if(v > n-1){
		return 0;
	}
	if(dp1[v] != -1){
		return dp1[v];
	}

	dp1[v] = a[v] + min(solve(v+1), solve(v+2));
	return dp1[v];
}
int main(){
	cin >> n;
	memset(dp, -1, sizeof dp);
	memset(dp1, -1, sizeof dp);

	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int ans = solve(1);
	int ans1 = solve1(2);
	ans1 += min(a[1], a[n]);
	cout << min(ans, ans1);
}











