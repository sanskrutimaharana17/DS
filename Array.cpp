#include<iostream>
using namespace std;

int main() {
	
	int arr[20];
	int  n; //elements in array
    
    cout<<"Enter number of elements";
    cin>>n;
    
    cout<<"Enter elements" << endl;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
    cout << "Printing elements" << endl;
    for(int i=0;i<n;i++){
    	cout<<arr[i] <<endl;
	}
  return 0; 
}
