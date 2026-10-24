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

int partition(int array[],int lb,int hb){

int pivot=array[lb];
int start=lb;
int end=hb;

while(start<end){

    while(start<=hb && array[start]<=pivot){
        start++;
    }
    while(end>=lb && array[end]>pivot){
        end--;
    }
    if(start<end){
        swap(array[start],array[end]);
    }
}

swap(array[lb],array[end]);
return end;

}

void Quick_sort(int array[],int lb,int hb){

if(lb<hb){
    int loc=partition(array,lb,hb);
    Quick_sort(array,lb,loc-1);
    Quick_sort(array,loc+1,hb);
}

}


int main(){

    int array[100];
    int n;

    cout << "Enter size of the array: ";
    cin >> n;

    enter_el(array, n, 0);
    print_el(array, n, 0);
    cout<<endl;

    Quick_sort(array,0,n-1);
    print_el(array, n, 0);




return 0;
}
