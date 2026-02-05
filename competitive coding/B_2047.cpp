#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int length;
        cin >> length;

        string text;
        cin >> text;

       
        if (length == 1) {
            cout << text << endl;
            continue;
        }

        vector<int> countChar(26, 0);
        for (char ch : text) {
            countChar[ch - 'a']++;
        }

        int indexMax = 0;
        for (int idx = 1; idx < 26; idx++) {
            if (countChar[idx] > countChar[indexMax]) {
                indexMax = idx;
            }
        }

        char mostFrequentChar = char('a' + indexMax);

        for (int pos = 0; pos < length; pos++) {
            if (text[pos] != mostFrequentChar) {
                text[pos] = mostFrequentChar;
                break;
            }
        }

        cout << text << endl;
    }

    return 0;
}
