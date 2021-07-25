/*
초기 문자열은 "1"이다.
1부터 시작하여 n-1번 반복한다.
    새 문자열을 t라고 하자.
    반복문을 통해 t를 채우자.
        이전과 같은 숫자가 나오면 count++한다.
        아니라면, t에 count와 해당 숫자를 추가한다.
    마지막 케이스도 처리해준다.
    s에 t를 저장하자.
s를 반환한다.
*/

class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for ( int i = 1; i < n; i++ ) {
            string t = "";
            int count = 1;
            int j = 1;
            for ( ; j < s.length(); j++ ) {
                if ( s[j] == s[j-1] )
                    count++;
                else {
                    t += to_string(count) + s[j-1];
                    count = 1;
                }
            }
            t += to_string(count) + s[j-1];
            s = t;
        }
        return s;
    }
};