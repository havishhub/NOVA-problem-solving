
bool isPalindrome(char *str) {
    int start = 0, end = strlen(str) - 1;
    
    while (start < end) {
        if (!isalnum(str[start])) 
            start++;
        else if (!isalnum(str[end])) 
            end--;
        else if (tolower(str[start]) != tolower(str[end])) 
            return false;
        else { 
            start++; 
            end--; 
        }
    }
    
    return true;
}
