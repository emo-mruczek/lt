#include <iostream>


struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *first = head;
        ListNode *second = head;

        while (first != NULL && first->next != NULL) {
            first = first->next->next;
            second = second->next;
            if (first != NULL && first == second  ) {
                return true;
            }
        }

        return false;
    }
};




