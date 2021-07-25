/*
n과 k, 동전 벡터를 입력받는다.
k가 0이 될 때 까지 다음을 반복한다.
    동전 벡터의 뒤에서 부터 시작하여서
    동전이 k보다 작거나 같으면
    그 동전을 쓰고 count에 1을 더해준다.
count를 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, a;
    cin >> n >> k;
    int count = 0;
    vector<int> v;
    for ( int i = 0; i < n; i++ ) {
        cin >> a;
        v.push_back(a);
    }
    while ( k > 0 ) {
        for ( int i = v.size() - 1; i >= 0; i-- ) {
            if ( v[i] <= k ) {
                k -= v[i];
                count++;
                break;
            }
        }
    }
    cout << count;
}