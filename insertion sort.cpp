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
void insertion_sort(int array[],int n){
int in;
for(int i=1;i<n;i++){
    in=array[i];
    int j=i-1;
    while( j>=0 && array[j]>in ){
        array[j+1]=array[j];
        j--;
    }
    array[j+1]=in;
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
    insertion_sort(array,n);
    print_el(array,n,0);




return 0;
}
