#include<iostream>
using namespace std;

// LinerSearch with time Compilixty O(n) 
void linerSearch(int arr[],int size,int key){

    
    bool flage = true;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            cout<<"found: "<<key<<" Element in index: "<<i<<"\n";
            flage=false;
            continue;
        }
    }
    if(flage){
        cout<<"Element not found"<<endl;
    }
}



int main(){


    int input[]={1,4,3,4,5};
    int size = sizeof(input)/sizeof(input[0]);
    linerSearch(input,size,9);
}