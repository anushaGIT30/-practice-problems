#include <iostream>
using namespace std;

bool ispresent(int arr[][4], int target) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr1[3][4];
    int target;
    
    cout << "Enter the target: ";
    cin >> target;
    
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr1[i][j];
        }
    }
    
    cout << "Array elements:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    
    if (ispresent(arr1, target)) {
        cout << "true";
    } else {
        cout << "false";
    }
    
    return 0;
}
