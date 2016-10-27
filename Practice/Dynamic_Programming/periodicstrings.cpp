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

const int X = 150001;
ll count1 = 0;
ll dp[X];
ll N, M;
ll n;
ll powers[X];
set<long long> factors;

ll power(ll M){
	powers[0] = 1;
	for(int i = 1; i <= 150000; i++){
		powers[i] = ((powers[i-1] * 2) + M) % M;
	}
}

ll factorise(ll N){
	factors.clear();
	for(int i = 1; i*i <= N; i++){
		if(N % i == 0) {
			factors.insert(i); 
			factors.insert(N/i);
		}
	} 
	factors.erase(N);
}

int main(){
	dp[0] = 2;
	cin >> N >> M;
	ll n = N;
	power(M);
	dp[1] = 2;
	for(int i = 2; i <= n; i++){
		factorise(i);
		dp[i] = powers[i];
		for(set<long long>::iterator y = factors.begin(); y != factors.end(); y++){
			dp[i] -= dp[*y];
			dp[i] = (dp[i] + M)% M;
		}
	}
	cout << dp[n];
}