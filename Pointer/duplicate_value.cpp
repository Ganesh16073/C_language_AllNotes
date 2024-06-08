#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr,size,i,j,temp;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("Enter the Array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<size;i++)   		// Sorting in accending order
	{
		for(j=i+1;j<size;j++)
		{
			if(ptr[i]>ptr[j])
			{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
			
		}
	}

	i=0;					// remove duplicate value
	for(j=1;j<size;j++)
	{
		if(ptr[i]!=ptr[j])
		{
			i++;
			ptr[i]=ptr[j];
		}
	}
}



//#include<bits/stdc++.h>
//
//using namespace std;
//int removeDuplicates(int arr[], int n)
//{
//  int i = 0;
//  for (int j = 1; j < n; j++) {
//    if (arr[i] != arr[j]) {
//      i++;
//      arr[i] = arr[j];
//    }
//  }
//  return i + 1;
//}
//int main() {
//  int arr[] = {1,1,2,2,2,3,3};
//  int n = sizeof(arr)/sizeof(arr[0]);
//  int k = removeDuplicates(arr, n);
//  cout << "The array after removing duplicate elements is " << endl;
//  for (int i = 0; i < k; i++) {
//    cout << arr[i] << " ";
//  }
//}

