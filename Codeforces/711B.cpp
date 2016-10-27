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
	lli a[n][n];
	int i = 0;
	int j = 0;
	int x, y;
	lli xsum = 0;
	lli ysum = 0;
	lli diag1 = 0;
	lli diag2 = 0;
	lli gh;
	bool answer = true;
	bool dia1 = false;
	bool dia2 = false;
	lli max0 = -1;
	lli min0 = 1000000000000000000;
	lli max = -1;
	lli min = 1000000000000000000;
	if(n == 1){
		if(a[0][0] == 0){
			cout << 1 << endl;
		}
		else{
			cout << a[0][0] << endl;
		}
		return 0;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			if(a[i][j] == 0){
				x = i;
				y = j;
			}
		}
	}
	for(int j = 0; j < n; j++){
		xsum += a[x][j];
	}
	for(int j = 0; j < n; j++){
	
		ysum += a[j][y];
	}
	lli rowsum[501], columnsum[501];
	lli sum = 0;
	for(int i = 0; i < n; i++){
		sum = 0;
		if(i == x){
				continue;
		}
		for(int j = 0; j < n; j++){
			
			sum += a[i][j];
		}
		
		max0 = ::max(sum, max0);
		min0 = ::min(sum, min0);
		
	}

	if(min0 != max0){
		answer = false;
		cout << -1;
		return 0;
	}

	for(int i = 0; i < n; i++){
		sum = 0;
		if(i == y){
			continue;
		}
		for(int j = 0; j < n; j++){
			sum += a[j][i];
		}
		
		max = ::max(sum, max);
		min = ::min(sum, min); 
	}
	if(min != max){
		answer = false;
		cout << -1;
		return 0;
	}
	if(min0 != max || min0 != min || max != max0 || min != max0){
		answer = false;
		cout << -1;
		return 0;
	}

	for(int i = 0; i < n; i++){
			diag1 += a[i][i];
	}
	for(int i = 0; i < n; i++){
			diag2 += a[i][n-1-i];
	}
	int f = n-1;
	int t = 0;
	
	if(x == y){
		dia1 = true;
		
	}
	if(abs(f-y) == abs(x-t)){

		dia2 = true;

	}
	if(dia1 && dia2){
		if(diag1 != diag2 || diag1 != xsum || diag1 != ysum){
			answer = false;
		}
	}
	else if(dia1){
		for(int i = 0; i < n; i++){
			if(diag1+abs(max- xsum) != diag2 || diag1 != xsum || diag1 != ysum){
				answer = false;
			}
		}
		
	}

	else if(dia2){
		for(int i = 0; i < n; i++){
			if(diag2+abs(min - xsum) != diag1 || diag2 != xsum || diag2 != ysum){
				answer = false;
			}	
		}
		
	}
	
	else{
		if(xsum == ysum){

			if(abs(max - xsum) > 0){

				if(xsum + abs(max - xsum) == diag2 && xsum + abs(max - xsum) == diag1){
					answer = true;
				}
				else{
					answer = false;
				}
			}
	

		}
		else{
			answer = false;
		}

	}
	if(answer){
			
		lli xi = abs(max - xsum);
		if(xi == 0){
			cout << -1;
			return 0;
		}
		cout << xi;
		
	}
	else{
		cout << -1;
	}

}