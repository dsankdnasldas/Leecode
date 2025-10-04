#include<vector>
#include<iostream>
using namespace std;
class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int size = digits.size();
            for(int i = size-1 ; i >= 0 ; i--)
            {
                if(digits[i] != 9)
                {
                    ++digits[i];
                    for(int j = i+1 ; j< size; j++)
                    {
                        digits[j] = 0;
                    }
                    return digits;
                }
            }
            vector<int> ans(size+1);
            ans[0] = 1;
            return ans;
        }
    };

int main(int argc, char* argv[])
{
    Solution solution;
    vector<int> input = {1,2,3,4};
    vector<int> output = solution.plusOne(input);
    for(int i = 0; i< output.size(); i++)
        cout<<output[i]<<" "<<endl;
    return 0;
}