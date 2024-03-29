#include <iostream>
using namespace std;

void swap(int* a, int*b){
    int t=*a;
    *a=*b;
    *b=t;
}

int partition(int arr[], int low, int high)
{
    int pivot=arr[high];//pivote
    int i=(low-1);

    for(int j=low; j<=high-1; j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int pi= partition(arr, low, high);

        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

void maxMissingNumber(int arr[], int size){
	int nMax=0;
	for(int i=0; i<size; i++){
	
		while(arr[i]%2==0){ //Deja solamente los numeros impares
			arr[i]=arr[i+1];
			i++;

        if(arr[size-1]%2==0){
			arr[size-1]=arr[i-1];
			i--;
			size=size-1;
					
		}		
		}nMax=arr[size-1]; //El número mayor será el de la posición final al ordenarse
}   cout<<endl;
    cout<<nMax+1; //Se le suma 1
}

void printArray(int arr[], int size){
    int i;
    for(i=0; i<size; i++)
        cout<<arr[i]<<"";
    cout<<endl;
}

int main(){
    int arr[]={1,3,3,3,6,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    printArray(arr,n);
	maxMissingNumber(arr, n);
    return 0;
}