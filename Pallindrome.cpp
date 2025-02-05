class Solution {
  public:
    bool isPalindrome(int n) {
    if (n < 0) return false;  
    if (n == 0) return true;  

    vector<int> ans;
    while (n) {
        int rem = n % 10;
        ans.push_back(rem);
        n = n / 10;
    }
    
    int start = 0, end = ans.size() - 1;
    while (start < end) {
        if (ans[start] != ans[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true; 

};
