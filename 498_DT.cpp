class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat)
{

    vector<int>oneD;

    int r = 0;
    int c = 0;
    bool up = true; // true uper false necha 
    int mrs = mat.size();
    int mcs = mat[0].size();
    while (oneD.size()< mrs*mcs)
    {

        int n = mat[r][c];
        oneD.push_back(n);

        if (up)
        {
            if (c == mcs-1)
            {
                r++;
                up = false;
            }
            else if (r ==0)
            {
                c++;
                up = false;
            }
            else
            {
                c++;
                r--;
            }


        }
        else
        {
            if (r == mrs-1)
            {

                c++;
                up = true;
            }
            else if (c ==0)
            {


                r++;
                up = true;
            }
            else
            {
                c--;
                r++;
            }

        }
       

    }

    return oneD;

}
};