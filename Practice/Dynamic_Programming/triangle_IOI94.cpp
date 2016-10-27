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
int n;
int dp[107][107];

int solve(int row, int column){
	if(row > n){
		return 0;
	}
	if(dp[row][column] != -1) return dp[row][column];

	dp[row][column] = a[row][column] + max( solve(row+1, column+1), solve(row+1, column) );
	return dp[row][column];
}


int main(){
	for(int i = 0; i <= 101; i++){
		for(int j = 0; j <= 101; j++){
			dp[i][j] = -1;
		}
	}

	cin >> n;
	for(int x = 1; x <= n; x++){
		for(int i = 1; i <= x; i++){
			cin >> a[x][i];
		}
	}
	cout << solve(1, 1);
}





