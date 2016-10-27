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
typedef long long ll;
const ll INF = ll(1e18);


using namespace std;
const int N = 200001;
lli n;
lli work[N];
lli dp[N];
lli sum(int x){
	if(x < 1){
		return 0;
	}
	if(dp[x] != -1){
		return dp[x];
	}
	lli ans = work[x] + min(sum(x-1), min(sum(x-2), sum(x-3)));
	return dp[x] = ans;
}

int main(){
	cin >> n;
	lli sum1 = 0;
	for(int i = 1; i <= n; i++){
		cin >> work[i];
		sum1 += work[i];
	}

	for(int i = 1; i <= n; i++){
		dp[i] = -1;
	}
	lli x = sum(n); 
	lli y = sum(n-1);
	lli z = sum(n-2);
	cout << sum1 - (min(x, min(y, z)));

}


// Time Complexity - O(n)

