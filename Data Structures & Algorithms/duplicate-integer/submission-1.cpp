class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> known;
        for(int num : nums){
            if(known[num] >= 1){
              return true;
          }
          known[num]++;
        }
        return false;
    }
};
//TC -> O(n)