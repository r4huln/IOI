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
	lli n, h;
	cin >> n >> h;
	lli init[n];
	for(lli i = 0; i < n; i++)
	{
		cin >> init[i];
	}
	int x[4];
	int c = 1;
	int i = 0;
	int tmp;
	int tempkill;
	bool pickup = false;
	while(1)
	{
		cin >> c;
		if(c == 0)
		{
			break;
		}
		if(c == 1 && i > 0)
		{

			i-=1;
			
		}
		else if(c == 2 && i < n-1)
		{
			
			i+=1;

		}
		else if(c == 3 && !pickup)
		{
			if(init[i] > 0)
			{
				init[i] -= 1;
				pickup = true;
			}
			

		}
		else if(c == 4 && pickup)
		{

			if(init[i] < h)
			{
				init[i] += 1;
				pickup = false;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		cout << init[i] << " ";
	}
}