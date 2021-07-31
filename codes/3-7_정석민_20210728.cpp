/*
five와 ten 거스름돈 변수를 생성한다.
bills를 순회한다.
    5달러를 받으면 five++를 한다.
    10달러를 받았을 때,
        five가 없으면 false를 반환한다.
        아니라면 ten++와 five--를 한다.
    20달러를 받았을 때,
        ten이 있고 five도 있으면 ten--와 five--를 한다.
        위의 경우가 아닌데 five가 3 이상 있으면 five에 3을 뺀다.
        위의 경우도 아니면 false를 반환한다.
false 반환없이 순회가 끝나면 true를 반환한다.
*/

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        for ( int i : bills ) {
            if ( i == 5 ) {
                five++;
            }
            if ( i == 10 ) {
                if ( five < 1 ) return false;
                ten++;
                five--;
            }
            if ( i == 20 ) {
                if ( ten > 0 && five > 0 ) {
                    ten--;
                    five--;
                }
                else if ( five > 2 )
                    five -= 3;
                else return false;
            }
        }
        return true;
    }
};