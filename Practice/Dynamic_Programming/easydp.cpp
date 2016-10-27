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

int dp[101];
int N, A, B;

int solve(int t, int x, int y, int z){
	if(t < 1){
		return 0;
	}
	if(dp[t] != -1){
		return dp[t];
	}
	dp[t] = 0;
	for(int i = 0; i <= x; i++){
		if(solve(t, A, N, B) >= (N - t) * B){
			continue;
		}
		dp[t] = max(dp[t], i+solve(t-1, x, y, z));
	}

	return dp[t];
} 


int main(){
	memset(dp, -1, sizeof dp);
	cin >> N >> A >> B;
	int ans =0;
	for(int ii = N-1; ii >= 1; ii--){
		
		ans = max(ans, solve(ii, A, N, B));
	}

	cout << ans << endl;
}















