class Solution {

    unordered_map<int, string>mp;

public:

    void buildMap()
    {
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
    }


    void makecomb(vector<string>& result, string& digits, string curr, int idx)
    {
          
        if (curr.size() == digits.size())
        {
            result.push_back(curr);
           
            return;
        }


        int num = digits[idx] - '0';
        for (char ch : mp[num])
        {
            makecomb(result, digits, curr+ch, idx + 1);
        }

       


    }

    vector<string> letterCombinations(string digits) {

        
        vector<string>result;
        if(digits.size()==0)return result;
          buildMap();
        int idx = 0;

        makecomb(result, digits, "", idx);

        return result;
    }
};
