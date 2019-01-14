#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
void Bin2Dec(int);
void Dec2Bin(int);
int main()
{
int ch,n;
 while(1)
 {
  cout<<"\nConversions\n";
  cout<<"1.Binary to Decimal\n2.Decimal to Binary\n3.Exit\n";
  cout<<"Enter your choice: ";
  cin>>ch;
  switch(ch)
  {
   case 1: cout<<"\nEnter a Binary number: ";
                cin>>n;
                Bin2Dec(n);
                break;

   case 2: cout<<"\nEnter a Decimal number: ";
                cin>>n;
                Dec2Bin(n);
                break;
  case 3: exit(0);
                break;
default: cout<<"\nPlease enter between 1 and 2";
            break;
  }//end of switch case
 }//end of while loop
 return(0);
}//end of main

void Bin2Dec(int n)
{
 int DecNum,i,rem;

 DecNum=0; i=0;

 while(n!=0)
 {
  rem=n%10;
  DecNum=DecNum+rem*pow(2,i);
  n/=10;
  ++i;
 }
 cout<<"\nThe Equivalent Decimal number is: "<<DecNum<<endl;
}

void Dec2Bin(int num)
{
 int Bin[100],i=0;
 while(num>0)
 {
  Bin[i]=num%2;;
  num/=2;
  i++;
 }
 cout<<"\nThe equivalent binary number is: ";
 for(int j=i-1;j>=0;j--)
 {
  cout<<Bin[j];
 }
 cout<<endl;
}
