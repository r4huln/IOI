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
#include <string>
#define lli long long int
using namespace std;
typedef vector<long long int> vi;
 
const int N = 1001;
int n, K, count1, ans;
vector< vi > graph;
vector< vi > adjlist;
int b[N];
bool visited[N];
bool pos[N][N];
map<lli, lli> id;
int dfs(lli node){
	ans++;
 
	visited[node] = true;
	for(auto v:adjlist[node]){
		if(!visited[v]){
			dfs(v);
		}
	}
	return ans;
}
 
int main(){
	lli x;
	memset(pos, true, sizeof pos);
	memset(b, 0, sizeof b);
	memset(visited, false, sizeof visited);
 
	ans = 0;
	visited[0] = true;
	cin >> n >> K;
	graph.resize(n+1);
	adjlist.resize(n+1);
	count1 = 0;
	for(lli i = 0; i < n; i++){
		cin >> x;
		b[i] = x;
 
		for(lli j = 0; j < x; j++){
			lli y;
			cin >> y;
			graph[i].push_back(y);
		}
	}
 
	for(lli parent = 0; parent < n; parent++){
		for(lli child = 0; child < n; child++){
			if(!pos[parent][child]) continue;
			pos[parent][child] = false;
			if(child == parent) continue;
			count1 = 0;
			for(lli k = 0; k < b[child]; k++){
 
			}
			for(lli k = 0; k < b[parent]; k++){
 
			}

		}
	}
	cout << dfs(0);
 
}