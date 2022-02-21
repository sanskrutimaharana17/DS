#include <iostream>   
using namespace std;

int main()
{
	int arr[100]={0};
	int n,num,pos;
	cout<<"size of array";
	cin>>n;
	
	cout<<"number to be inserted";
	cin>>num;
	
	cout<<"pos in which to add";
	cin>>pos;
	
	n++;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=n-1;i>=pos;i--){
		arr[i]=arr[i-1];
	}
	
	arr[pos-1]= num;
	
	for(int i=0;i<n;i++){
		cout<<arr[i];
		cout<<" ";
	}
	
	
	return 0;
}

																											                                                                                                             
