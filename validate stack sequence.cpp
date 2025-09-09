class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int n=pushed.size();
        int i=0,j=0;
       while(i<n && j < n){
        if(pushed[i]!=popped[j]){
            st.push(pushed[i]);
        
        }
        if(pushed[i]==popped[j]){
            st.push(pushed[i]);
           if(!st.empty()) st.pop();
            j++;
            while(j<n && !st.empty() &&  st.top()==popped[j]){
                 st.pop();
                j++;
            }
        
        
        }
        i++;
       }
        if(st.empty()==true)return true;
        else return false;
       
    }
};
