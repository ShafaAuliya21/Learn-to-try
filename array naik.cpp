#include<iostream>
using namespace std;
int main ()
{
   int i, j,aft=0,data_sementara;
   int a[5] = {300,200,100,147,133};
   
	for(i = 0; i<5; i++) {
	   for(j = i+1; j<5; j++)
	   {
	      if(a[j] < a[i]) {
	         data_sementara = a[i];
	         a[i] = a[j];
	         a[j] = data_sementara;
	      }
	   }
	aft++;
	}
for(i = 0; i<5; i++) {
   cout <<a[i]<<" ";
}
return 0;
}
