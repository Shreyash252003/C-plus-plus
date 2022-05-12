#include <iostream>

using namespace std;

int selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }
}

int bubble_sort(int *p,int n){
    int counter=0;
    int *m;
    m=p;
    while(counter<n-1){
        for(int i=0;i<n-counter;i++){
            if(*(p+1)<*p){
                int temp=*(p+1);
                *(p+1)=*p;
                *p=temp;
            }
            p++;
        }
        counter++;
        p=m;


}
}

int insertion_sort(int arr[],int n){

    for(int i=1;i<n;i++){
            int current=arr[i];
            int j=i-1;
        while(arr[i]<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}

int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


}


int main()
{
    int arr[10];
    int n;
    cout<<"Enter the size of the array you want";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the element at the index position "<<i<<":";
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<i<<endl;
    }


}
