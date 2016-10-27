
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
int len;
int a[301];
int dp[301];
int n;
bool pal[301][301];
int x = 1;
int solve(int x);
int main(){
	cin >> n;
 
	int a[n];
	
	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= n; j++){
     		 pal[i][j] = false;
     		 if(i == j){
    			pal[i][j] = true;
    		 }
     	}
	}
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	for(int k = 1; k <= n; k++){
		for(int j = k+1; j <= n; j++){
			x = j;

			for(int i = k; i <= j; i++){

				if(a[i] == a[x]){
					pal[k][j] = true;
				}
				else{
					pal[k][j] = false;
					break;
				}
				if(i == x){
					break;
				}
				x--;
			}
		}
	}
	for(int i = 0; i <= n; i++) dp[i] = -1;
	cout << solve(1);

}

int solve(int t){
	if(t > n){
		return 0;
	}
	if(dp[t] != -1){
		return dp[t];
	}
	dp[t] = 1e5+1;
	 
	for(int i = 1; i <= n; i++){
		if(pal[t][i]){
			dp[t] = min(dp[t], 1+solve(i+1));
		}
	}
	return dp[t];
}