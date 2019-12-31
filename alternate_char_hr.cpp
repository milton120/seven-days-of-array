#include <bits/stdc++.h>

using namespace std;

char getAlternateChar(char ch) {
    if(ch == 'A') {
        return 'B';
    }
    else {
        return 'A';
    }
}

int alternatingCharacters(string s) {
    if (s.length() <= 1) {
        return 0;
    }

    char expectedChar = getAlternateChar(s[0]);
    int count = 0;

    for(int i = 1; i < s.length(); i++) {
        if(s[i] == expectedChar) {
            expectedChar = getAlternateChar(expectedChar);
        }
        else {
            count++;
        }
    }

    return count;
}

int main()
{
    int q;
    cin >> q;

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        cin>>s;

        int result = alternatingCharacters(s);

        cout << result << "\n";
    }

    return 0;
}
