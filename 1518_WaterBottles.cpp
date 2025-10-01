class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        if(numExchange==numBottles)
     {

         return numBottles+1;
     }
     if (numExchange>=numBottles)
     {
         return numBottles;
     }

     int ans = numBottles;

     while (numBottles>=numExchange)
     {

         ans += numBottles / numExchange;
         numBottles = (numBottles / numExchange)+ (numBottles % numExchange);
        

     }


     return ans;
 }
};