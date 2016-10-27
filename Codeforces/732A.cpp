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
	int k, r;
	cin >> k >> r;
	int ans = 1;
	int mult = 2;
	int x = k;
	while(k % 10 != r && k % 10 != 0){
		ans++;
		k = x * mult;
		mult++;
	}
	cout << ans << endl;
}
