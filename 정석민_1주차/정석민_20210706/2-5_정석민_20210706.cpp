/*
문자열을 순회하면서 알파벳 개수를 벡터에 count하자.
count 벡터의 최대값을 알아내자.
최대값이 0이거나,
알파벳의 사용 수가 최대값과 같은 경우가 2번 이상이면 물음표를 출력한다.
그렇지 않으면, 가장 많이 사용된 알파벳을 대문자로 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    vector<int> count(26, 0);

    for ( char c : str ) {
        int index;
        if ( c >= 'a' )
            index = c - 'a';
        else
            index = c - 'A';
        count[index]++;
    }
    
    int max = *max_element(count.begin(), count.end());

    if ( max == 0 ) {
        cout << "?";
        return 0;
    }

    int max_count = 0;
    int max_i;
    for ( int i = 0; i < 26; i++ ) {
        if( count[i] == max ) {
            max_count++;
            max_i = i;
        }
    }
    if ( max_count > 1 ) {
        cout << "?";
    }
    else {
        cout << (char)(max_i + 'A');
    }
}