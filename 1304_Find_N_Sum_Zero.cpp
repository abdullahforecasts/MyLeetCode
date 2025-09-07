class Solution {
public:
    vector<int> sumZero(int n)
    {
        vector<int> ans;
       if(n == 1) 
       {
        ans.push_back(0);
        return ans;
       }
       
        if(n%2 ==1)ans.push_back(0);

       int num =1, count =1;
       while(count < n)
       {
        int n = num;
        ans.push_back(n);
        n = num*(-1);
        ans.push_back(n);
        count+=2;
        num++;
        

       }

      return ans;
    }
};