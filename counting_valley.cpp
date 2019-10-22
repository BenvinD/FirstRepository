#include<iostream>
using namespace std;

int main()
{
int height = 0,prev_height=0,count=0,n,i;
char a[100000];
cin<<n;
for(i=0;i<n;i++)
{
getch(a[i]);
if(a[i]=='U')
height +=1;
else if(a[i]=='D')
height -1;
if(height == 0 && prev_height<0)
count++;
prev_height=height;
return 0;
}
}
