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
	char S[26];
	scanf("%s", S);
	int len = strlen(S);
	int length;
	int x;
	char a[26];
	bool yes = true;
	memset(a, false, 26);
	for(int i = 0; i <= 26; i++){
		a['a'+i-1] = false;
	}
	for(int x = 0; x < len; x++){
		a[S[x]] = true;
	}
	int n;
	cin >> n;
	char b[100];
	for(int i = 0; i < n; i++){
		yes = true;
		scanf("%s", b);
		length = strlen(b);

			for(int i = 1; i < strlen(b); i++){
				if((b[i]-'a')+1 == (b[i-1]-'a')+1){
					length--;
				}
			}
			length-=1;
			if(length <= len){
				for(int i = 0; i < strlen(b); i++){
					if(!a[b[i]]){
						yes = false;
						break;
					}
				}
			}
			else{

				yes = false;
			}
			
		if(yes){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}

	}
	

}
