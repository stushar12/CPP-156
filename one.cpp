#include<bits/stdc++.h> 
using namespace std; 

int search(int arr[], int n, int element, int k) 
{ 
    int i = 0; 
    while (i < n) 
    { 
        if (arr[i] == element) 
            return i; 
        int ans=abs(arr[i]-element)/k;
        i = i + max(1, ans); 
    } 

    
    return -1; 
} 

int main() 
{ 
    int arr[] = {2, 4, 5, 7, 7, 6}; 
    int element = 6; 
    int k = 2; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int ans=search(arr,n,element,k);
    if(ans == -1)
    cout << "number is not present!"; 
    else
    cout << "Element " <<element<< " is present at index "<<ans ;
} 
