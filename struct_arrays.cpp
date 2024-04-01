#include<iostream>
using namespace std;
void display_arr(int array[], int size){
	cout<<"Start"<<endl;
	for (int i =0; i <= (size-1); i++){
		cout<<array[i]<<endl;
	}
	cout<<"Stop"<<endl;
}
main(){
	int capacity= 100,size = 5;
	int arr[capacity] = {1,2,3,5,6};
	display_arr(arr, size);
}

