#include<iostream>
using namespace std;
int main(){
    //* 1
    //* 01
    //* 101
    //* 0101 
    //* 10101 

// for(int i=1;i<=5;i++){
//     bool num = i%2;
//     for(int j=1;j<=i;j++){
//         cout<<num;
//         num=!num;
//     }
//     cout<<endl;
// }


// for(int i =1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//         if((i+j)%2==0){
//             cout<<"1";
//         }
//         else{
//             cout<<"0";
//         }
//     }
//     cout<<endl;
// }

//*1

// bool num=1;
// for(int i=1;i<2;i++){
//     cout<<num;
// }
// cout<<endl;

//*01

// num = 1;
// for(int i=1;i<=2;i++){
//     num=!num;
//     cout<<num;
// }
// cout<<endl;

//*101

// num = 0;
// for(int i=1;i<=3;i++){
//     num=!num;
//     cout<<num;
// }
// cout<<endl;

//*0101
// num = 1;
// for(int i=1;i<=4;i++){
//     num=!num;
//     cout<<num;
// }
// cout<<endl;

//*10101

// num = 0;
// for(int i=1;i<=5;i++){
//     num=!num;
//     cout<<num;
// }

//* A
//* AB
//* ABC
//* ABCD
//* ABCDE 

// for(char i= 'A'; i<='E';i++){
//     for(char j='A';j<=i;j++){
//         cout<<j;
         
//     }
//     cout<<endl;
// }


// for(int i=0;i<=5;i++){
//     char name = 'A';
//     for(int j=0;j<i;j++){
//         cout<<name;
//         name++;
//     }
//     cout<<endl;
// }

//* A 
// for(char i = 'A'; i<'B';i++){
//     cout<<i;
// }
// cout<<endl;

//* AB

// for(char i = 'A'; i<'C';i++){
//     cout<<i;
// }
// cout<<endl;

//* ABC

// for(char i = 'A'; i<'D';i++){
//     cout<<i;
// }
// cout<<endl;

//*ABCD

// for(char i = 'A'; i<'E';i++){
//     cout<<i;
// }
// cout<<endl;

//* ABCDE

// for(char i = 'A'; i<'F';i++){
//     cout<<i;
// }
// cout<<endl;


//*  A
//*  BB
//*  CCC
//*  DDDD
//*  EEEEE

// for(int i=0;i<=5;i++){
//     char name = 'A'+ i-1;
//     for(int j=0;j<i;j++){
//         cout<<name;
        
//     }
//     cout<<endl;
// }


// char name = 'A';
// for(int i=0;i<5;i++){
//     for(int j=0;j<=i;j++){
//         cout<<name;
        
//     }
//     name++;
//     cout<<endl;
// }

//*A

// for(int i= 0;i<1;i++){
//     cout<<"A";
// }
// cout<<endl;

//*BB

// for(int i= 0;i<2;i++){
//     cout<<"B";
// }
// cout<<endl;


//*CCC
// for(int i= 0;i<3;i++){
//     cout<<"C";
// }
// cout<<endl;

//*DDDD

// for(int i= 0;i<4;i++){
//     cout<<"D";
// }
// cout<<endl;

//*EEEEE

// for(int i= 0;i<5;i++){
//     cout<<"E";
// }
// cout<<endl;


//*     1
//*    121
//*   12321
//*  1234321
//* 123454321


// i=4 to 0

// 4 space ; print: 1
// 3 space ; print: 121
// 2 space: print: 12321
// 1 space: print: 1234321
// 0 space: print: 123454321


// spaces print karane
// number increaseing order
//  decreasing order


// for(int i=4;i>=0;i--){
   
//*      space print: i
//     for(int j=1;j<=i;j++){
//     cout<<" ";
//     }
    
// *     increasing number: 1 to 5-i
//     for(int j=1;j<=5-i;j++){
//     cout<<j;
//     }
   
//*      decreasing number: 5-i-1 to 1
//     for(int j=5-i-1;j>=1;j--){
//     cout<<j;
//     }

//     cout<<endl;

//     }


// for(int j=1;j<=4;j++){
//     cout<<" ";
// }
// for(int j=1;j<=1;j++){
//     cout<<1;
//  }

// cout<<endl;

// for(int j=1;j<=3;j++){
//     cout<<" ";
// }
// for(int j=1;j<=2;j++){
//     cout<<j;
// }

// for(int j=1;j>=1;j--){
//     cout<<j;
// }

// cout<<endl;


// for(int j=1;j<=2;j++){
//     cout<<" ";
// }
// for(int j=1;j<=3;j++){
//     cout<<j;
// }
// for(int j=2;j>=1;j--){
//     cout<<j;
// }

// cout<<endl;

// for(int j=1;j<=1;j++){
//     cout<<" ";
// }
// for(int j=1;j<=4;j++){
//     cout<<j;
// }
// for(int j=3;j>=1;j--){
//     cout<<j;
// }

// cout<<endl;

// for(int j=1;j<=1;j++){
//     cout<<" ";
// }
// for(int j=1;j<=5;j++){
//     cout<<j;
// }
// for(int j=4;j>=1;j--){
//     cout<<j;
// }

// cout<<endl;

//*prime number

// int num;
// cout<<"Enter the number:";
// cin>>num;

// if(num>2){
//     cout<<"Not a prime number";
// }

// for(int i = 2;i<num;i++){
//     if(num%i==0){
//         cout<<"Not a prime number";
//         return 0;
//     }
    
// }
// cout<<"prime number";
// cout<<endl;


//*   sum of digit

    int num = 345128;
    int sum = 0;

    while(num){
        int rem = num % 10;
        sum = sum +rem;
        num= num/10;
    }
    cout<<sum;



//    int i = 0;

//    while(i<10){
//     cout<<i<<" ";
//     i++;
//    }



    return 0;
}