#include <iostream>
#include <vector>
using namespace std;

int designerPdfViewer(vector<int> h, string word){

    int letter, max_height = 0;
    for(int i=0; i<word.size(); i++){
        letter = (word[i] - 97);
        if(h[letter] > max_height)
            max_height = h[letter];
    }
    return (word.size() * max_height);
}

int main(){
    vector<int> heights;
    string word;

    for(int i = 0; i<26; i++){
        int x;
        cin >> x;
        heights.push_back(x);
    }

    getline(cin, word);
    cout << designerPdfViewer(heights, word) << endl;

    return 0;
}