#include <iostream>
#include <vector>
using namespace std;

int main(){
//wap[ to find unique no. fn in single repition]...
vector <int>vec={1,4,8,5,6,7,6,9,11,6,5,1,2,1,2,4};
int sum=0;

for(int i:vec){
    sum^=i;
}
cout<<sum<<" ";

    return 0;
}