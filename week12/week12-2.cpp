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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode* ans=list1;//�ŧi���סA(1)�ñ���list1
        //ListNode* ans=new ListNode(99);//(2)�s�W �ȬO99
        ListNode* ans=new ListNode(99,new ListNode(88));
        //(3)�s�W1�ӭȬO99�B�k��s�W1�ӭȬO88
        return ans;
    }
};
