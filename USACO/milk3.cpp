/*
ID: r4huln1
PROG: milk3
LANG: C++14                 
*/

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
#include <fstream> 
#define ll long long 
using namespace std;

int max_a , max_b , max_c;
int a, b ,c ;
bool visited[60][60][60];
set<int> answer;



int pour(int x, int y, int z){
	
	if(visited[x][y][z]){
		return 0;
	}

	if(x == 0){
		answer.insert(z);
	}
	visited[x][y][z] = true;
	if(x + z <= max_a){
		pour(x+z,y,0);
	}
	else{
		pour(max_a , y, z- (max_a - x));
	}

	if(y + z <= max_b)
		pour(x, y+z, 0);
	else
		pour(x, max_b, z-(max_b-y));


	if(x + y <= max_a){
		pour(x + y, 0, z);
	}
	else{
		pour(max_a, y - (max_a-x), z);
	}

	if(x + z <= max_c){
		pour(0,y,z+x);
	}
	else{
		pour(x-(max_c - z) , y, max_c);
	}

	if(y + z <= max_c){
		pour(x,0,y+z);
	}
	else{
		pour(x , y - (max_c - z), max_c);
	}

	if(x + y <= max_b){
		pour(0, x+y, z);
	}
	else{
		pour(x - (max_b - y), max_b, z);
	}


}



int main(){
	ofstream fout("milk3.out");
	ifstream fin("milk3.in");
	fin >> max_a >> max_b >> max_c;
	
	for(int i = 0; i <= 55; ++i){
		for(int j = 0; j <= 55; ++j){
			for(int k = 0; k <= 55; ++k){
				visited[i][j][k] = false;
			}
		}
	}
	a = b = 0;
	c = max_c;
	answer.insert(c);
	if(c <= max_a)
		pour(a+c, b, 0);
	else
		pour(max_a, b, c - max_a);


	if(c <= max_b)
		pour(a, b+c, 0);
	else
		pour(a, max_b, c-max_b);

	for(set<int>::iterator i = answer.begin(); i != answer.end(); ++i){
		if(i != answer.begin()){
			fout << " ";
		}
		fout << *i;
	}
	fout << endl;
}


