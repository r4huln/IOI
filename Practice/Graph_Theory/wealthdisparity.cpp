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
#define N -100000001
using namespace std;
typedef vector<int> vi;
int value = 0;

int n, x, y, root;
int ans = N;
vector <int> values;
vector <vi> adjlist; 

int dfs(int node, int val);

int main(){
	scanf("%d", &n);
	adjlist.resize(n+1);
	values.resize(n+1);
	for(int i = 0; i < n; i++){
		scanf("%d", &x);
		values[i] = x;
	}

	for(int i = 0; i < n; i++){
		scanf("%d", &y);
		if(y == -1){
			root = i;
		}
		else{
			adjlist[y-1].push_back(i);
		}
	}
	cout << dfs(root, values[root]);
}

int dfs(int node, int val){

	for(int i = 0; i < adjlist[node].size(); i++){
		val = max(val, values[node]);
		ans = max(ans, (val - values[adjlist[node][i]]));
		dfs(adjlist[node][i], val);
	}
	return ans;
}

