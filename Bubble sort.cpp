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

void bubble_sort(int array[],int n)
{

    for (int i=0; i<n-1; i++)
    {
        int swapped = 0;
        for(int j=0; j<n-1-i; j++)
        {

            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;

                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }

}

void binary_search(int array[], int lb, int hb, int el) {
    if (lb > hb) {              // base case for not found
        cout << "Not found!";
        return;
    }

    int mid = (lb + hb) / 2;

    if (array[mid] > el) {
        binary_search(array, lb, mid - 1, el);
    }
    else if (array[mid] < el) {
        binary_search(array, mid + 1, hb, el);
    }
    else {                      // array[mid] == el
        cout << "Found at IDX :"<<mid;
        return;
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

    bubble_sort(array,n);
    print_el(array, n, 0);

    cout<<endl;

    int el;
    cout<<"Enter element to search :";
    cin>>el;

    binary_search(array,0,n-1,el);




    return 0;
}
