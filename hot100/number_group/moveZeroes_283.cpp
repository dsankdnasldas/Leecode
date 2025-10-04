#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int n = nums.size();
            int left = 0;
            int right = 0;
            while(right < n){
                if(nums[right]){
                    swap(nums[left], nums[right]);
                    left++;
                }
                right++;
            }      
        }
    };

    int main(){
        // vector<int> nums = {0,1,0,3,12};
        // vector<int> nums = {0};
        vector<int> nums = {0,0,1};
        Solution s;
        s.moveZeroes(nums);
        for(int i = 0; i < nums.size(); i++){
            cout << nums[i] << " ";
        }
    }