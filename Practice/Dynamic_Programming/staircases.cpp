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

const int N = 506;
lli sum[N];
int n;
int pos1;
int pos2;
lli dp[N][N];
lli sol = 0;
lli ans = 0;
int pos[N];
//int pos2[N];

lli solve(lli l, lli r){

	if(l >= r){
		return 0;
	}

	if(dp[l][r] != 0){
		return dp[l[r];
	}

	dp[l][r] = 0;
	for(int i = l+1; i <= r; i++){
		dp[l][r] += solve(i, r-i);
	}
	
	return dp[l[r];
	
}
int main(){
	lli n;
	
	cin >> n;
	memset(dp, -1, sizeof dp);
	cout << solve(0, n) - 1;
	return 0;
}
//10, 1) 


