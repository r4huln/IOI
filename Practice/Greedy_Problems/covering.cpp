#include <vector>
#include <map>
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
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#define lli long long int
 
using namespace std;


int main(){
	int n;
 
	cin >> n;
	pair<long int, long int> a[5001];
 
	for(int i = 0; i < n; i++){
		cin >> a[i].first >> a[i].second;
	}
	sort(a, a+n);
	int x = 1;
	int c = 0;
	int i = 0;
	int ans = 1;
	while(i < n-1){
		
		while(x < n){  
			if(a[i].second < a[x].first){
				ans++;
				i = x;
			}
			else if(a[i].second >= a[x].first && a[i].second > a[x].second){
				i = x; 
			}   
			x++;			
		}
		i++;
	}
	cout << ans << endl;
 
 
} 
