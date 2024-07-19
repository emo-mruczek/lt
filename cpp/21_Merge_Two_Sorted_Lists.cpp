  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

          if (list1 == nullptr) {
                return list2;
          } else if (list2 == nullptr) {
                return list1;
          }


        ListNode* curr_list1 = list1;
        ListNode* curr_list2 = list2;
        
        ListNode head;
        ListNode* curr_head = &head;
        

        while (curr_list1 != nullptr && curr_list2 != nullptr){
                if (curr_list1->val > curr_list2->val) {
                    curr_head->next = curr_list2;
                    curr_list2 = curr_list2->next;
              } else {
                    curr_head->next = curr_list1;
                    curr_list1 = curr_list1->next;
              }

              curr_head = curr_head->next;
        }

        if (curr_list1 != nullptr) {
              curr_head->next = curr_list1;
          } else {
            curr_head->next = curr_list2;
          }

         return head.next;
    }
};

// curr_head->next = (curr_list1 ? curr_list1 : curr_list2)
