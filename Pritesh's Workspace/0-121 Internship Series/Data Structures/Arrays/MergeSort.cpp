#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& vec, int low, int mid, int high){

    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(vec[left] <= vec[right]){
            temp.push_back(vec[left]);
            left++;
        }
        else{
            temp.push_back(vec[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(vec[left]);
            left++;
    }
    while(right<=high){
        temp.push_back(vec[right]);
        right++;
    }

    for(int i=low; i<=high; i++){
        vec[i] = temp[i-low];
    }
}

void mergeSortAlgo(vector<int>& vec, int low, int high){

    if(low==high) return;
    int mid = (low+high) / 2;
    mergeSortAlgo(vec,low,mid);
    mergeSortAlgo(vec,mid+1,high);
    merge(vec,low,mid,high);
}
int main(){

    vector<int> vec;
    vec.push_back(5);
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(6);
    vec.push_back(4);

    cout << "Unsorted Array : " << endl;
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }

    int size = vec.size();

    mergeSortAlgo(vec,0,size-1);

    cout << endl << "Sorted Array : " << endl;
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }


    return 0;

} 