class Solution {
public:
    char repeatedCharacter(string s) {
     unordered_set<char> seen;

    for (char ch : s) {
        if (seen.count(ch)) {
            return ch;  // First letter to appear twice
        }
        seen.insert(ch);
    }

    return ' ';  
}
};