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
	lli x;
	if(n == 1){
		cout << 2;
		return 0;
	}
	for(lli i = 1; i <= n; i++){
		if(i == 1){
			cout << 2 << endl;
			continue;
		}
		x = i * i * i + 2 * (i * i) + 1;
		cout << x << endl;
	}


}