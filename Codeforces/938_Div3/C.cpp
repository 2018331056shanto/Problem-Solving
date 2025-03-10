#include <iostream>
#include <vector>
using namespace std;

bool isDPL(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

string classifyName(const string &s) {
    int n = s.size();
    bool canBeDPL100 = false, canBeDPL00 = false;
    
    // Checking for sure DPL100
    for (int i = 0; i < n; i++) {
        // Check for 3 consecutive DPL characters
        if (i + 2 < n && isDPL(s[i]) && isDPL(s[i+1]) && isDPL(s[i+2])) {
            canBeDPL100 = true;
        }
        // Check for 5 consecutive non-DPL characters
        if (i + 4 < n && !isDPL(s[i]) && !isDPL(s[i+1]) && !isDPL(s[i+2]) && !isDPL(s[i+3]) && !isDPL(s[i+4])) {
            canBeDPL100 = true;
        }
    }

    // Checking for sure DPL00
    string minName = s, maxName = s;
    for (int i = 0; i < n; i++) {
        if (s[i] == '?') {
            minName[i] = 'B'; // Replace with non-DPL character
            maxName[i] = 'A'; // Replace with DPL character
        }
    }

    // Check if minName is still not DPL100
    bool minDPL100 = false;
    for (int i = 0; i < n; i++) {
        if (i + 2 < n && isDPL(minName[i]) && isDPL(minName[i+1]) && isDPL(minName[i+2])) minDPL100 = true;
        if (i + 4 < n && !isDPL(minName[i]) && !isDPL(minName[i+1]) && !isDPL(minName[i+2]) && !isDPL(minName[i+3]) && !isDPL(minName[i+4])) minDPL100 = true;
    }
    
    if (!minDPL100) canBeDPL00 = true;

    // Final classification
    if (canBeDPL100 && canBeDPL00) return "DPL50";
    if (canBeDPL100) return "DPL100";
    return "DPL00";
}

int main() {
    int T;
    cin >> T;
    for (int caseNum = 1; caseNum <= T; caseNum++) {
        string s;
        cin >> s;
        cout << "Case " << caseNum << ": " << classifyName(s) << endl;
    }
    return 0;
}
