#include <stdio.h>
void swap(int i,int small, int *a)
{
    int temp;
    temp=a[small];
    a[small]=a[i];
    a[i]=temp;
}
void printbub(int *a)
{
    printf("\n<-------AFTER BUBBLE SORT------->\n");
    for (int i=0;i<5;i++)
    {
        printf("%d ", a[i]);
    }
}
void printsel(int *a)
{
    printf("\n<-------AFTER SELECTION SORT------->\n");
    for (int i=0;i<5;i++)
    {
        printf("%d ", a[i]);
    }
}
void printins(int *a)
{
    printf("\n<-------AFTER INSERTION SORT------->\n");
    for (int i=0;i<5;i++)
    {
        printf("%d ", a[i]);
    }
}
void selection(int *a)
{
    int small, temp;
    for (int i=0;i<4;i++)
    {
        small=i;
        for (int j=i;j<5;j++)
        {
            if(a[j]<a[small])
            {
                small=j;
            }
        }
        swap(i, small, a);
    }
    printsel(a);
}
void insert(int i,int j, int *a)
{
    int temp=a[j];
    for (int k=j; k>=i;k++)
    {
        a[k]=a[k-1];
    }
    a[i]=a[j];
}
void insertionsort(int *a)
{
    int sort;
    for (int i=0;i<4;i++)
    {
        sort=i;
        for (int j=i+1;j<4;j++)
        {
            if (a[j]<a[sort])
            {
                insert(i,j, a);
            }
        }
    }
    printins(a);
}
void bubblesort(int *a)
{
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4-i;j++)
        {
            if (a[j]>a[j+1])
            {
                swap(j,j+1,a);
            }
        }
    }
    printbub(a);
}
int main() {
    int a[5];
    for (int i=0;i<5;i++)
    {
        printf("enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    selection(a);
    insertionsort(a);
    bubblesort(a);
    
    return 0;
}
