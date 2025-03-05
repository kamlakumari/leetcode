class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
       vector<string> result;
    string prevSorted = "";
    
    for (const string& word : words) {
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());  // Sort the characters to check for anagrams
        
        if (sortedWord != prevSorted) {  // Only add if it's not an anagram of the previous word
            result.push_back(word);
            prevSorted = sortedWord;
        }
    }
    
    return result;
}

int main() {
    vector<string> words = {"abba", "baba", "bbaa", "cd", "cd"};
    
    vector<string> result = removeAnagrams(words);
    
    cout << "Output: ";
    for (const string& word : result) {
        cout << word << " ";
    }
    cout << endl;
    
    return 0;
}
};