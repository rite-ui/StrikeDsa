#include<iostream>
using namespace std;
int main(){
    int num ;
    cout<<"Enter number of terms: ";
    cin>>num;
      
    int first= 0 , second = 1;
        // handle first term
    if (num>= 1)
        cout << first<< " ";

    // handle second term
    if (num >= 2)
        cout << second << " ";
    for(int i = 3;i<=num;i++){
        int curr = first + second;
        cout<<curr<<" ";
        first = second;
        second = curr;
    }
    

    return 0;
}


