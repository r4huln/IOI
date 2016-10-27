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

int main(){

	int n, k;
	cin >> n >> k;
	lli s[n];
	lli y = 1;
	for(int i = 1; i <= n; i++){
		s[i] = y * (k-1);
		y *= k;
 	}
 	lli dp[n];
 	lli zeroes[n];
 	dp[1] = 0;
 	dp[2] = 0;
 	zeroes[1] = 0;
 	zeroes[2] = 0;
 	lli x = 1;
 	for(int i = 3; i <= n; i++){
 		zeroes[i] = (dp[i-1] + dp[i-2] + x) * (k-1);
 		dp[i] = zeroes[i];
 		x *= k;
 	}

 	lli ans = s[n] - zeroes[n];
 	cout << ans << endl;

}





