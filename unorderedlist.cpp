#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 2, 3, 1, 4, 2};

    unordered_map<int, int> freq;

    for (int x : nums) {
        freq[x]++;
    }

    // Print frequencies
    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }


    
    return 0;
}




