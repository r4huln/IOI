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
	int n, k;
	cin >> n >> k;

	string a;
	int x = 0;
	int ans = 0;
	int cnt[101];
	memset(cnt, 0, sizeof cnt);
	for(int i = 1; i <= n; i++){
		cin >> a;
		x = a.size();
		cnt[x]++;
		ans = min(ans, x);
	}
	string pwd;
	cin >> pwd;

	int pl = pwd.size();
	int best = 0;
	int pen = 0;
	for(int i = 0; i < pl; i++){
		for(int j = 0; j < cnt[i]; j++){
			best++;
			pen++;

			if(pen >= k){
				best+=5;
				pen = 0;
			}

		}
	}

	best++;
	cout << best<< " ";

	for(int i = 0; i < cnt[pl]; i++){
		if(pen >= k){
			best+=5;
			pen = 0;
		}
		pen++;

	}
	cout << best+cnt[pl]-1;
	
}




