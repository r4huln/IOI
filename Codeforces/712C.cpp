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
	int x;
	int y;
	cin >> x >> y;
	int three = 3;
	int a = y;
	int b = y;
	int c = y;
	int count = 0;
	while(a != x || b != x || c != x){
		if(a == x){
			count--;
		}
		a = (b + c) - 1;
		if(a > x){
			a = x;
		}
		if(b == x){
			count--;
		}
		b = (a + c) - 1;
		if(b > x){
			b = x;
		}
		if(c == x){
			count--;
		}
		c = (a + b) - 1;
		if(c > x){
			c = x;
		}
		count += 3;
	}
	cout << count;
}