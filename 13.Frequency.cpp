#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        int count = 0;
        if (arr[i] != -1) 
        {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // Mark as visited
                }
            }
            if (count > 0) {
  cout << "Number: " << arr[i] << ", Frequency: " << count+ 1 << endl;
            }
        }
    }
    return 0;
}
