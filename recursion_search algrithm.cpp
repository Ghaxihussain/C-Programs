#include<iostream>
using namespace std;

int search(int arr[], int target, int high, int low) {
    int mid = (low + high) / 2;
    
    while (low <= high) {
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            return search(arr, target, high, mid + 1);  // Update low to mid + 1
        }
        if (arr[mid] > target) {
            return search(arr, target, mid - 1, low);   // Update high to mid - 1
        }o
    }
    
    return -1;
}

main(){
	int arr[]= {1,2,3,4,99,107,190};
	cout<<search(arr, 190, 6, 0);
}



