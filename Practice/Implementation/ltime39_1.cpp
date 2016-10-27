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
	int t, n, x, y, z;
	cin >> t;
	bool yes = true;
	int a[0];
	for(int i = 0; i < t; i++){
		yes = true;
		cin >> n;
		for(int i = 0; i < 1; i++){
			cin >> x;
			int a[x];
			for(int i = 0; i < x; i++){
				cin >> a[i];
			}

		
			for(int i = x-1; i >=  0; i--){
				cin >> z;
				if(a[i] != z){
					yes = false;
				}

			}
		}
		if(yes){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}

	}

}