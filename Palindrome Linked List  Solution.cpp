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
        stack<ListNode*>st;
        ListNode*temp=head;
        while(temp)
        {
            st.push(temp);
            temp=temp->next;
        }
        while(!st.empty())
        {
            ListNode*t=st.top();
            st.pop();
            if(t->val!=head->val)
            {
              return false;  
            }
            head=head->next;
        }
        return true;
    
    }
};
