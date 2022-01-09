#include<iostream>
using namespace std;

int elementRequired(int * ptr,int size){

    int maxSumOdd = 0;
    int maxSumEven = 0;

    for(int i = 0;i<size;i++){
        if(i%2==0){
            maxSumEven+=ptr[i];
        }

        else{
            maxSumOdd+=ptr[i];
        }
    }

    if(maxSumEven >=maxSumOdd){
        return maxSumEven;
    }

    return maxSumOdd;
}

int main(){

    //create an input Array
    int size;

    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    int arr[size];

    for(int i = 0;i<size;i++){
        int temp;
        cout<<"Enter the element no. "<<i+1<<endl;
        cin>>temp;
        arr[i] = temp;
    }

    int *ptr = arr;

    int result;
    result = elementRequired(ptr,size);

    cout<<"The maximum money robber can loot is "<<result<<endl; 
    return 0;
}