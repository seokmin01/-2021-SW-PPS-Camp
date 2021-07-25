/*
나이, 이름, 가입 순서를 묶은 값을 저장하는 벡터를 생성한다.
n개의 회원 정보를 벡터에 저장한다.
comp 함수를 선언하자.
    나이가 적은 회원이 앞으로 가게 한다.
    먼저 가입한 회원이 앞으로 가게 한다.
sort 함수와 comp 함수를 이용하여 벡터를 정렬한다.
벡터를 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool comp(vector<string> a, vector<string> b) {
    if ( stoi(a[0]) != stoi(b[0]) )
        return stoi(a[0]) < stoi(b[0]);
    return stoi(a[2]) < stoi(b[2]);
}

int main() {
    vector<vector<string>> v;
    int n;
    cin >> n;
    string age, name;
    for ( int i = 0; i < n; i++ ) {
        cin >> age >> name;
        vector<string>info = {age, name, to_string(i)};
        v.push_back(info);
    }
    sort(v.begin(), v.end(), comp);
    for ( int i = 0; i < v.size(); i++ )
        cout << v[i][0] << " " << v[i][1] << '\n';
}