#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,n,p=2,sum=0;
 cout<<"Enter which fibonacci term do you want"<<endl; 
cin>>n;
if(n==1)
{
	cout<<"result="<<n<<endl;
}
else
{
while(p<=n)
{
sum=a+b;
a=b;
b=sum;
p++;
}
cout<<"result="<<sum<<endl;
}
system("pause");
return 0;
}