/*
num을 문자열로 변환해서 각 자리수를 더할 수 있게 하자.
각 자리수를 더한 값이 한 자리가 될 때 까지 반복한다.
한 자리 숫자를 반환한다.
*/

class Solution {
public:
    int addDigits(int num) {
        string s = to_string(num);
        while ( s.length() > 1 ) {
            int sum = 0;
            for ( auto c : s )
                sum += c - '0';
            s = to_string(sum);
        }
        return stoi(s);
    }
};