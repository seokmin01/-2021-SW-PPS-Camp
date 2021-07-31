/*
Linked List를 traverse 하면서 배열로 변환한다.
순서를 반전 시킨 배열과 기존 배열을 비교하여
같으면 true를,
다르면 false를 반환한다.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string s = "";
        while ( head != nullptr ) {
            s += to_string(head->val);
            head = head->next;
        }
        string t = s;
        reverse(t.begin(), t.end());
        if ( t == s ) return true;
        return false;
    }
};