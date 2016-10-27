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
	lli n;
	cin >> n;
	lli a[n];
	for(lli i = 0; i < n; i++){
		cin >> a[i];
	}
	lli b[n];
	b[n-1] = a[n-1];
	//cout << b[n-1] << " ";
	for(lli i = n-2; i >= 0; i--){
		b[i] = a[i] + a[i+1];
	}
	for(lli i = 0; i < n; i++){
		if(i == n-1){
			cout << b[i];
			break;
		}
		cout << b[i] << " ";

	}
}