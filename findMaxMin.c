#using divide and conquer method
#include<stdio.h>

int a[50],max,min;

void find(int i,int n){
   int mid,max1,min1;

   if(i==n)
     max=min=a[i];
   else if(i==n-1)
     if(a[i]>=a[n-1]){
       max=a[n];
       min=a[i];
     }
     else{
       max=a[i];
       min=a[n];
     }
   else{
     mid=(i+n)/2;
     find(i,mid);
     max1=max;
     min1=min;
     find(mid+1,n);
     if(max<max1)
         max=max1;
     if(min>min1)
         min=min1;
   }
}  

int main(){
   int i,n;

   printf("Enter size of array : ");
   scanf("%d",&n);

   printf("Enter elements in array-->\n");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);

   max=min=a[0];
   find(1,n-1);

   printf("Minimum : %d",min);
   printf("\nMaximum : %d",max);
   
   return 0; 

}
