#include <iostream>

using namespace std;

int main(){
    int n = 0, arr[1000], max = 0, mid = 0, max1 = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int j = 0; j < (n-1); j++){
        max1 = arr[j-1] + arr[j] + arr[j+1];
        if (max1 > max){
            max = max1;
            mid = j + 1;
        }
    }
    cout << max << " " << mid;


    return 0;
}
