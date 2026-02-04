#include<iostream>
using namespace std;

// Code likha: std::cout ka meaning, console mein chejo ko print karna hai

int main(){

    // Number

    // int : 4byte
    // float: 4byte
    // char: 1byte
    // boolean: 1byte
    int a = 23;
    float b = 233.34567898;
    double c = 23.34567898;
    bool d = true ;
    char e = 'a';
    long long f = 327298314793712;
    string name = "Ritesh Ranjan";

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;
    cout<<name<<endl;

    cout<<sizeof a<<endl;
    cout<<sizeof b<<endl;
    cout<<sizeof c<<endl;
    cout<<sizeof f<<endl;
    cout<<sizeof e<<endl;
    cout<<sizeof f<<endl;
    
    cout<<name.length();
    return 0;
}