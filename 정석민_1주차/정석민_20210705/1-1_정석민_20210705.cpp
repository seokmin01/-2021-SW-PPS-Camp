/*
8개의 숫자를 입력받아 벡터에 저장한다.
조건문으로 벡터을 판별하여 ascending, descending, mixed 중 하나를 출력한다.
	벡터가 1 2 3 4 5 6 7 8 이라면 “ascending”을 출력한다.
	벡터가 8 7 6 5 4 3 2 1 이라면 “descending”을 출력한다.
	둘 다 아니라면 “mixed”를 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> arr(8);
    vector<int> ascending  = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> descending = {8, 7, 6, 5, 4, 3, 2, 1};
    
    for ( int i = 0; i < 8; i++ ) {
        cin >> arr[i];
    }
    if ( arr == ascending ) {
        cout << "ascending" << endl;
    }
    else if ( arr == descending ) {
        cout << "descending" << endl;
    }
    else {
        cout << "mixed" << endl;
    }
}