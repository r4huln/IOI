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
 
const int N = 301;
const int E = 1e9;

lli n, K, ans, count1;
vector< vi > graph;
vector< vi > adjlist;
lli b[N];
bool visited[N];
bool pos[N][N];


 
lli dfs(lli node){
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
	temp.resize(N);
	graph.resize(n+1);
	adjlist.resize(n+1);
	for(lli i = 0; i < n; i++){
		cin >> x;
		b[i] = x;
 
		for(lli j = 0; j < x; j++){
			lli y;
			cin >> y;
			graph[i].push_back(y);
		}
	}
 
	for(auto v: graph){
		sort(v.begin(), v.end());
	}

	
	for(lli parent = 0; parent < n; parent++){
		for(lli child = 0; child < n; child++){
		
			if(child == parent) continue;
			count1 = 0;
			for(int k = 0; k < b[child]; k++){
				if(binary_search(graph[parent].begin(), graph[parent].end(), graph[child][k]))
				{
					count1++;
				}
				if(count1 >= K){
					adjlist[parent].push_back(child);
					adjlist[child].push_back(parent);
				}
			}  
		}
	}
	cout << dfs(0);
 
}
