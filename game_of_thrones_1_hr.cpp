#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {
    map<char, int>strMap;

    for(int i = 0; i < s.length(); i++) {
        if(strMap.find(s[i]) == strMap.end()) {
            strMap[s[i]] = 1;
        }
        else {
            strMap[s[i]] += 1;
        }
    }

    int count = 0;
    for(int i = 0; i < strMap.size(); i++) {
        if(strMap[i] % 2 != 0) {
            count++;
            if (count >= 2) {
                break;
            }
        }
    }
    if (count >= 2) {
        return "NO";
    }
    else return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

