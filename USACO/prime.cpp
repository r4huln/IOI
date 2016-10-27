/*
ID: r4huln1
PROG: crypt1
LANG: C++14
*/
 
#include <stdio.h>
 
int a [10];
int n;
int count;
 
bool find (int x)
{
    for ( int i = 0; i < n; i++ ) {
        if ( a [i] == x )
            return true;
    }
 
    return false;
}
 
void function (int p, int q, int r, int s, int t)
{
    int first = p * 100 + q * 10 + r;
    int second = s * 10 + t;
 
    if ( first * second > 9999 )
        return;
 
    int temp = first * t;
    if ( temp > 999 )
        return;
 
    while ( temp ) {
        if ( !find (temp % 10) )
            return;
        temp /= 10;
    }
 
    temp = first * s;
    if ( temp > 999 )
        return;
 
    while ( temp ) {
        if ( !find (temp % 10) )
            return;
        temp /= 10;
    }
 
    temp = first * second;
 
    while ( temp ) {
        if ( !find (temp % 10) )
            return;
        temp /= 10;
    }
 
    count++;
 
}
 
int main ()
{
    freopen ("crypt1.in", "r", stdin);
    freopen ("crypt1.out", "w", stdout);
 
    scanf ("%d", &n);
 
    count = 0;
 
    for ( int i = 0; i < n; i++ )
        scanf ("%d", &a [i]);
 
    if ( n < 5 ) {
        printf ("%d\n", count);
        return 0;
    }
 
    for ( int p = 0; p < n; p++ ) {
        for ( int q = 0; q < n; q++ ) {
            for ( int r = 0; r < n; r++ ) {
                for ( int s = 0; s < n; s++ ) {
                    for ( int t = 0; t < n; t++ )
                        function (a [p], a [q], a [r],
                        a [s], a [t]);
                }
            }
        }
    }
 
    printf ("%d\n", count);
 
    return 0;
}