
#define ll long long
#define MAXN 100005
#define INF 1000000007

using namespace std;

void removeDuplicates(vector<string>& words) {
    unordered_set<string> seen;
    vector<string> result;

    for (const string& word : words) {
        if (seen.find(word) == seen.end()) {
            result.push_back(word);
            seen.insert(word);
        }
    }

    for (const string& word : result) {
        cout << word << " ";
    }
    cout << "\n";
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<string> words(n);
        for (ll i = 0; i < n; i++) {
            cin >> words[i];
        }

        removeDuplicates(words);
    }

    return 0;
}

// #include <iostream>
// #include <unordered_set>
// #include <string>

// using namespace std;

// void removeDuplicates(string& sentence) {
//     unordered_set<string> seen;
//     string result;
//     size_t pos = 0;
//     while ((pos = sentence.find(" ")) != string::npos) {
//         string word = sentence.substr(0, pos);
//         if (!seen.count(word)) {
//             result += word + " ";
//             seen.insert(word);
//         }
//         sentence.erase(0, pos + 1);
//     }
//     if (!seen.count(sentence)) {
//         result += sentence;
//     }
//     cout << result << endl;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N;
//         cin.ignore(); // Ignore newline character
//         string sentence;
//         getline(cin, sentence);

//         removeDuplicates(sentence);
//     }

//     return 0;
// }