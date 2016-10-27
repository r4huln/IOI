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
const int N = 2e5+1;
typedef vector<int> vi;
vector<vi> connect;
int cnt[N+1];
vector<int> f;
int c[N+1];
vector<int> lst;
int maxi;
int count1, size;
bool visited[N];
int n, m, k, a, b;
void dfs(int node, int id){
		visited[node] = true;
		
		size++;
		cnt[c[node]]++;
		maxi = max(maxi, cnt[ c[node] ]);

		for(auto v:connect[node]){
			if(!visited[v]) dfs(v, id);
		}
}


int main(){
	maxi = 0;
	count1 = 0;
	size = 0;
	connect.resize(N+1);
	f.resize(N+1);
	lst.resize(N+1);
	cin >> n >> m >> k;
	for(int i = 1; i <= n; i++){
		cin >> c[i];
	}
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
		connect[a].push_back(b);
		connect[b].push_back(a);
		f[a] = 1;
		f[b] = 1;
	}
	int ans = 0;
	memset(cnt, 0, sizeof cnt);
	for(int i = 1; i <= n; i++){
		if(f[i] && !visited[i]){
			count1++;
			maxi = 0;
			size = 0;
			dfs(i, count1);
			ans+= abs(size - maxi);
		}

	}
	cout << ans << endl;

}


