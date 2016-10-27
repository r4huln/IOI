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

	int a[n];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int count = 0;
	int j = 2;
	for(int i = 1; i < n; i++){

		if(a[i] + a[j] < k){
			count += k - (a[i] + a[j]) ;
			a[j] += k - (a[i] + a[j]) ;
		}
		j++;

	}

	cout << count << endl;
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
}
























































