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
 
int main(){
    // 1 1 2 3 3
    lli n;
    cin >> n;
    lli a[n];
    lli best = 0;
    lli worst = 1e9+1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        best = max(best, a[i]);
        worst = min(worst, a[i]);
    }
    sort(a, a+n);
    bool yn = true;
    bool xn = true;
    lli s;
    s = (best+worst)/2;
 
    lli init = abs(a[0] - s);
    for(int i = 1; i < n; i++){
        if( abs(a[i] - s) == init || a[i] == s){
            yn = true;
        }
        else{
            yn = false;
            break;
        }
    }

    if(yn){
        cout << "YES";
        fflush(stdout);
        return 0;
    }
   	s = best;
   	init = abs(a[0] - s);
    for(int i = 1; i < n; i++){
        if( abs(a[i] - s) == init || a[i] == s){
            yn = true;
        }
        else{
            yn = false;
            break;
        }
    }

     if(yn){
        cout << "YES";
        fflush(stdout);
        return 0;
    }

    s = worst;

    init = abs(a[0] - s);
    for(int i = 1; i < n; i++){
        if( abs(a[i] - s) == init || a[i] == s){
            yn = true;
        }
        else{
            yn = false;
            break;
        }
    }

 
    if(yn){
        cout << "YES";
        fflush(stdout);
    }
    else{
        cout << "NO";
        fflush(stdout);
    }
 
}