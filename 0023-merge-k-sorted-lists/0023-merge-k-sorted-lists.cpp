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

class  compare{
    public:
    bool operator()(ListNode* a,ListNode* b){
        return a->val > b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& nums) {
        ios_base::sync_with_stdio(0);
        priority_queue< ListNode* , vector<ListNode*> , compare > pq;
        int k = nums.size();
        if(k==0)
            return NULL;
        for(int i=0;i<k;++i)
            if(nums[i]!=NULL)
                pq.push(nums[i]);

        ListNode *head = NULL,*tail = NULL;

        while(pq.size()){
            ListNode* top = pq.top();
            pq.pop();
            if(top->next)
                pq.push(top->next);

            if(head==NULL){
                head = top;
                tail = top;
            }
            else{
                tail->next=top;
                tail = top;
            }
        }
        return head;
    }
};