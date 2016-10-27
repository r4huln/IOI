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
	lli x, y, z;
	int n;
	cin >> n;
	lli b[n];
	lli c[n];
	for(int i = 0; i < n; i++){
		cin >> x >> y >> z;
		if(i > 0) c[i] = c[i-1] + x;
		else c[i] = x;
		b[i] = z + y;
	}
	sort(b, b+n);
	sort(c, c+n);
	lli ans = 0;
	for(int i = 0; i < n; i++){
		ans = max(ans, b[n-1-i] + c[i]); 
	}
	cout << ans << endl;
}