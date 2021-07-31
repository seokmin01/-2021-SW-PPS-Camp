/*
1부터 n까지 반복한다.
    15의 배수면 피즈버즈,
    3의 배수면 피즈
    5의 배수면 버즈
    다 아니면 숫자를 벡터에 추가한다.
벡터를 반환한다.
*/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        for ( int i = 1; i <= n; i++ ) {
            if ( i % 15 == 0 ) v.push_back("FizzBuzz");
            else if ( i % 3 == 0 ) v.push_back("Fizz");
            else if ( i % 5 == 0 ) v.push_back("Buzz");
            else v.push_back(to_string(i));
        }
        return v;
    }
};