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
	int a, b, c;
	int ans[n];
	cout << "? 1 2" << endl;
	cin >> a;
	cout << "? 2 3" << endl;
	cin >> b;
	cout << "? 1 3" << endl;
	cin >> c;

	ans[2] = ((a + b) - c) / 2;
	ans[1] = a - ans[2];
	ans[3] = b - ans[2];
	int x;
	for(int i = 4; i <= n; i++){
		cout << "? 2 " << i << endl;
		cin >> x;
		ans[i] = x-ans[2];
	}	

	cout << "!" << " ";
	for(int i = 1; i <= n; i++){
		if(i == n){
			cout << ans[i] << endl;
			continue;
		}
		cout << ans[i] << " ";
	}
}





