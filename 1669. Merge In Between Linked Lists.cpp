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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int cnt1 = 1;
        ListNode* first = list1;
        while(cnt1 < a)
        {
            first = first->next;
            cnt1++;
        }
        
        int cnt2 = 1;
        ListNode* second = list1;
        while(cnt2 <= b)
        {
            second = second->next;
            cnt2++;
        }
        
        ListNode* temp = list2;
        while(temp->next != NULL)
            temp = temp->next;
        
        first->next = list2;
        temp->next = second->next;
        return list1;
    }
};
