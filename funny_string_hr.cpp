#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {
    string reverseStr = s;
    reverse(s.begin(), s.end());

    for (int i = 1; i < s.length(); i++) {
        int a = abs(s[i] - s[i-1]);
        int b = abs(reverseStr[i] - reverseStr[i-1]);

        if (a != b) {
            return "Not Funny";
        }
    }

    return "Funny";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

