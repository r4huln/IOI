/*
ID: r4huln1
PROG: beads
LANG: C++11                  
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
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#define lli long long int

using namespace std;

int main() {
 ofstream fout ("beads.out");
 ifstream fin ("beads.in");
 int N;
 fin >> N;
 string beads;
 fin >> beads;
  
 if(beads.length() != N)
  N = beads.length();
  
 int cur = 0, max = 0;
 char color;
 bool switched;
  
 for(int i = 0; i < N; ++i){
  // complexity O(n)
  cur = 0;
  switched = false;
  color = 'w';
  for(int j = 0; j < N; ++j){
    char cur_c = beads[(i + j) % N];
   if(cur_c != 'w'){
    if(color == 'w'){
     color = cur_c;
    }
    else if(color != cur_c){
     if(switched)
      break;
     else{
      color = cur_c;
      switched = true;
     }
    }
   }
   cur++;
  }
  if(cur > max)
   max = cur;
 }
  
 fout << max << endl;
 return 0;
}

