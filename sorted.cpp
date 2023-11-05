#include<bits/stdc++.h>

using namespace std;


bool check_if_sorted(int arr[], int n){

    for(int i =0; i<n;i++){
        if(arr[i] < arr[i-1])  return true;
        return false;
    }

    return false;
}


int main(){
int n;

cin>>n;

int arr[n];

for(int i =0; i<n;i++){
    cin>>arr[i];
} if (check_if_sorted(arr,n) ){
    cout << "It is Sorted";
} else {

 cout<< "It is not Sorted";
}

}