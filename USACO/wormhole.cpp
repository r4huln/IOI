/*
ID: r4huln1
PROG: wormhole
LANG: C++14
*/

#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int n;
int a[100];
int b[100];
int partner[100];
int right1[100];


bool cycle()
{
	for(int i = 1; i <= n; i++){
		int pos = i;
		for(int j = 1; j <= n; j++){
			pos = partner[pos];
			pos = right1[pos];
		}
		if(pos!=0) return true;
	}
    return false;
}

bool check(){
	for(int i = 1; i <= n; i++){
		if(partner[i] == 0){
			return false;
		}
	}
	return true;
}

int solve()
{
    int i, total=0;
    for (i=1; i<=n; i++)
        if (partner[i] == 0) break;
 
    if(check()){
    	if(cycle()) return 1;
    	else return 0;
    }
   
 
    for (int j=i+1; j<=n; j++){
        if (partner[j] == 0){
            partner[i] = j;
            partner[j] = i;
            total += solve();
            partner[i] = partner[j] = 0;
        }
    }
    return total;
}

using namespace std;
int main(){
	ofstream fout ("wormhole.out");
	ifstream fin ("wormhole.in");

	fin >> n;

	for(int i = 1; i <= n; i++){
		fin >> a[i] >> b[i];				
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){

			if(a[j] > a[i] && b[i] == b[j] ){
				if(right1[i] == 0 || a[j] - a[i] < a[right1[i]] - a[i]){
					right1[i] = j;
				}
			}
			
		}
	}
	fout << solve() << endl;

}



