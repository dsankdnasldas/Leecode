#include<vector>
#include<iostream>
#include <unordered_map>
using namespace std;

class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            unordered_map<int, int> count;
            int p = 0;
            for(int num : nums){
                count[num]++;
            }
            for(const auto& pair : count){
                if(pair.second == 1){
                    p = pair.first;
                }
            }
            return p;
        }
    };

int main(){
    Solution s;
    vector<int> nums = {2,2,1};
    cout<<s.singleNumber(nums)<<endl;
}