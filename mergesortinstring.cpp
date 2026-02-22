#include<bits/stdc++.h>
using namespace std ;


void merge(string arr[], int si, int mid, int ei) {
    vector<string> temp;

    int i = si;
    int j = mid + 1;

    while (i <= mid && j <= ei) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i++]);
    }

    while (j <= ei) {
        temp.push_back(arr[j++]);
    }

    // copy back
    for (int k = 0; k < temp.size(); k++) {
        arr[si + k] = temp[k];
    }
}

void mergesort(string arr[], int si, int ei) {
    if (si >= ei) return;

    int mid = (si + ei) / 2;

    mergesort(arr, si, mid);
    mergesort(arr, mid + 1, ei);

    merge(arr, si, mid, ei);
}

int main() {
    string arr[4] = {"sun", "earth", "mars", "mercury"};
    int n = 4;

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// void mergesort(string arr[],int si,int ei){

//       if(si>=ei){
//         return;
//       }
//       int mid = (si+ei)/2;

//       return mergesort(arr ,si , mid );
//       return mergesort(arr ,mid +1 , ei );

// }
// void merge (string arr[],int si,int ei , int mid ){
//     vector<string> temp;
//     int i = si ;
//     int j = mid ;

//     while(i<=mid && j<=ei){
//         if (arr[i]<=arr[j]){
//             temp.push_back(arr[i++]);

//         }
//         else{
//             temp.push_back(arr[j++]);
//         }
//         while(i<=mid){
//             temp.push_back(arr[i++]);
//         }
//          while(i<=mid){
//             temp.push_back(arr[j++]);
//         }
//     }

// }
// int main(){
// string arr[4] = { "sun", "earth", "mars", "mercury"};
// int n = 4;
// mergesort(arr ,0 , n );
// cout<<arr[1];

//     return 0;

// }
// // #include <iostream>
// // #include <vector>
// // #include <string>

// // int main() {
// //     std::vector<std::string> planets = {"sun", "earth", "mars", "mercury"};

// //     for (const std::string& s : planets) {
// //         if (!s.empty()) {
// //             // Method 1: Using operator[]
// //             char first = s[0];
// //             std::cout << "First letter: " << first << std::endl;

// //             // Method 2: Using front()
// //             // char first = s.front(); 
// //         }
// //     }
// //     return 0;
// // }
