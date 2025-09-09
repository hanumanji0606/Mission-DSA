class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int>v;
        ListNode *p = head;
        while(p!=nullptr){
            v.push_back(p->val);
            p=p->next;
        }
        sort(v.begin(),v.end());
        p = head;
        for(int i=0;i<v.size();i++){
            p->val = v[i];
            p=p->next;
        }
        return head;
    }
};
