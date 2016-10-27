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
#define ll long long 
using namespace std;

int a[101][101];
int t, r, c;
int dp[107][107];

int solve(int row, int column){
	if(row > r || column > c || column < 1){
		return 0;
	}
	if(dp[row][column] != -1) return dp[row][column];

	dp[row][column] = a[row][column] + max( solve(row+1, column+1), max( solve(row+1, column), solve(row+1, column-1)) );
	return dp[row][column];
}

int main(){
	std::ios::sync_with_stdio(false);

	cin >> t;
	while(t--){
		cin >> r >> c;
		for(int i = 0; i <= 101; i++){
			for(int j = 0; j <= 101; j++){
				dp[i][j] = -1;
			}
		}
		for(int i = 1; i <= r; i++){
			for(int j = 1; j <= c; j++){
				int v;
				cin >> v;
				a[i][j] = v;
			}
		}
		int sol = 0;
		for(int i = 1; i <= c; i++){
			sol = max(solve(1, i), sol);
		}
		cout << sol << endl;
	}
}




