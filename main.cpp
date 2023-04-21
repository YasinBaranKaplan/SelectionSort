#include <iostream>

using namespace std;

void SelectionSort(int arr[],int arrLenght){

    int minimum;

    for(int i=0;i<arrLenght;i++){
        minimum=i;

        for(int k =i+1;k<arrLenght;k++){
                if(arr[k]<arr[minimum]){
                    minimum=k;
                }

                swap(arr[minimum],arr[i]);
        }
    }


}

void PrintArray(int arr[],int arrSize){
        for(int i =0;i<arrSize;i++){
            cout<<arr[i]<<"\t";
        }

}

int main()
{
   int testArray[7]={12,-10,9,64,28,112,-111};
   SelectionSort(testArray,7);
   PrintArray(testArray,7);
}
