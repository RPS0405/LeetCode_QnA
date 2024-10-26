//We are given a string S, we need to find the count of all contiguous substrings starting and ending with the same character

#include <iostream>
#include <string>

using namespace std;

int countSubstrs(string str, int i, int j) {
    // Base case: If `i` is out of bounds, return 0
    if (i >= str.size()) {
        return 0;
    }

    // If `j` goes out of bounds, move to the next starting index `i`
    if (j >= str.size()) {
        return countSubstrs(str, i + 1, i + 1);
    }

    // Count this substring if the start and end characters are the same
    int count = (str[i] == str[j]) ? 1 : 0;

    // Recur for the next end index `j`
    return count + countSubstrs(str, i, j + 1);
}

int main() {
    string str = "abcab";
    
    // Start the recursion with the first index for `i` and `j`
    cout << countSubstrs(str, 0, 0) << endl;
    return 0;
}

