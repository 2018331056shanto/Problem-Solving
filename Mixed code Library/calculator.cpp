// #include<iostream>
// using namespace std;
// float Addition(float x, float y){
//     return x+y;
// }
// float Subtraction(float x, float y){
//     return x-y;
// }
// float Multiplication(float x, float y){
//     return x*y;
// }
// float Division(float x, float y){
//     if(y)
//         return x/y;
//     else
//         return 0;
// }
// float Square(float n){
//     return n*n;
// }
// float Cube(float n){
//     return n*n*n;
// }
// int Power(float x, float y){
//     if(!y)
//         return 1;
//     else
//         return x*Power(x,y-1);
// }
// float Mod(int x, int y){
//     return x%y;
// }
// int TenRaised(int x){
//     if(!x)
//         return 1;
//     else
//         return 10*TenRaised(x-1);
// }
// int Factorial(float n){
//     if(n<=1)
//         return 1;
//     else 
//         return n*Factorial(n-1);
// }
// float Percent(float n, float p){
//     return (n * p)/100.0;
// }
// float Inverse(float n){
//     return 1/n;
// }
// int main(){
//     int choice;
//     while(1){
//         float n1,n2;
//         system("CLS");
//         cout<<"\t1.Addition"<<endl;
//         cout<<"\t2.Subtraction"<<endl;
//         cout<<"\t3.Multiplication"<<endl;
//         cout<<"\t4.Division"<<endl;
//         cout<<"\t5.Square"<<endl;
//         cout<<"\t6.Cube"<<endl;
//         cout<<"\t7.Power"<<endl;
//         cout<<"\t8.Mod"<<endl;
//         cout<<"\t9.Ten Raised^n"<<endl;
//         cout<<"\t10.Factorial"<<endl;
//         cout<<"\t11.Percent"<<endl;
//         cout<<"\t12.Inverse"<<endl;
//         cout<<"\t0 to exit"<<endl;
//         cout<<"Enter Your Choice:";
//         cin>>choice;
//         system("CLS");
//         switch(choice){
//             case 1:
//             {
//                 cout<<"Enter number 1:";
//                 cin>>n1;
//                 cout<<"Enter number 2:";
//                 cin>>n2;
//                 cout<<"Addition is: "<<Addition(n1,n2)<<endl;
//                 system("PAUSE");
//                 system("CLS");
//                 break;
//             }
//             case 2:
//             {
//                 cout<<"Enter number 1:";
//                 cin>>n1;
//                 cout<<"Enter number 2:";
//                 cin>>n2;
//                 cout<<"Subtraction is: "<<Subtraction(n1,n2)<<endl;
//                 system("PAUSE");
//                 system("CLS");
//                 break;
//             }
//             case 3:
//             {
//                 cout<<"Enter number 1:";
//                 cin>>n1;
//                 cout<<"Enter number 2:";
//                 cin>>n2;
//                 cout<<"Multiplication is: "<<Multiplication(n1,n2)<<endl;
//                 system("PAUSE");
//                 system("CLS");
//                 break;
//             }
//             case 4:
//             {
//                 cout<<"Enter number 1:";
//                 cin>>n1;
//                 cout<<"Enter number 2:";
//                 cin>>n2;
//                 if(n2>0)
//                     cout<<"Division is: "<<Division(n1,n2)<<endl;
//                 else
//                     cout<<"Denominator should not be zero."<<endl;
//                 system("PAUSE");
//                 system("CLS");
//                 break;
//             }
//             case 5:
//             {
//                 cout<<"Enter number:";
//                 cin>>n1;
//                 cout<<"Square is: "<<Square(n1)<<endl;
//                 system("PAUSE");
//                 system("CLS");
//                 break;
//             }
//             case 6:
//             {
//                 cout<<"Enter number:";
//                 cin>>n1;
//                 cout<<"Cube is: "<<Cube(n1)<<endl;
//                 system("PAUSE");
//                 system("CLS");
//                 break;
//             }
//             case 7:
//             {
//                 cout<<"Enter base:";
//                 cin>>n1;
//                 cout<<"Enter exponent:";
//                 cin>>n2;
//                 cout<<n1<<"^"<<n2<<" is: "<<Power(n1,n2)<<endl;
//                 system("PAUSE");
//                 system("CLS");
//                 break;
//             }
//             case 8:
//             {
//                 cout<<"Enter number 1:";
//                 cin>>n1;
//                 cout<<"Enter number 2:";
//                 cin>>n2;
//                 cout<<n1<<" Mod "<<n2<<" is: "<<Mod(n1,n2)<<endl;
//                 system("PAUSE");
//                 system("CLS");
//                 break;
//             }
//             case 9:
//             {
//                 cout<<"Enter exponent:";
//                 cin>>n2;
//                 cout<<"10^"<<n2<<" is: "<<TenRaised(n2)<<endl;
//                 system("PAUSE");
//                 system("CLS");
//                 break;
//             }
//             case 10:
//             {
//                 cout<<"Enter Number:";
//                 cin>>n2;
//                 cout<<"Factorial of "<<n2<<" is: "<<Factorial(n2)<<endl;
//                 system("PAUSE");
//                 system("CLS");
//                 break;
//             }
//             case 11:
//             {
//                 cout<<"Enter number 1:";
//                 cin>>n1;
//                 cout<<"Enter number 2:";
//                 cin>>n2;
//                 cout<<"Inverse value is: "<<Inverse(n1)<<endl;
//                 system("PAUSE");
//                 system("CLS");
//                 break;
//             }
//             case 12:
//             {
//                 cout<<"Enter number:";
//                 cin>>n1;
//                 cout<<"Cube is: "<<Cube(n1)<<endl;
//                 system("PAUSE");
//                 system("CLS");
//                 break;
//             }
//             case 0:
//                 exit(0);
//         }
//     }
//     return 0;
// }
