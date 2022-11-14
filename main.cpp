#include<iostream>
#include<string.h>

using namespace std;

int check_string (string a,string b){
    int i = a.length();
    if(a[i-1] == b[0]){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    string a,b;
    cin>>a>>b;
    if(check_string(a,b)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}