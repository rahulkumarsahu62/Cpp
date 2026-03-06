#include <bits/stdc++.h>
using namespace std;
int secondLargest(vector<int> &a, int n){
    if(n < 2)return -1;

    int largest = a[0];
    int slargest = INT_MIN;
    for(int i = 1;i<n;i++){
        if(a[i] > largest){
        slargest = largest;
        largest = a[i];
    }
    else if(a[i] < largest && a[i] > slargest){
        slargest = a[i];
    }
}
if(slargest == INT_MIN) return -1;
return slargest;
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if(n < 2) {
        cout << "Second largest element does not exist";
        return 0;
    }

    vector<int> a(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = secondLargest(a, n);

    if(result == -1)
        cout << "Second largest element does not exist";
    else
        cout << "Second largest element is: " << result;

    return 0;
}
