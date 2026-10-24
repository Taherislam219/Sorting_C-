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

void selection_sort(int array[],int n)
{

    int min;

    for(int i=0; i<n-1; i++)
    {
        min=i;
        for(int j=i+1; j<n; j++)
        {
            if(array[j]<array[min])
            {
                min=j;
            }
        }
        int temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
}

void print_el(int array[], int n, int i)
{
    if(i >= n)
        return;

    cout << array[i] << " ";
    print_el(array, n, i+1);
}


int main()
{

    int array[100];
    int n;

    cout << "Enter size of the array: ";
    cin >> n;


    enter_el(array, n, 0);
    print_el(array, n, 0);
    cout<<endl;

    selection_sort(array,n);
    print_el(array, n, 0);
    return 0;
}
