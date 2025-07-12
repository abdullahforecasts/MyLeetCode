class Solution {
public:
  bool isPalindrome(string s)
{
    string temp;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            temp.push_back(s[i] + 32);
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            temp.push_back(s[i]);
        }
       
    }

    if (temp.size() == 1)return true;
    for (size_t i = 0; i < (temp.size() / 2); i++)
    {
        if (temp[i] != temp[temp.size() - 1 - i])
        {
            return false;
        }

    }
    
    return true;

}
};