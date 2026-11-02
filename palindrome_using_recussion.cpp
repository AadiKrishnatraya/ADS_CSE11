#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindromeHelper(const string& s, int left, int right) {
    if (left >= right) {
        return true;
    }
    if (!isalnum(s[left])) {
        return isPalindromeHelper(s, left + 1, right);
    }
    if (!isalnum(s[right])) {
        return isPalindromeHelper(s, left, right - 1);
    }
    if (tolower(s[left]) != tolower(s[right])) {
        return false;
    }
    return isPalindromeHelper(s, left + 1, right - 1);
}

bool isPalindrome(const string& s) {
    if (s.empty()) {
        return true;
    }
    return isPalindromeHelper(s, 0, s.length() - 1);
}

int main() {
    cout << boolalpha;
    cout << isPalindrome("racecar") << "\n"; 
    cout << isPalindrome("hello") << "\n";    
    cout << isPalindrome("A man, a plan, a canal: Panama") << "\n"; 
    return 0;
}