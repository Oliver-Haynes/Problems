#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>arr ,int target){
for(int i = 0;i<arr.size();i++){
for(int j =i+1;j<arr.size();j++){
if(arr[i]+arr[j]==target){ 
return {i,j};

}
}
}
return {-1,-1};
}

int main(){
vector<int> arr={1,2,3,4,6};
int target = 10;
cout<<"target = "<<target<<" in list:"<<endl;
for(int i : arr){
    cout<<i<<endl;
}
vector<int> pair=twoSum(arr,target);
cout<<pair[0]<<pair[1];
}

