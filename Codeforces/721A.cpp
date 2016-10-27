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

	string s;
	cin >> s;
	int count = 0;
	int ans = 0;
	int num[101];
	int l = -1;
	for(int i = 0; i < n; i++){

		if(s[i] == 'B'){
			ans++;
			count = 0;
			while(s[i] != 'W' && i < n){
				count++;
				i++;
			}
		}

	}

	cout << ans << endl;


	for(int i = 0; i < n; i++){

		if(s[i] == 'B'){
			ans++;
			count = 0;
			while(s[i] != 'W' && i < n){
				count++;
				i++;
			}
			cout << count << " ";
		}

	}


}
