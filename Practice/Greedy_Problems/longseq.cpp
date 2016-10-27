#include <vector>
#include <map>
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
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#define lli long long int
 
using namespace std;


int main(){
	int t;
	scanf("%d", &t);
	char s[100000];
	bool one = false;
	bool zero = false;
	bool zp = true;
	bool op = true;
	lli count0 = 0;
	lli count1 = 0;
	while(t--){
		scanf("%s", s);
		one = false;
		zero = false;
		zp = true;
		op = true;
		count0 = 0;
		count1 = 0;
		if(strlen(s) == 1){
			cout << "Yes" << endl;
			continue;
		}
		for(int i = 0; i < strlen(s); i++){
			if(s[i] == '0' && count0 > 0){
				zero = true;
			}
			else if(s[i] == '1' && count1 > 0){
				one = true;
			}
			if(s[i] == '0'){
				count0 += 1;
				op = false;
			}
			if(s[i] == '1'){
				count1 += 1;
				zp = false;
			}

			if(one && zero){
				cout << "No" << endl;
				break;
			}

		}
		if(op == 1 || zp == 1){
			cout << "No" << endl;
		}
		else if(one && !zero){
			cout << "Yes" << endl;
		}
		else if(zero && !one){
			cout << "Yes" << endl;
		}
		else if(!zero && !one){
			cout << "Yes" << endl;
		}
	}
}