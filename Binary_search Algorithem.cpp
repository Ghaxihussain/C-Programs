#include<iostream>
using namespace std;
// binary search
int binary_search(int arr[], int target,int size){
	int mid, low = 0,high = size-1;
	while(low <= high){
		mid = (low + high) / 2;
		cout<<low<<" / "<<high<<" =  "<<mid<<endl;
		if (arr[mid] == target){
			return mid;
		}
		if (arr[mid] < target){
			low +=1;
		}
		if (arr[mid] > target){
			high -=1;
		}
		
	}
	return -1;
}
main(){
	int a[] = {4,5,6,7,8,99,1001};
	cout<<binary_search(a, 7, 7);
}

