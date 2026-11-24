#include<iostream>
using namespace std;

/* targeted value or min_index
compare with elts on left side

i=0, 1st iteration
min_index=0(i)
compare with elts of index 1 to -1
arr[j] > arr[min] => min_index = j; 
loop() through the whole unsorted array
swap arr[i] with arr[min_index]
*/ 

void swap(int &n, int &x){
    int temp = x;
    x = n;
    n = temp;
}


void selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int min_index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int x =3; int n = 10; 
    swap(x, n);
    cout<<"x: "<<x<<" n:"<< n<<endl;
    int a[5] = {1, 6, 3, 5, 10};
    cout<<"unsorted: ";
    printArray(a,5);
    cout<<"sorted: ";
    selectionSort(a,5);
    printArray(a,5);

}