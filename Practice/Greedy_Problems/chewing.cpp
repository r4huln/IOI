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
int main(){
	lli n, k;
	int s;
	lli sum = 0;
	cin >> n >> k;
	lli a[n];
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n); 
	for(int i = 0; i < n-1; i++){
		s = k - a[i] - 1;
		if((upper_bound(a, a+n, s) - a) - (i+1) <= 0){
			break;
		}
		sum += (upper_bound(a, a+n, s) - a) - (i+1);
	}
	cout << sum << endl; // 0 // 100
}