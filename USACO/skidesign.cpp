
/*ID: r4huln1
PROG: skidesign
LANG: C++14
*/

#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

const int N = 1001;

int n,hills[1000];

int main()
{
	ifstream fin("skidesign.in");
	ofstream fout("skidesign.out");

	cin >> n;
	for(int i=0; i<n; i++){
		cin >> hills[i];
	}

	int mincost=1e8;
	for(int i=0; i<=83; i++){
		int cost=0,x;
		for(int j=0; j<n; j++){
			if (hills[j]<i)
				x=i-hills[j];
			else if (hills[j]>i+17)
				x=hills[j]-(i+17);
			else
				x=0;
			cost+=x*x;
		}
		mincost=min(mincost,cost);
	}

	cout << mincost << "\n";
}









