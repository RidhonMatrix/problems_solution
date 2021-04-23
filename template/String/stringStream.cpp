#include <bits/stdc++.h>
using namespace std;

int countWords(string str)
{
    // breaking input into word using string stream
    stringstream s(str); // Used for breaking words
    string word; // to store individual words

    int count = 0;
    while (s >> word)
        cout<<word<<endl;
    return count;
}

// Driver code
int main()
{
    string s = "geeks for geeks geeks "
               "contribution placements";
    cout << " Number of words are: " << countWords(s);
    return 0;
}


// Number of words are: geeks
// for
// geeks
// geeks
// contribution
// placements
// 0
