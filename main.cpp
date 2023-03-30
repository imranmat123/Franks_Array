#include <iostream>
#include <vector>
using namespace std;
int main() {

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----

    int arr [10] {0};

    cout << "At index 0: " << arr[0] << endl;
    cout << "At index 1: " << arr[1] << endl;
    cout << "At index 2: " << arr[2] << endl;
    cout << "At index 3: " << arr[3] << endl;
    cout << "At index 4: " << arr[4] << endl;
    cout << "At index 5: " << arr[5] << endl;
    cout << "At index 6: " << arr[6] << endl;
    cout << "At index 7: " << arr[7] << endl;
    cout << "At index 8: " << arr[8] << endl;
    cout << "At index 9: " << arr[9] << endl;

    cout << "The array doesn't go past 9, due to counting from 0" << endl;


    cout << "\nAt index 10: " << arr[10] << endl;

    cout <<"\ninitiated index 0 and index 9" << endl;
    arr[0] = 100;
    arr[9] = 1000;

    cout << "\nAt index 0: " << arr[0] << endl;
    cout << "At index 1: " << arr[1] << endl;
    cout << "At index 2: " << arr[2] << endl;
    cout << "At index 3: " << arr[3] << endl;
    cout << "At index 4: " << arr[4] << endl;
    cout << "At index 5: " << arr[5] << endl;
    cout << "At index 6: " << arr[6] << endl;
    cout << "At index 7: " << arr[7] << endl;
    cout << "At index 8: " << arr[8] << endl;
    cout << "At index 9: " << arr[9] << endl;

    //-----WRITE YOUR ABOVE THIS LINE----
    //-----DO NOT CHANGE THE CODE BELOW THIS LINE----
    vector<int> v(arr, arr + sizeof arr / sizeof arr[0]);
    return 0;
}
