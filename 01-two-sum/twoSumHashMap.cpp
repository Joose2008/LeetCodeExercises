#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
 public: 
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> num_map;

       for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (num_map.contains(complement)) {
                return {num_map[complement], i}; // Retorno índices
            }
            num_map[nums[i]] = i;
        }
        return {}; // Retorno vacío si no encuentra solución
    }
}; 