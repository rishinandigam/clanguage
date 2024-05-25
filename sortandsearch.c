//bubble sorting of array elements ........
/*#include <stdio.h>
int main()
{
 int  n,arr [20];
 printf("enter the nof elements inthe array");
 scanf("%d",&n);
  printf("enter the elements into array :\n");
 for (int i = 0; i < n; i++)
 {
    scanf("%d ",&arr[i]);
 }
 printf("the elements before sorting : \n");
 for (int i = 0; i < n; i++)
 {
 printf("%d ",arr[i]);
    
 }
 int temp;
 for ( int i = 0; i < n - 1; i++) {
        for ( int j = 0; j < n - i - 1; j++)
         {
            
            if (arr[j] > arr[j + 1])
             {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
 }
    printf("the elements in the array after sorting \n");
    for (int i = 0; i < n; i++)
    {
      printf("%d", arr[i]); 
    }
}*/
//insertion sort.....in the arrays.
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no of elements : ");
    scanf("%d",&n); 
    int a[20];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the elements before sorting :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(int i=1;i<n;i++)
    {
        int temp =a[i];
        int j=i-1;
        while(j>=0 && temp<=a[j])
        {
            a[j+1]= a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("\nthe elements after  sorting :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}*/
//selection sort.................
/*#include<stdio.h>
int main()
{
    int n;
    int a[10];
    printf("Enter the no of elements in the array : ");
    scanf("%d",&n);
    printf("\nenter the elements into array : ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nThe elements before sorting : ");
    for(int i=0;i<n;i++)
    printf("%d \t",a[i]);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        int min =i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min =j;
        }
        int temp =a[i];
        a[i]=a[min];
        a[min]=temp;
    

    }
    printf("\nThe elements after  sorting : ");
    for(int i=0;i<n;i++)
    printf("%d \t",a[i]);

}*/
//linear search.............
/*#include<stdio.h>
int main()
{
    int arr[10] ,n;
    printf("enter the nof elements inthe array : ");
    scanf("%d",&n);
    printf("the elements into array : ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    } 
    int search ,i;
    printf("enter the search element : ");
    scanf("%d",&search);
    for( i=0;i<n;i++)
    {
        if(arr[i]== search)
        break; 
    }
    if(i==n)
    printf("%d is found in the array .",search);
    else
    printf("%d is present in the position %d",search,i+1);


}*/
//Binary search ............
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[20];
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    printf("enter the elements in ascending order  in the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int search;
    printf("enter the search element : ");
    scanf("%d",&search);
    int low =0;
    int high =n-1;
    int mid = (low+high)/2;
    int found =0;
    while(low<=high)
    {
         
    
        if(search == a[mid])
        {
        printf("%d is found at position %d", search , mid+1);
         found =1;
        break;
        }
        else if(search < a[mid])
        {
            high =mid-1;
        }
        else if(search > a[mid])
        {
          low =mid +1;
        }
    }
    if(found ==0)
    printf("element is not found\n");
    
}*/
// quick sort ...............
/*#include<stdio.h>
int main()
{
    int  a[20],n;
    printf("Enter the no of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements into array :");
    for(int i=0;i<n;i++)
    scanf("%d",a[i]);
    int pivot = a[0];
    int low = 0;
    int high =n-1;
    if(low < high)
    {
        for(int i=0;i<high;i++)
        {
            if(a[i]<pivot)
            
            i++;

      
        }
    }

}*/
//quick sort .......
#include<stdio.h>
void QuickSort( int *a , int low ,  int high)
{
    if(low < high)
    {
        int pivotIndex = Partition(a , low ,high-1);
        QuickSort( a , low, pivotIndex-1);
         QuickSort( a ,  pivotIndex+1 , high);

    }
    
}
int Partition( int *a , int low , int high)
{
    int i=low;
    int j=low;
    int pivot = a[high-1];

    while(i <= high-1)
    {
        if( a[i] < pivot)
        {
            Swap(a[i],a[j] );
            j++;
        }
        i++;
    }
    
     Swap(a[j],a[high-1]);
    return j;

}
 void Swap( int a , int b)
 {
    int temp = a ;
         a = b;
         b = temp;

 }
int main()
{
    int a[32];
    int n;
    printf("Enter the no of elements in the array :");
    scanf("%d",&n);
    printf("\nEnter the elements into array :");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nThe elements in the array before sorting  are : ");
    for(int i=0;i<n;i++)
    printf("%d  ",a[i]);
    QuickSort(a , 0 , n);
    printf("\nThe elements in the array after  sorting  are : ");
    for(int i=0;i<n;i++)
    printf("%d  ",a[i]);



}
