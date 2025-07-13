class Solution {
public:
   
string longestCommonPrefix(vector<string>& strs)
{
    string result;
    int t = 0;
    for (size_t i = 0; ; i++)
    {
         if (t >= strs[0].size()) break;
        bool allHave = true;
        char ch = strs[0][t];
        for (size_t j = 0; j < strs.size(); j++)
        {
            if (strs[j][t] != ch  || t >= strs[j].size())
            {
                allHave = false;
                return result;
            }
        }
        if (allHave)
        {
            result.push_back(ch);
        }
        t++;
    }
    return result;
}


};