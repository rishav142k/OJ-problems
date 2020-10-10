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
 
 // URL : https://leetcode.com/problems/rotate-list/
 
class Solution {
public:
    ListNode* rotatebyone(ListNode* head) {
        
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        ListNode* temp2 = head;
        temp->next = temp2;
        prev->next = NULL;
    
        return temp;
        
    
        
        
    }
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        
        if(head == NULL or head->next == NULL) {
            return head;
        }
        int size = 0;
        while(temp!= NULL) {
            size++;
            temp = temp->next;
        }
        k %= size;
        
        for(int i = 0; i < k; i++) {
            head = rotatebyone(head);
        }
        return head;
        
        
    }
};