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
lli ans;
lli fib(lli a, lli b, int n){
	if(n <= 0){
		return 0;
	}
	ans = a + b;
	fib(b, ans, n-1);
	return ans;
}

int main(){
	int n;
	scanf("%d", &n);
	if(n <= 2){
		cout << 2;
		return 0;
	}
	cout << fib(2, 2, n-2);
}