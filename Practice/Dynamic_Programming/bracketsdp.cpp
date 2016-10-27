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

int N, K;
int b[701];
int v[701];
int dp[701][701];
int solve(int l, int r){

	if(l >= r){
		return 0;
	}

	if(dp[l][r] != -1){
		return dp[l][r];
	}

	dp[l][r] = 0;
	for(int i = l+1; i <= r; i++){
		if(b[l] + K == b[i]){
			dp[l][r] = max(dp[l][r], solve(l+1, i-1) + v[i] + v[l] + solve(i + 1, r));
		}
	}
	dp[l][r] = max(dp[l][r], solve(l+1, r));
	return dp[l][r];
	
}
int main(){
	for(int i = 0; i <= 701; i++){
		for(int j = 0; j <= 701; j++){
			dp[i][j] = -1;
		}
	}
	cin >> N >> K;
	for(int i = 1; i <= N; i++){
		cin >> v[i];
	}
	for(int i = 1; i <= N; i++){
		cin >> b[i];
	}

	
	
	
	cout << solve(1, N) << endl;
} 