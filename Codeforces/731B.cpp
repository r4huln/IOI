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
	int n;
	cin >> n;
	int a[n];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		if(a[i] < 0){
			cout << "NO" << endl;
			return 0;
		}
		if(a[i] % 2 == 1){
			if(i == n){
				cout << "NO" << endl;
				return 0;
			}
			a[i+1] -= 1;
		}

		if(i == n && a[n] % 2 == 0){
			cout << "YES" << endl;
		}
		
	}

}