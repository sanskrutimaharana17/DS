#include<iostream>
using namespace std;

int binarySearch(int num[],int n, int key){
	
	int start =0;
	int end = n-1;
	
	int mid=0;
	
	while(start<=end){
		int mid=start +(end-start)/2;
		if(num[mid]==key){
			return mid;
		}
		
		//go to right side
		else if (key<num[mid]){
			start=mid-1;
		}
		//go to left side
		else{
			end=end+1;
		}
		
		mid=start +(end-start)/2;
	}
	return -1;
}

int main() {
	
	int num[20];
	int  n; //elements in array
	int key; //key = number to find
    
    cout<<"Enter number of elements";
    cin>>n;
    cout<<"enter key";
    cin>>key;
    
    cout<<"Enter elements" << endl;
    for(int i=0;i<n;i++){
    	cin>>num[i];
	}
	
	int index=binarySearch(num,n,key);
	cout<<"index"<<index<<endl;
	return 0;
	}

