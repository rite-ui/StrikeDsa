
#include<iostream>
using namespace std;

int main(){

    int num=0,ans =1;
    cout << "Enter number: ";
    cin >> num;

    if(num==0){
        cout<<0<<endl;
        return 0;
    }


 
    for(int i=1;i*i<=num;i++){
        ans = i;
    }

    cout<<ans<<endl;

    return 0;
}
