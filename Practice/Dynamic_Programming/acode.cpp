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
#define lli long long int

using namespace std;

int main(){
	while(1){
		lli check;
		char s[5010];
		lli dp[5010];
		scanf("%s", s);
		if(s[0] == '0'){
			break;
		}
		memset(dp,0,5010);
		dp[0] = 1;
		lli len = strlen(s);
		for(lli i = 1; i < len; i++){
			check = (s[i-1] - '0') * 10 + (s[i] - '0');
			if(s[i] - '0' > 0){
				dp[i] = dp[i-1]; 
			}
			if(check >= 10 && check <= 26){
				if(i == 1){
					dp[i] += dp[0];	
				}
				else{
					dp[i] += dp[i-2];	
				}
			}
		}
		cout << dp[len-1] << endl;
	}
}