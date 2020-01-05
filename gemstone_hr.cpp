#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
int gemstones(vector<string> arr) {

    if (arr.size() == 1) {
        return arr[0].length();
    }

    set<char>strSet;
    string str = arr[0];

    for (int i = 0; i < str.length(); i++) {
        bool isGem = true;
        for(int j = 1; j < arr.size(); j++) {
            if (arr[j].find(str[i]) == string::npos) {
                isGem = false;
                break;
            }
        }

        if (isGem) {
            strSet.insert(str[i]);
        }
    }

    return strSet.size();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

