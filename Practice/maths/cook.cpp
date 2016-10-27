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
	lli t, n, b, m, ans = 0;
	cin >> t;

	while(t--){
		int x = 0;
		ans = 0;
		cin >> n >> b >> m;
		while(n != 0){
			
			if(n % 2 == 0){
				ans = ans+n/2*m*pow(2,x);
				n = n/2;
				x++;
			}
			else{
 				ans= ans+(n/2+1)*m*pow(2,x);
				n = n - (n/2+1);
				x++;
			}
			if(n > 0)
				ans += b;
			//cout << x << " " << m << endl;
			//cout << ans << endl;
		}
		cout << ans;
	}

}