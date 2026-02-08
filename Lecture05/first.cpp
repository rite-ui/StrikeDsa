#include<iostream>
using namespace std;
int main(){
      //for loop
      //while loop

    //    int i = 1;
    //    while(i<=10){
    //     cout<<i<<" ";
    //     i++;
    //    }
    //* do while loop

    // int i =1;
    // do{
    //     cout<<i<<" ";
    //     i++;
    // }while(i<=10);

    //*reverse number

    // int num = 234;
    // int ans = 0;
    // while(num!=0){
    //     //fetch last digit
    //     int lastDigit = num%10;
    //     num = num/10;
    //     ans = ans*10 + lastDigit;
    // }
    // cout<<ans<<endl;

    //*decimal number
    // int  num = 13 ,ans = 0 ;
    // while(num!=0){
    //     //remainder
    //     int rem = num %2 ;
    //     num = num/2;
    //     ans = ans*10+rem;
    // }
    // //reverse number

    // num = ans;
    // ans=0;
    // while(num!=0){
    //     //fetch last digit
    //     int lastDigit = num%10;
    //     num = num/10;
    //     ans = ans*10 + lastDigit;
    // }
    // cout<<ans<<endl;


    //* by optimise
    //   int  num = 13 ,ans = 0, mul =1 ;
    // while(num!=0){
    //     //remainder
    //     int rem = num %2 ;
    //     num = num/2;
    //     ans = ans+rem*mul;
    //     mul = mul*10;
    // }

    // cout<<ans<<endl;

    //* by bitwise and

//     int num = 13, ans = 0, mul = 1;

//    while(num!=0){
//     // reminder
//     int rem = num&1;
//     // Right shift operatrion; num = num>>1
//     num = num>>1;
//     ans = ans+rem*mul;
//     mul= mul*10;
//    }
//    cout<<ans<<endl;

//*binary to decimal
  int num = 11011;

   int ans = 0, mul =1;

   while(num!=0){
    
    int rem = num%10;
    num/=10;
    ans = ans+rem*mul;
    mul*=2;
   }

   cout<<ans<<endl;

    return 0;
}