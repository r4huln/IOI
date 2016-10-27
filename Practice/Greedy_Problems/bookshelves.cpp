/* Rahul Narayanan,
13001,
Bookshelves */
 
#include <vector> 
#include <queue>
#include <map> 
#include <set>
#include <algorithm>
#include <iostream> 
 
using namespace std;

const int N = 1e5+1;
int a[N];
int b[N];
int n, k, max1;
int sum;
int z;
int x, y;
int ans, ans1;
int temp[N];
int temp2[N];
int ba(){
	z = 0;
	sum = 0;
	max1 =0;
	for(int i = 0; i < n; i++){
		temp[i] = a[i];
		temp2[i] = b[i];
	}
	x = temp[n-1];
	while(temp2[n-1-z] > temp[z] && z < n && sum < k){
		std::swap(temp2[n-1-z], temp[z]);
		z++;
		sum++;
	}
	for(int i = 0; i < n; i++){
		max1 = ::max(max1, temp2[i]);
	}
	y = max1;
	sort(temp, temp+n);
	x = temp[n-1];
	return x + y;
}

int ab(){
	z = 0;
	sum = 0;
	max1 =0;
	x = b[n-1];
	while(a[n-1-z] > b[z] && z < n && sum < k){
		std::swap(a[n-1-z], b[z]);
		z++;
		sum++;
	}
	for(int i = 0; i < n; i++){
		max1 = ::max(max1, a[i]);
	}
	y = max1;
	sort(b, b+n);
	x = b[n-1];
	return x + y;
}
 
int main(){
	max1 = 0;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	sort(a, a+n); 
	sort(b, b+n);
	ans = ba();
	ans1 = ab();
	cout << min(ans, ans1) << endl;
}
 