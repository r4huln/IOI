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
	int f;
	cin >> f;
	string x;
	cin >> x;
	int a[5];
	string r;
	for(int i = 0; i < 5; i++){
		if(i == 2){
			continue;
		}
		r = x[i];
		a[i] = std::stoi(r);
	}
	int hours = (a[0] * 10) + a[1];
	int minutes = (a[3] * 10) + a[1];

	if(f==12){
			if(a[0] == 0){
				if(a[1] == 0){
					a[1] = 1;
				}
			}
			else if(a[0] > 1 && a[1] > 2){
				a[0] = 0;

			}
			else if(a[0] > 1){
				if(a[1] != 0){
					a[0] = 0;
				}
				else{
					a[0] = 1;
				}
			}
			else if(a[1] > 2 && a[0] != 0){
				a[1] = 2;
			}	

			if(a[3] > 5){
				a[3] = 5;
			}
		
	}
	else{
			
				
		if(a[0] > 2){
			a[0] = 0;
		}
		else if(a[0]== 2){
			if(a[1] > 3){
				a[1] = 0;
			}
		}
				

		if(a[3] > 5){
			a[3] = 5;
		}
	}

	for(int i = 0; i < 5; i++){
		if(i == 2){
			cout << ":";
			continue;
		}
		cout << a[i];
	}
}
