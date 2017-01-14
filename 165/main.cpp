#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;

    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class Solution {
public:
    /**
     * @param ListNode l1 is the head of the linked list
     * @param ListNode l2 is the head of the linked list
     * @return: ListNode head of linked list
     */
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *head = NULL;
        ListNode *current = head;

        while(l1 && l2){
            if (l1->val > l2->val){
                current->val = l1->val;
                if(l1->next)
                    l1 = l1->next;
            }
            else{
                current->val = l2->val;
                if(l2->next)
                    l2 = l2->next;
            }
            current = current->next;
        }

        while(l1){
            current->val = l1->val;
            current = current->next;
            if(l1->next)
                l1 = l1->next;
        }

        while(l2){
            current->val = l2->val;
            current = current->next;
            if(l2->next)
                l2 = l2->next;
        }

        return head;

    }
};
int main() {
    ListNode *l1 = NULL;
    ListNode *l2(0);
    l2->next = new ListNode(3);

    Solution ans;

    auto head = ans.mergeTwoLists(l1, l2);

    return 0;
}