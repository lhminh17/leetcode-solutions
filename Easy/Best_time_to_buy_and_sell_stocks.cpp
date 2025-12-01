class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = prices[0];
        int profit = 0;
        
        for(int i=0; i<prices.size() - 1; i++){
            if(prices[i] < buy) buy = prices[i];
            if(prices[i + 1] - buy > profit){
                profit = prices[i + 1] - buy;
            }
        }

        return profit;
    }

};
