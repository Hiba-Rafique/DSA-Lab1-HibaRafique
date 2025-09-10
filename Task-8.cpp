#include<iostream>
#include<String>
using namespace std;

int ReturnFirstOccurrenceOfSubString(string str, string substr){

    for(int i=0;i<=str.length()-substr.length();i++){
            bool found = true;
        for(int j=0;j<substr.length();j++){
            if(str[i+j]!=substr[j])
            {
                found=false;
                break;
            }
        }
        if(found)
            return i;
    }

    return -1;
    
}
int main(){

    string mainstring;
    string substring;

    cout<< "Enter a string: ";
    cin>>mainstring;

    cout<<"Enter a substring: ";
    cin>>substring;

    cout<< ReturnFirstOccurrenceOfSubString(mainstring, substring);

    return 0;
}