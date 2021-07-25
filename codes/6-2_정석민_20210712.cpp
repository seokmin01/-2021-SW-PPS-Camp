/*
큐를 사용하자.
큐가 empty가 될 때까지 반복한다.
    k-1번 만큼 맨 앞의 숫자를 pop하고 맨 뒤에 push한다.
    맨 앞의 숫자를 pop하고 answer 벡터에 저장한다.
answer 벡터를 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    queue<int> q;
    vector<int> v;
    cin >> n >> k;
    for ( int i = 1; i <= n; i++ ) {
        q.push(i);
    }
    while ( !q.empty() ) {
        for ( int i = 0; i < k - 1; i++ ) {
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front());
        q.pop();
    }
    cout << "<";
    for ( int i = 0; i < v.size() - 1; i++ ) {
        cout << v[i] << ", ";
    }
    cout << v[v.size() - 1] << ">";
}