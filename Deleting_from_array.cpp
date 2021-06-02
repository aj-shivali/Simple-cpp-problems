#include<iostream>
using namespace std;
class array{
    public:
int arr[100],n;
void getdata(){
cout<<"enter the number of elements "<<endl;
cin>>n;
cout<<"enter the elements in the array: "<<endl;
for(int i=1;i<=n;i++){
    cin>>arr[i];
}
cout<<"array elements are :";
for(int i=1;i<=n;i++){
    cout<<arr[i]<<"\t";
}
}
int pos;
void deletion(){
cout<<endl<<"enter position from which you want to delete the element "<<endl;
cin>>pos;
for(int i=pos;i<=n;i++){
    arr[i]=arr[i+1];
}
n=n-1;
cout<<"new array elements are :"<<endl;
for(int i=1;i<=n;i++){
    cout<<arr[i]<<"\t"; 
}
}
};
int main(){
array a;
a.getdata();
a.deletion();
return 0;
}
