#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }

    int totalSum = n * (n+1)/2;
    int arraySum = 0;

    for(int i= 0;i<n-1;i++){
        arraySum += arr[i];
    }

    int missingNumber = totalSum - arraySum ;
    cout << "Missing number is:" << missingNumber << endl;
    return 0;
}