class Solution {
public:
string reverseWords(string s) 
{
    string result;
    bool added = false;
    for (int i = s.size()-1; i >= 0; i--)
    {
        int end, start;
        if (s[i] == ' ')continue;
        end = i;
        while (i>=0 && s[i]!=' ')
        {
            i--;
        }
        start = i + 1;

        for (int i = start; i <= end; i++)
        {
            result.push_back(s[i]);
         
            added = true;
        }

        if (added && start != 0)
        {
            result.push_back(' ');
          
            added = !added;
        }

       
    }
 while (result[result.size()-1] == ' ')
 {
     result.pop_back();
 }
    return result;
    
}
};