/*
길이가 26인 count배열을 선언하고 0으로 초기화 하자.
선수 수를 입력받는다.
선수 수 만큼 반복을 하며 선수 이름을 입력받는다.
	선수 이름의 맨 앞글자 알파벳을 count한다.
	예를 들어 선수 이름의 맨 앞글자가 'a'이면 count[0]에 1을 더한다.
반복문을 통해 count배열을 순회한다.
	count가 5이상이면 해당 알파벳을 출력한다.
count가 5이상인 경우가 한번도 없으면 "PREDAJA"를 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count[26] = {0, };
    
    for ( int i = 0; i < n; i++ ) {
        string player;
        cin >> player;
        count[player[0] - 'a']++;
    }
    
    int predaja = 1;
    for ( int i = 0; i < 26; i++ ) {
        if ( count[i] >= 5 ) {
            cout << (char)(i + 'a');
            predaja = 0;
        }
    }
    if ( predaja == 1 )
        cout << "PREDAJA";
}