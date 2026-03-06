#include<bits/stdc++.h>
using namespace std;
int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    for(int i = 0; i<n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
int main() {
    int n;
    cout << "Enter number of elements:";
    cin >> n;

    if (n <= 0) {
        cout << "Invlaid array size";
        return 0;
    }
    vector <int> arr(n);
    cout << "Enter elements:";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Largest elements is:" << largestElement(arr, n);
    return 0;
}