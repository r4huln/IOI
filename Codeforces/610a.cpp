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
	lli sum = 0;
	if(n % 2 == 1){
		cout << 0;
	}
	else{
		if(n <= 2){
			cout << 0;
		}
		else{
			if(n % 4 == 0){
				cout << n/4-1;
			}
			else{
				cout << n/4;
			}

		}
	}	
}