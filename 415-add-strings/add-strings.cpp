class Solution {
public:
    string addStrings(string num1, string num2) {
     int i = num1.size() - 1, j = num2.size() - 1;
    int carry = 0;
    string result = "";

    while (i >= 0 || j >= 0 || carry) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        
        result += (sum % 10) + '0';  // Append last digit of sum
        carry = sum / 10;  // Update carry
        
        i--; j--;
    }
    
    reverse(result.begin(), result.end());  // Reverse result to get the correct order
    return result;
    }
};