#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int n;
cin >> n;
vector<string> names;
for (int i = 0; i < n; i++) {
string name;
cin >> name;
names.push_back(name);
}
sort(names.begin(), names.end());
for (int i = 0; i < n; i++) {
cout << names[i]<<" ";
}
return 0;
}