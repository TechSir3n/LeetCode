 /*
    You are given an array prices where prices[i] is the price of a given stock on the ith day.
    You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
    Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

    Example 1:

    Input: prices = [7,1,5,3,6,4]
    Output: 5
    Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
    Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
*/



// first way
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int i = 0;i<prices.size();i++) {
            minPrice = min(minPrice,prices[i]);
            maxProfit = max(maxProfit,prices[i] - minPrice);
        }

        return maxProfit;
    }
};



// second way
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int minPrice = INT_MAX;
         int maxProfit = 0;

         for(int i = 0;i<prices.size();i++) {
           if(prices[i]<minPrice) {
             minPrice = prices[i];
           } else if(prices[i] - minPrice > maxProfit) {
              maxProfit = prices[i] - minPrice;
           }
         }

         return maxProfit;
    }
};


class Solution {
    int maxProfit(vector<int>& prices) {
         auto it1 = std::min_element(prices.begin(),prices.end());
         auto it2 = std::max_element(it1,prices.end());
         return *it2 - *it1;
    }
};
