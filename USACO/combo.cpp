/*
ID: r4huln1
PROG: combo
LANG: C++14
*/
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
int n;

int greedy(int d){
	if(d == 4) return 1;
	if(d == 3) return 2;
	if(d == 2) return 3;
	if(d == 1) return 4;
	if(d == 0) return 5;
	if(d == n - 1) return 4;
	if(d == n - 2) return 3;
	if(d == n - 3) return 2;
	if(d == n - 4) return 1;
	else return 0;
}
int main(){
	ofstream fout ("combo.out");
	ifstream fin ("combo.in");
	fin >> n;
	int a, b, c;
	fin >> a >> b >> c;
	int g, e, f;
	fin >> g >> e >> f;
	int x, y, z;

	if(n > 5){
		x = greedy(abs(a - g));
		y = greedy(abs(b - e));
		z = greedy(abs(c - f));
		fout << (250 - (x * y * z))  << endl;
	}
	else{
		fout << n * n * n << endl;
	}
}











