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

lli M = 100000000000;
int main(){
	int n, u;
	cin>>n>>u;
	int arr[n];
	for(lli i = 0; i < n;i++){
		cin>>arr[i];
	}
	std::sort(arr, arr+n);
	int ans = M;
	if(n == 1){
		cout << 0 << endl;
		return 0;
	}
	else{
		ans = min(ans, abs((u - arr[0])) + abs((arr[n-2]-arr[0])));
		ans = min(ans, abs((u - arr[1])) + abs((arr[n-1] - arr[1])));
		ans = min(ans, abs((arr[n-1] - u)) + abs((arr[n-1] - arr[1])));
		ans = min(ans, abs((arr[n-2] - u)) + abs((arr[n-2] - arr[0])));

		cout << ans << endl;
	}
}
