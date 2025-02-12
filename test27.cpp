#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> mergesortedarray(vector<int> &arr1, vector<int> &arr2) {
    stack<int> s;
    int i = arr1.size() - 1;
    int j = arr2.size() - 1;

    
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            s.push(arr1[i--]);
        } else {
            s.push(arr2[j--]);
        }
    }

    
    while (i >= 0) {
        s.push(arr1[i--]);
    }

    while (j >= 0) {
        s.push(arr2[j--]);
    }
    vector<int> merged;
    while (!s.empty()) {
        merged.push_back(s.top());
        s.pop();
    }

    return merged;
}

int main() {
    int n1, n2;

    
    cout << "Enter the size of array 1: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter array 1 elements (space-separated):\n";
    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }
    cout << "Enter the size of array 2: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter array 2 elements (space-separated):\n";
    for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }

    vector<int> mergedArray = mergesortedarray(arr1, arr2);

    cout << "Merged and sorted array:\n";
    for (int i = mergedArray.size() - 1; i >= 0; --i) { 
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
