/*
0이거나 음수이면 false를 반환한다.
n이 1이 될 때 까지 반복한다.
    n이 4로 나누어 떨어지면 4로 나눈다.
    아니라면 false를 반환한다.
true를 반환한다.
*/

class Solution {
public:
    bool isPowerOfFour(int n) {
        if ( n < 1 ) return false;
        while ( n > 1 ) {
            if ( n % 4 == 0 ) n /= 4;
            else return false;
        }
        return true;
    }
};