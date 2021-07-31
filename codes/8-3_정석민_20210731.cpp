/*
nullptr에서 시작하는 rhead 포인터를 선언한다.
head를 traverse한다.
    rhead 값을 prev에 저장한다.
    rhead에 head 값을 저장한다.
    rhead->next에 prev 값을 저장한다.
rhead를 반환한다.
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
    ListNode* reverseList(ListNode* head) {
        ListNode* rhead = nullptr;
        while ( head != nullptr ) {
            ListNode* prev = rhead;
            rhead = head;
            rhead->next = prev;
            head = head->next;
        }
        return rhead;
    }
};