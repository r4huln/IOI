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
	lli l1, r1, l2, r2, k;
	cin >> l1 >> r1 >> l2 >> r2 >> k;
	lli s;
	if(l2 >= l1 && r2 <= r1){
		s = (r2 - l2) + 1;
		if(k >= l2 && k <= r2){
			s--;
		}
	}
	else if(l1 >= l2 && r1 <= r2){
		s = (r1 - l1) + 1;
		if(k >= l1 && k <= r1){
			s--;
		}
	}
	else if(l2 >= l1 && l2 <= r1){
		s = (r1-l2) + 1;
		if(k >= l2 && k <= r1){
			s--;
		}
	}
	else if(l1 >= l2 && l1 <= r2){
		s = (r2-l1) + 1;
		if(k >= l1 && k <= r2){
			s--;
		}
	}
	else if(l2 > r1){
		s = 0;
	}
	else if(l1 > r2){
		s = 0;
	}
	cout << s << endl;
	fflush(stdout);

}