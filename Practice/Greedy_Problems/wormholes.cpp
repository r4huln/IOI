#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, x, y;

	cin >> n >> x >> y;
	pair<int, int> C[100001];
	int V[100001];
	int W[100001];
	for(int i = 0; i < n; i++){
		cin >> C[i].first >> C[i].second;
	}

	for(int i = 0; i < x; i++){
		cin >> V[i];
	}

	for(int i = 0; i < y; i++){
		cin >> W[i];
	}

	sort(C, C+n);
	sort(V, V+x);
	sort(W, W+y);
	int z;
	int t, r, s;
	int ans = 1e8;
	for(int i = 0; i < n; i++){
		z = C[i].first;
		t = C[i].second;
		r = (upper_bound(V, V+x, z) - V) - 1;
		
		s = lower_bound(W, W+y, t) - W;
		if((W[s] - V[r])+1 <= 0){
			continue;
		}
		ans = min(ans, (W[s] - V[r])+1 );
	}
	cout << ans << endl;
}