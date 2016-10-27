/*
ID: r4huln1
PROG: milk
LANG: C++14
*/

#include <iostream>
#include <fstream>
#include <string>
 
#include <algorithm>
#define lli long long int

using namespace std;

int main(){
	ofstream fout ("milk.out");
	ifstream fin ("milk.in");

	lli M, N;
	fin >> M >> N;
	pair<long int, long int> A[5001];
   	for(int i = 0; i < N; i++){
   		fin >> A[i].first >> A[i].second;
   	}
   	sort(A, A+N);
   	lli ans;
   	for(int i = 0; i < N; i++){
   		if(A[i].second > M){
   			A[i].second = M;
   			ans+= A[i].second * A[i].first;
   			break;
   		}
   		else{
   			M-=A[i].second;
   			ans+=A[i].second * A[i].first;
   		}
   
   	}
   	fout << ans << endl;
}