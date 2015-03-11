#include<iostream>
using namespace std;
int main()
{
int n;
cin >> n;
cout << n <<endl;
for(;;){
if(n!=1){
if(n%2!=0){
n=3*n+1;
}
else
n=n/2;
cout << n <<endl;
}
if(n==1)
break;
}
return 0;
}


 
