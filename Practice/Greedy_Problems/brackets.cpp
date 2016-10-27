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
	int n, s;
	int depth = -1; 
	int x = 0;
	cin >> n;
	int pos = 0;
	int xpos = 0;
	int ans = 0;
	int a[100000], tmp; 
	int sum = 0;
	bool cont = true;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] == 1){
			x += 1;
		}
		else{
			cont = false;
			s = x;
			if(s > depth){
				pos = i;
			}
			depth = max(depth, s);
			x -= 1;
		}
		sum++;
		if(x <= 0){
			if(sum > ans){
				xpos = i-sum+2;
			}
			ans = max(ans, sum);
			sum = 0;

		}
	}

	cout << depth << " " << pos << " " << ans << " " << xpos << endl;
}



