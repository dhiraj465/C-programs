#include<stdio.h>

void arrayRev(int arr[])
{
    int swap;
    for (int i=0;i<7/2;i++)
    {
        swap = arr[i];
        arr[i]= arr[6-i];
        arr[6-i] = swap;
    }

    }
    void arrayPrint(int arr[])
{
    for(int i=0;i<7;i++)
    {
         printf("the value of element of %d is %d\n",i,arr[i]);
    }
}
int main()
{
    int arr[] = {2,6,4,9,1,3,8};

     printf("before reversing the array\n");
     arrayPrint(arr);

     arrayRev(arr);
     printf("after reversing the array\n");
     arrayPrint(arr);

     return 0;
}
