#include <iostream>
using namespace std;
int binary_search(vector <int> arr,int beg,int end,int item){
    if(beg>end){
        return -1;
    }
    int mid=beg+(end-beg)/2;
    if(arr[mid]==item){
        return mid;
    }
    if(item<arr[mid])
    return binary_search(arr,beg,mid-1,item);
   return binary_search(arr,mid+1,end,item);
}

int main(){
    vector <int> v = {12,65,98,115,986,1009,9981};
    int st = 0;
    int end = v.size()-1;
    int target ;
    cin>>target;
    cout<<binary_search(v, st,end, target);\
    return 0;
}