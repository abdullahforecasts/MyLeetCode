class Solution {
public:
    bool isValid(string s) {
         stack<char>helper;

 for (size_t i = 0; i < s.size(); i++)
 {
     char ch = s[i];
     if (helper.empty())
     {
         if (ch == ')' || ch == ']' || ch == '}')
             return false;
     }
     else
     {
         if ((ch == ']' && helper.top() != '[') ||
             (ch == ')' && helper.top() != '(') ||
             (ch == '}' && helper.top() != '{'))
         {
             return false;
         }
         if ((ch == ']' && helper.top() == '[') ||
             (ch == ')' && helper.top() == '(') ||
             (ch == '}' && helper.top() == '{'))
         {
             helper.pop();
             continue;
         }
     }
     helper.push(ch);
 }

 if (s.size() % 2 != 0 || helper.size() != 0)
     return false;

 return true;
    }
};