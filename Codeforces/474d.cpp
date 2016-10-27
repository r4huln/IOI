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
#include <string>
#define lli long long int
#define M 1000000007

using namespace std;
typedef vector<long long int> vi;

int main(){
	int t, k;
	cin >> t >> k;
	lli dp[100001];
	lli s[100001];
	dp[0] = 1;
	dp[1] = 1;
	s[1] =1;
	for(int i = 2; i < k; i++){
		dp[i] = dp[i-1];
		s[i] =  ( (s[i-1] + dp[i]) + M ) % M;
	}
	for(int i = k; i < 100001; i++){
		dp[i] = ((dp[i-1] + dp[i-2]) + M) % M;
		s[i] =  ( (s[i-1] + dp[i]) + M ) % M;
	}
	int a, b;
	while(t--){
		cin >> a >> b;
		lli sum = 0;
		
		cout << ((s[b] - s[a-1]) +M) % M << endl;
	}
}