#include <bits/stdc++.h>

using namespace std;

string pangrams(string s) {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for(int i = 0; i < alphabet.length(); i++) {
        if(s.find(alphabet[i]) == string::npos) {
            return "not pangram";
        }
    }

    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
