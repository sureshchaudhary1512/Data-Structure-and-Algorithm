#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ",arr.A[i]);
    }
}

void Append(struct Array *arr, int value)
{
    //check condition 
    if(arr->length<arr->size)
    {
        arr->A[arr->length++] = value;
    }
}

void Insert(struct Array *arr, int index, int value)
{
    if (index >=0 && index<=arr->length)
    {
        for(int i = arr->length;i>index;i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = value;
        arr->length++;
    }
}

void Delete(struct Array *arr, int index)
{
    int x = 0;
    if (index >=0 && index<=arr->length)
    {
        arr->A[index] = x;
        for(int i = index; i < arr->length-1; i++)
        {
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
    }
    
}

int Linearsearch(struct Array arr,int key)
{
    for(int i = 0; i < arr.length;i++)
    {
        if(key == arr.A[i])
        return i;
    }
    
    return -1;
}

void Reverse(struct Array *arr)
{
    //int B[6]; used when we know no of elements
    // OR
    // int B[arr->length];
    // OR
    // Dynamic Memory allocation: create in Heap
    int *B =(int *)malloc(arr->length*sizeof(int));
   
    int i,j;
    for(i=arr->length-1,j=0; i>=0;i--,j++)
    {
        B[j] = arr->A[i];
    }
    for(i=0;i<arr->length;i++)
    {
        arr->A[i] = B[i];
    }

    free(B);
    B=NULL;
}

void insertsort(struct Array *arry,int value)
{
    int i;
    for(i = arry->length-1;arry->A[i] > value;i--)
    {
        arry->A[i+1] = arry->A[i];
    }
    arry->A[i+1] = value;
    arry->length++;
}

bool isSorted(struct Array arrys)
{
    for(int i =0; i < arrys.length-1; i++)
    {
        if(arrys.A[i] > arrys.A[i+1])
        return false;
    }
    return true;
}

int main()
{
    struct Array arr ={{11,22,33,44,55},10,5};

    // Dynamic Array
    // printf("Enter size of array = ");
    // scanf("%d",&arr.size);
    // arr.A=(int *)malloc(arr.size*sizeof(int));
    // arr.length = 0;
    Append(&arr,66);
    // Append(&arr,77);
    // Append(&arr,88);
    // Append(&arr,99);
    // Append(&arr,100);
    // Append(&arr,101); // here condition will fail

    Insert(&arr,4,41);

    Display(arr);

    Delete(&arr,2);

    printf("\n");
    Display(arr);
    printf("\nKey value found at Index ");
    printf("%d",Linearsearch(arr,56));

    printf("\nReverse Number : ");
    Reverse(&arr);
    Display(arr);
    
    printf("\nSorted Array  : ");
    struct Array arry ={{11,22,33,44,55,66,77,88,99},10,9};
    Display(arry);

    printf("\nInsert value in sorted array : ");
    insertsort(&arry,45);
    Display(arry);

    struct Array arrys ={{11,22,33,58,55,66,77,88,99},10,9};
    isSorted(arrys);
   

    
    return 0;
}

