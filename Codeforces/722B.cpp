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

 	int v[n];
	for(int i = 0; i < n; i++){
		cin >> v[i];

	}
	bool ans = true;
	char s[201];
	int len;
	int split = 0;
	for(int i = 0; i < n; i++){
			split = 0;

			scanf(" %[^\n]", s);
			len = strlen(s);
			
			for(int j = 0; j < len; j++){
					
				if(s[j] == 'a' || s[j] == 'e' || s[j] =='i' ||s[j] == 'o' || s[j] =='u' || s[j] =='y'){
					split++;
				}

			}
			if(split != v[i]){
				ans = false;
			}
	}
	if(ans){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
