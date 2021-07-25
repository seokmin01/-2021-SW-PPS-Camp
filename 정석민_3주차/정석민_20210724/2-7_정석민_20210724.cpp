/*
ss와 tt 문자열을 생성한다.
s와 t 문자열을 각각 순회하여 ss, tt를 채운다.
    #가 등장하면 새 문자열의 마지막 문자를 지운다.
    아니라면 새 문자열에 문자를 추가한다.
ss와 tt를 비교하고 같으면 true,
다르면 false를 반환한다.
*/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ss = "", tt = "";
        for ( auto c : s ) {
            if ( c == '#' )
                ss = ss.substr(0, ss.length()-1);
            else ss += c;
        }
        for ( auto c : t ) {
            if ( c == '#' )
                tt = tt.substr(0, tt.length()-1);
            else tt += c;
        }
        if ( ss == tt ) return true;
        return false;
    }
};