class Solution {
public:

string addBinary(string a, string b)
{
    int m = max(a.size(), b.size());
    string temp;
    char c = '0'; 

    for (int i = 0; i < m; i++)
    {
        char ta = '0', tb = '0';

        if (!a.empty()) {
            ta = a.back();
            a.pop_back();
        }
        if (!b.empty()) {
            tb = b.back();
            b.pop_back();
        }

        if (c == '1')
        {
            if (ta == '0' && tb == '0') { temp.insert(temp.begin(), '1'); c = '0'; }
            else if ((ta == '0' && tb == '1') || (ta == '1' && tb == '0')) { temp.insert(temp.begin(), '0'); c = '1'; }
            else if (ta == '1' && tb == '1') { temp.insert(temp.begin(), '1'); c = '1'; }
        }
        else
        {
            if (ta == '0' && tb == '0') { temp.insert(temp.begin(), '0'); }
            else if ((ta == '0' && tb == '1') || (ta == '1' && tb == '0')) { temp.insert(temp.begin(), '1'); }
            else if (ta == '1' && tb == '1') { temp.insert(temp.begin(), '0'); c = '1'; }
        }
    }

  
    if (c == '1') {
        temp.insert(temp.begin(), '1');
    }

    return temp;
}


   
};