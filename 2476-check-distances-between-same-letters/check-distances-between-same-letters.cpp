class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
      vector<int> first(26, -1);
    for (int i = 0; i < s.length(); i++) {
        int idx = s[i] - 'a'; 

        if (first[idx] == -1) {
            first[idx] = i; 
        } else {
            
            if (i - first[idx] - 1 != distance[idx]) {
                return false;
            }
        }
    }

    return true;
}
};