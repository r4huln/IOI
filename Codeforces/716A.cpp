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
	lli n, c;
	lli x;
	lli y;
	lli count = 1; 
	cin >> n >> c;
	if(n == 1){
		cout << 1;
		return 0;
	}
	for(int i = 1; i <= n; i++){
		cin >> x;
		if(i > 1){
			if(x - y > c){
				count = 0;
				count++;
			}
			else{
				count++;
			}
		}
		y = x;
	}
	cout << count;

}