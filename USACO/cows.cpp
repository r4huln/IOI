/*
ID: 
PROG: milk2
LANG: C++11                  
*/

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
	ofstream fout ("milk2.out");
 	ifstream fin ("milk2.in");
	int n, init, tmp; 
	int l, s = 0; 
	fin >> n;
	int end[n];
	pair<int,int> start[5001];
	for(lli i = 0; i < n; i++){
		fin >> start[i].first >> start[i].second; 

	}
	sort(start, start + n);

	for(int i = 0; i < n; i++){
		init = start[0].first;
		if(n == 1){
			l = max(l, start[0].second - start[0].first);
			s = 0;
		}
		else{
			if(i == 0){
				l = max(l, start[i].second - start[i].first);
				s = 0;
			}
			else{

				if(start[i].first > tmp){
					init = start[i].first;
					if(init - tmp < 0) s = 0;
					s = max(s, init - tmp);
					l = max(l, start[i].second - start[i].first);
				}
				else{
					if(init - tmp < 0) s = 0;

					l = max(l , start[i].first - init);
					s = max(s, init - tmp);
				}


			}
			tmp = start[i].second;
		}
	}
	fout << l  << " " << s << endl;

	
	
	
}
