#include <iostream>   
using namespace std;

int main()
{
	int arr[100]={0};
	int n,pos;
	cout<<"size of array";
	cin>>n;
	
	cout<<"element position to delete";
	cin>>pos;
	
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	if(pos<0 || pos >n){
		cout<<"invalid";
	}
	else{
		for(int i=pos-1;i<n-1;i++){
			arr[i]=arr[i+1];
		}
	    n--;
	
	cout<<"elements of array";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
	
	
	return 0;
}

																											                                                                                                             
