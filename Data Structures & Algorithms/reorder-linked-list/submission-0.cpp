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
    ListNode* reverse(ListNode* node){
        ListNode* prev = nullptr;
        ListNode* front = nullptr;
        ListNode* temp = node;
        while(temp!=nullptr){
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode* head = l1;
        while(l1!=nullptr && l2!=nullptr){
            ListNode* t1 = l1->next;
            ListNode* t2 = l2->next;
            l1->next = l2;
            l2->next = t1;
            l1 = t1;
            l2 = t2;
        }
        return head;
    }
    void reorderList(ListNode* head) {
        ListNode* norm = head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast = fast->next->next;
        }
        ListNode* second = slow->next;
        slow->next = nullptr;
        ListNode* rev = reverse(second);
        merge(head,rev);

    }
};
