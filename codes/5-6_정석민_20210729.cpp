/*
새 문자열을 생성한다.
tolower 함수를 이용하여 대문자는 소문자로 바꾸고
소문자나 숫자일 때만 새 문자열에 추가한다.
새 문자열과 새 문자열을 뒤집은 문자열을 비교하여
같으면 true, 다르면 false를 반환한다.
*/

class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for ( auto c : s ) {
            c = tolower(c);
            if ( c >= 'a' && c <= 'z' || c >= '0' && c <= '9' )
                t += c;
        }
        string r = t;
        reverse(r.begin(), r.end());
        if ( t == r ) return true;
        return false;
    }
};