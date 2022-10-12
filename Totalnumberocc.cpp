#include <iostream>
using namespace std;
//Total No Of Occurrences of element in shorted array

//find first occurences of an element in sorted array
int firstOcc(int arr[], int n, int target) {
       int start = 0;
    int end = n-1;

    int mid = start +(end - start)/2;
    int ans = -1;
    while(start <= end) {
        int midElement = arr[mid];

        //element found
        if(midElement == target) {
            ans = mid;
            end = mid-1;
        }

        //check in left part and neglect right part
       else if(target < midElement) {
            end = mid - 1;
        }
        else{
            //check in right part and neglect left part
            start = mid+1;
        }

        mid = start +(end - start)/2;
    }
    return ans;
}

int LastOcc(int arr[], int n, int target) {
    int start = 0;
    int end = n-1;

    int mid = start +(end - start)/2;
    int ans = -1;
    while(start <= end) {
        int midElement = arr[mid];

        //element found
        if(midElement == target) {
            ans = mid;
            start = mid+1;
        }

        //check in left part and neglect right part
       else if(target < midElement) {
            end = mid - 1;
        }
        else{
            //check in right part and neglect left part
            start = mid+1;
        }

        mid = start +(end - start)/2;
    }
    return ans;
}

int main(){

int arr[]={2,3,3,3,3,4,7,9};
int n=8;
int target=3;
int first =firstOcc(arr,n,target);
int last =LastOcc(arr,  n, target);
cout<<last-first+1;
  return 0;
}
