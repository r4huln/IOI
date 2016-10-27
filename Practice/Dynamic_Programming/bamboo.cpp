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

const int N = 2501;
int a[N];
int n;
int pos[200002];

int main(){
	int ans = 0;
	int sol = 0;
	for(int i = 0; i < 200001; i++){
		pos[i] = -1;
	}
	cin >> n;`
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	int d;
	int x;

	
	for(int i = 0; i < n; i++){
		pos[a[i]] = i;
	}
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			ans = 2;
			d = a[j] - a[i];
			for(x = a[j]; pos[x+d] != -1; x += d){
				ans++;
			}
			
			sol = max(sol, ans);

		} 
	}
	cout << sol;
 
}









