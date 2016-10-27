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

int count(int num){
	int tot = 0;
	while(num > 0){
		tot++;
		num/=10;
	}
	return tot;
}
int combine1(int a, int b) {
   int times = 1;
   while (times <= b)
      times *= 10;
   return a*times + b;
} 

int main(){
	int init, end;
	cin >> init >> end;
	int ans[1000];
	int sum = 0;
	int x = 1;
	ans[0] = end;
	if(init == end){
		cout << "YES" << endl;
		cout << 2 << endl;
		cout << init << " " << end;
		return 0;
	}
	while(end != init){
		if(end < init){
			cout << "NO" << endl;
			return 0;
		}
		if(end % 2 == 0){
			end /= 2;
			ans[x] = end;
			sum++;
			x++;
		}
		else if(end % 10 == 1){
			end /= 10;
			ans[x] = end;
 			sum++;
			x++;
		}
		else{
			if(init == end){
				cout << "YES" << endl;
				break;
			}
			else{
				cout << "NO" << endl;
				return 0;
			}
			
		}
		if(end == init){
			cout << "YES" << endl;
			break;
		}
	}
	cout << sum+1 << endl;
	for(int i = x-1; i >= 0; i--){
		cout << ans[i] << " ";
	}
	
}









