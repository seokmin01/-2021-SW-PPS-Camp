/*
left부터 right까지 반복한다. (i)
    1부터 i까지 반복한다. (j)
        i를 j로 나눴을 때 나머지가 0이면
        count에 1를 더한다.
    count가 짝수이면 answer에 i을 더하고
    아니라면 answer에 i를 뺀다.
answer를 반환한다.
*/

#include <bits/stdc++.h>
using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for ( int i = left; i <= right; i++ ) {
        int count = 0;
        for ( int j = 1; j <= i; j++ ) {
            if ( i % j == 0 ) count++;
        }
        if ( count % 2 == 0 ) answer += i;
        else answer -= i;
    }
    return answer;
}