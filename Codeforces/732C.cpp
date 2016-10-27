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
	lli b, d, s;
	lli a[10];
	for(int i = 1; i <= 3; i++){
		cin >> a[i];
	}


	lli m = 0;
	lli pos;

	bool visited = false;
	for(int i = 1; i <= 3; i++){
		if(a[i] > m){
			pos = i;
			m = a[i];
		}
		
	}
	lli ans = 0;
	for(int i = 1; i <= 3; i++){
		if(i == pos){
			continue;
		}
		if( abs((a[pos] - a[i])) > 0 ){
			ans += abs((a[pos] - a[i])) - 1;
		}

	}
	if(ans < 0){
		cout << 0 << endl;
	}
	else{
		cout << ans << endl;
	}
}





























