#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int max_profit = 0;
            int min_price = 1e9;
            for(auto price : prices){
                max_profit = max(max_profit, price - min_price);
                min_price = min(min_price, price);
            }
            return max_profit;
        }
    };

int main(){
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    cout << s.maxProfit(prices) << endl;
    return 0;
}