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
char s[100000];
char a[100000];
char l[100000];
int main(){
	bool string = false;
	bool printed = false;
	scanf("%s", s);
	int length = strlen(s);
	//memset(a, 97, sizeof a);
    for(int i = 0; i < length; i++){
    	if((s[i] - 'a')+1 > 1){
    		s[i] -= 1;
    		string = true;
    	}
    	else{
    		if(string){
    			break;
    		}
    		else{
    			if(i == length-1){
    				s[length-1] = 'z';
    			}
    			continue;
    		}
    	}
    }
    cout << s << endl;
}

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
char s[100000];
char a[100000];
char l[100000];
int main(){
    bool string = false;
    bool printed = false;
    scanf("%s", s);
    int length = strlen(s);
    //memset(a, 97, sizeof a);
    for(int i = 0; i < length; i++){
        if((s[i] - 'a')+1 > 1){
            s[i] -= 1;
            string = true;
        }
        else{
            if(string){
                break;
            }
            else{
                if(i == length-1){
                    s[length-1] = 'z';
                }
                continue;
            }
        }
    }
    cout << s << endl;
}

