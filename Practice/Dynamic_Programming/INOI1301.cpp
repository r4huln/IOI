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

inline int max(int a, int b){
	if(a > b) return a;
	else return b;
}

int main(){
	int n, k;
	

	cin >> n;
	cin >> k;
	k-=1;
	int a[n];
	int dp[n];
	int dp1[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	dp[k] = 0;
	dp[k+1] = a[k+1] + dp[k];

	for(int i = k+2; i < n; i++){
		dp[i] = max(dp[i-2] , dp[i-1] + a[i]);
	}
	dp1[0] = 0;
	dp1[1] = a[0];
	for(int i = 2; i < n; i++){
		dp1[i] = max(a[i-1] + dp1[i-1], a[i-2] + dp1[i-2]);
	}
	int best = dp[k] + dp1[k];
	for(int i = k + 1; i < n; i++){
		if((dp1[i] + dp[i]) > best) best = dp1[i] + dp[i];
	}
	cout << best << endl;
}

