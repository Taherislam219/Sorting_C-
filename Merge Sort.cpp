#include<iostream>
using namespace std;

void enter_el(int array[], int n, int i)
{
    if(i >= n)
        return;

    cout << "Enter element No " << i+1 << ": ";
    cin >> array[i];
    enter_el(array, n, i+1);
}

void print_el(int array[], int n, int i)
{
    if(i >= n)
        return;

    cout << array[i] << " ";
    print_el(array, n, i+1);
}

void Merge(int arr[],int l,int m,int u)
{

    int n1=m-l+1;
    int n2=u-m;

    int L[n1],R[n2];

    for(int i=0; i<n1; i++)
    {
        L[i]=arr[l+i];
    }
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i=0,j=0,k=l;
    while(i<n1  &&j<n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}


void Merge_sort(int array[],int lb,int ub)
{

    if(lb>=ub)
    {
        return;
    }
    int mid=(lb+ub)/2;
    Merge_sort(array,lb,mid);
    Merge_sort(array,mid+1,ub);
    Merge(array,lb,mid,ub);

}

int main()
{
    int array[100];
    int n;

    cout << "Enter size of the array: ";
    cin >> n;

    enter_el(array, n, 0);
    print_el(array, n, 0);
    cout << endl;

    Merge_sort(array,0,n-1);
    print_el(array, n, 0);


    return 0;
}
