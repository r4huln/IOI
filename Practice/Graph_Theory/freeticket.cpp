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
#define INF 100000007

using namespace std;

int ans = 0;
int ko, po, so, f, c;
 

int main()
{
    cin >> c >> f;
    int graph[c][c];
 	for(int u = 0; u < c; u++)
 	{
 		for(int o = 0; o < c; o++)
 		{
 			graph[u][o] = INF;
 		}
 	}
 	for(int o = 0; o < c; o++)
 	{
 			graph[o][o] = 0;
 	}
 	for(int u = 0; u < f; u++)
 	{
 		cin >> ko >> po >> so;
 		graph[ko-1][po-1] = so;
 		graph[po-1][ko-1] = so;
 	}
 	int dist[c][c];
 	for(int u = 0; u < c; u++)
 	{
 		for(int o = 0; o < c; o++)
 		{
 			dist[u][o] = graph[u][o];
 		}
 	}
    for(int k = 0; k < c; k++){
        for (int i = 0; i < c; i++){
            for (int j = 0; j < c; j++){
                if(graph[i][k] + graph[k][j] < graph[i][j]){
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }
    for (int i = 0; i < c; i++){    
        for (int j = 0; j < c; j++){
            ans = max(ans, graph[i][j]);
        }
 	}
    cout << ans << endl;
}