# include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;

    }
    return -1;
}
int main(){

    int array[7] = {2,7,8,9,10,22,30};

    int index = BinarySearch(array, 7 , 9);
    cout<<"Index of key is: "<<index<<endl;

    return 0;
}