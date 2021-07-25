/*
9개의 정수를 입력받는다.
2중배열을 이용해서 숫자 두개를 뺐을 때 합이 100이 되는 경우의 수를 찾는다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[9];
    for ( int i = 0; i < 9; i++ )
        cin >> a[i];
    for ( int i = 0; i < 9; i++ ) {
        for ( int j = 0; j < 9; j++ ) {
            if ( i == j ) continue;
            int sum = 0;
            for ( int k = 0; k < 9; k++ ) {
                if ( k == i || k == j ) continue;
                sum += a[k];
            }
            if ( sum == 100 ) {
                for ( int k = 0; k < 9; k++ ) {
                    if ( k == i || k == j ) continue;
                    cout << a[k] << '\n';
                }
                return 0;
            }
        }
    }
}