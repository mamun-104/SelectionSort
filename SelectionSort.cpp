
#include<bits/stdc++.h>
using namespace std;

// ****** Binary Search *****

int SelectionSort(int a[],int n){

    int i,j,index_min, temp;

    for(i=0;i<n-1;i++){
            index_min = i;
        for(j=i+1;j<n;j++){
            if(a[j] < a[index_min])
            {
                index_min = j;
            }
        }
        if(index_min != i)
        {
            temp = a[i];
            a[i] = a[index_min];
            a[index_min]= temp;
        }
    }

}
int main()
{
    int a[] = {101, 250, 3, 40, 20, 600, 77, 8, 90, 10};

    int n,i;
    n = sizeof(a)/sizeof(a[0]);

    SelectionSort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");


    return 0;
}

