#include<iostream>
#include<vector>
using namespace std;

vector<int> findIndicesOfElement(int arr[], int arrlength, int key){

    vector<int> numbers;

    for(int i=0; i<arrlength;i++){
        if(arr[i]==key){
            numbers.push_back(i);
        }
    }
    
    return numbers;
}

int main(){

    int arr[6];
    int arrlength = sizeof(arr)/sizeof(arr[0]); // find size of array
    int key;

    cout<<"Enter "<< arrlength <<" numbers to initialize the array: "; // get user input
    for(int i=0;i<arrlength;i++){
        cin>>arr[i];
    }

    cout<<"Enter the key to be found: "; // number to be found
    cin>>key;

    vector<int> indices = findIndicesOfElement(arr,arrlength,key);

    if(indices.size()==0)
        cout<<"Key not found!"; // if the key doesnt exist in the array

    else{

        cout<<"The indices are: ";
        for(int i=0;i<indices.size();i++){
            cout<<indices[i]<<" ";
        }
    }

    return 0;
}