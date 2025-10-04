#include<vector>
#include<iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        bool isPalindrome(ListNode* head) {
            vector<int> v;
            while(head != nullptr){
                v.push_back(head->val);
                head = head->next;
            }
            int n = v.size();
            int j = n - 1;
            for(int i = 0; i < j; ++i, --j){
                if(v[i] != v[j]){
                    return false;
                }
            }
            return true;
        }
    };

    int main(){
        ListNode* head = new ListNode(1);
        head->next = new ListNode(2);
        head->next->next = new ListNode(2);
        head->next->next->next = new ListNode(1);
        Solution s;
        cout<<s.isPalindrome(head)<<endl;
        return 0;
    }
