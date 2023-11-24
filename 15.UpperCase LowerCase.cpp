#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;cin >> n;
    string s;cin >> s;
    int freq[10001]={0};
    for(int i = 0;i < n;i++){
        freq[s[i]-'0']++;
    }
    cout << "Repeated number\t\tFrequency\n";
    for(int i = 0;i <= 1000;i++){
        if(freq[i]){
            cout << i << "\t\t\t\t\t" << freq[i] << "\n";
        }
    }
}
