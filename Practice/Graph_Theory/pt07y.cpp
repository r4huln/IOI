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
vector<int> cnt;
vector<int> f;
int c[N+1];
vector<int> lst;
int maxi;
int count1, size;
bool visited[N];
int n, m, k, a, b;
void dfs(int node, int maxval){
		visited[node] = true;
		
		maxi = max(maxi, cnt[node]);

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
	cnt.resize(N+1);
	lst.resize(N+1);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> c[i];
	}
	for(int i = 1; i <= n; i++){
		cin >> cnt[i];
	}
	int root;
	for(int i = 1; i <= n; i++){
		if(f[i] == -1){
			root = i;
			continue;
		}
		cin >> f[i];
	}
	dfs(root, cnt[root])
	
	cout << ans << endl;

}
