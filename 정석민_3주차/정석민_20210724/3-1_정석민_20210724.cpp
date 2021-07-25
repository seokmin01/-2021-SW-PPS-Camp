/*
s를 순회한다.
    L이 3번 연속 등장하면 false를 반환한다.
    A가 2번 등장하면 false를 반환한다.
별일 없이 반복문이 끝나면 true를 반환한다.
*/

class Solution {
public:
    bool checkRecord(string s) {
        int a_count = 0;
        for ( int i = 0; i < s.length(); i++ ) {
            if ( i > 1 && s[i] == 'L' && s[i-1] == 'L' && s[i-2] == 'L' )
                return false;
            if ( s[i] == 'A' ) a_count++;
            if ( a_count == 2 ) return false;
        }
        return true;
    }
};