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
	char ch[2];
	scanf("%s", ch);
	int x = (ch[0] - 'a') + 1;
	int y = ch[1] - '0';
	//cout << y;
	if(x >= 2 && x < 8){
		x = 3;
	}
	else{
		x = 2;
	}
	if(y >= 2 && y < 8){
		y = 3;
	}
	else{
		y = 2;
	}
	cout << x * y - 1 << endl;
}






