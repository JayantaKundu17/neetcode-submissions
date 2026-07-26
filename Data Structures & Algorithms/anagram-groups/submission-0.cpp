#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> x;

        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());   
            x[key].push_back(s);           
        }

        vector<vector<string>> result;
        for (auto& pair : x) {
            result.push_back(pair.second);
        }

        return result;
    }
};
