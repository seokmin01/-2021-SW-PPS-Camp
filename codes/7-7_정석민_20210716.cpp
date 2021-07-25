/*
sort 함수를 쓰면 시간 초과가 난다.
우선순위 큐 쓰는 법을 배워서 써보자.
숫자를 입력받아 priority_queue에 저장하자.
pq의 k번 째 수를 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, a;
    cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> pq;
    for ( int i = 0; i < n ; i++ ) {
        cin >> a;
        pq.push(a);
    }
    for ( int i = 0; i < k - 1; i++ )
        pq.pop();
    cout << pq.top();
}