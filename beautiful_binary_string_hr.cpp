
#include <bits/stdc++.h>

using namespace std;

// Complete the beautifulBinaryString function below.
int beautifulBinaryString(string b) {
    string checkStr = "010";
    string subStr;
    int step = 0;

    int i = 0;
    while(i < b.length()) {
        if(i+2 < b.length()) {
            subStr.push_back(b[i]);
            subStr.push_back(b[i+1]);
            subStr.push_back(b[i+2]);

            if (checkStr == subStr) {
                step++;
                i = i + 2;
            }
            subStr.clear();
        }
        i++;
    }

    return step;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string b;
    getline(cin, b);

    int result = beautifulBinaryString(b);

    fout << result << "\n";

    fout.close();

    return 0;
}
