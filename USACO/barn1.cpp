/*
ID: r4huln1
PROG: barn1
LANG: C++14
*/

#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;
int main(){
	ofstream fout ("barn1.out");
	ifstream fin ("barn1.in");
	int M, S, C;
	//cin >> M >> S >> C;
	fin >> M >> S >> C;
	
	int a[C];

	for(int i = 0; i < C; i++){
		//cin >> a[i];
		fin >> a[i];
	}
	if(M >= C){
		//cout << C << endl;
		fout << C << endl;
		return 0;
	}
	sort(a, a+C);
	int cur_best[S];
	cur_best[0] = C-1;
	cur_best[M] = 0;
	int dist[C];
	int x = 1;
	for(int i = 0; i < C; i++){
		dist[i] = 0;
	}
	for(int i = 0; i < C-1; i++){
		dist[i] =  a[x] - a[i];
		x++;
	}
	int max_dist = 0;
	int pos;
	int X = C-1;
	for(int i = 1; i < M; i++){
		max_dist = 0;
		for(int i = X; i >= 0; i--){
			if(dist[i] > max_dist){
				pos = i;
			}
			max_dist = max(dist[i], max_dist);
		}
		dist[pos]=-1;
		cur_best[i] = pos;
	}
	int ans=0;
	int l = M+1;
	//sort(cur_best, cur_best+l);
	
	
	for(int i = 0; i < M; i++){
		//cout << ans << endl;
		if(i == M) ans+= 0;
		else if(i == M-1)  ans += (a[cur_best[i]] - a[cur_best[i+1]]) + 1;
		else ans += (a[cur_best[i]] - a[cur_best[i+1]+1]) + 1;
	}
	//cout << ans << endl;
	fout << ans << endl;

	
}

