#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the number of elements:";
cin>>n;
double numbers[n];
double sum=0.0;
for(int i=0;i<n:++i)
{
cout<<"enter nu,ber"<<i+1<<
cin>>numbers[i];
sum+=numbers[i];
}
double average = sum/n;
cout<<"sum:"<<sum<<endl;
cout<<"average:"<<average<<endl;
return 0;
}
