#include<iostream>
using namespace std;
int main(){
    int arr[]= {2,4,6,8,10};
    int s = 5, sum = 0;
    for(int i = 0; i<s ; i++){
        cout << arr[i] <<"";
        cout << endl;
        sum+=arr[i];
    }
    cout<<"The sum of array is" <<sum;
    return 0;
}