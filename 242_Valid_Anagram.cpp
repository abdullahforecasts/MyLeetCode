class Solution {
public:
   bool isAnagram(string s, string t) 
{
if(s.size() < t.size())return false;
    for (size_t i = 0; i < s.size(); i++)
    {
        bool dotted = false;
        char ch = s[i];
        for (size_t j = 0; j < t.size(); j++)
        {
            if (t[j] == ch)
            {
                t[j] = '.';
                dotted = true;
                break;
            }

        }
        if (!dotted)
        {
            return false;
        }


    }

    return true;

}
};