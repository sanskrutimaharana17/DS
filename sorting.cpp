#include <iostream>   
using namespace std;

int main()
{
	int arr[100]={0};
	int n;
	cout<<"size of array";
	cin>>n;
	
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	cout<<"elements of array";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	
	
	return 0;
}

																											                                                                                                             
