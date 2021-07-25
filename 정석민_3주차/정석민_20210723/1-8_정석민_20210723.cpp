/*
소수인지를 판별하는 함수를 선언하자.
    2부터 해당 숫자가 되기 전까지의 수를 나누는데
    나누어 떨어지는 수가 있으면 false를 반환한다.
3중 배열을 통해 세 개의 수를 선택하는 모든 경우의 수를 확인한다.
    세 수를 더했을 때 소수가 나오면 count에 1을 더한다.
count를 반환한다.
*/

#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    for ( int i = 2; i < n; i++ ) {
        if ( n % i == 0 ) return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int count = 0;
    for ( int i = 0; i < nums.size(); i++ ) {
        for ( int j = i; j < nums.size(); j++ ) {
            if ( i == j ) continue;
            for ( int k = j; k < nums.size(); k++ ) {
                if ( i == k || j == k ) continue;
                if ( is_prime(nums[i] + nums[j] + nums[k]) )
                    count++;
            }
        }
    }
    return count;
}