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

int pos(char s){
	if(s == 'a') return 1;
	if(s == 'b') return 2;
	if(s == 'c') return 3;
	if(s == 'd') return 4;
	if(s == 'e') return 5;
	if(s == 'f') return 6;
	if(s == 'g') return 7;
	if(s == 'h') return 8;
	if(s == 'i') return 9;
	if(s == 'j') return 10;
	if(s == 'k') return 11;
	if(s == 'l') return 12;
	if(s == 'm') return 13;
	if(s == 'n') return 14;
	if(s == 'o') return 15;
	if(s == 'p') return 16;
	if(s == 'q') return 17;
	if(s == 'r') return 18;
	if(s == 's') return 19;
	if(s == 't') return 20;
	if(s == 'u') return 21;
	if(s == 'v') return 22;
	if(s == 'w') return 23;
	if(s == 'x') return 24;
	if(s == 'y') return 25;
	if(s == 'z') return 26;
}

int main(){
	char s[100];
	cin >> s;
	int ans = 0;
	int cpos = 1;
	for(int i = 0; i < strlen(s); i++){
		int p = pos(s[i]);
		//cout << p << " ";
		if(abs(p - cpos) <= 12){
			ans += abs(p - cpos);
		}
		else{
			ans += 26 - (abs(p - cpos) );
		}

		//cout << ans << endl;
		cpos = p;
	}
	cout << ans << endl;
}



