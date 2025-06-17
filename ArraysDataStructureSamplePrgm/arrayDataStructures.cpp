#include <iostream>
using namespace std;

void changeArray(int arr[], int size)
{
    cout << "In changeArray function " << endl;

    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target) // Found
        {
            return i;
        }
    }
    return -1; // Not found the value
}

void swapMinMax(int arr[], int size)
{
    // int arr[] = {3,4,2,5,1};

    int minValue = INT_MAX;
    int maxValue = INT_MIN;

    int minValIndex = -1;
    int maxValIndex = -1;

    for (int i = 0; i < size; i++)
    {

        if (minValue > arr[i])
        {
            minValue = arr[i];
            minValIndex = i;
        }

        if (maxValue < arr[i])
        {
            maxValue = arr[i];
            maxValIndex = i;
        }
    }

    swap(arr[minValIndex], arr[maxValIndex]);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void printUniqueElements(int arrrr[], int sizsse)
{
    int arr[] = {2,3,5,6,5,7,8,9,2,3,9};
    int size = 11;
    
    for (int i = 0; i < size; i++)
    {
        bool uniqueEle = true;
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                continue;
            }

            if (arr[i] == arr[j])
            {
                uniqueEle = false;
                break;
            }
        }
        if (uniqueEle)
        {
            cout << arr[i] << endl;
        }
    }
}

void printCommonArray(int arr1[], int size1, int arr2[], int size2){
    
    for(int i=0; i<size1; i++){
        int num1 = arr1[i];
        for(int j=0; j<size2; j++){
          int num2 = arr2[j];
          if(num1 == num2){
            cout << num1 << endl;
          }
        }
    }
}

int main()
{

    // Creating array and initializing data to array
    //  int marks[5] = {99, 100, 90, 20, 30};

    // double price[] = {99.0, 89.0, 99.9, 65.00};

    // int sz = sizeof(marks);
    //  int size = 5;
    //  cout<<"Size of array "<<sizeof(marks)<<endl;
    //  cout<<marks[0]<<endl;
    //  cout<<marks[1]<<endl;
    //  cout<<marks[2]<<endl;
    //  //cout<<marks[5]<<endl; //this will give error out of array..

    // cout<<price[1]<<endl;
    // cout<<price[2]<<endl;

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }

    //cout << "\n";
    // giving input to array and printing the given input from array..
    /*
    int siz = 5;
    int markss[siz];

    for(int i=0; i<siz; i++){
        cin >> markss[i];
    }

    for(int i=0 ; i<siz; i++){
        cout<<markss[i]<<endl;
    }
    */

    // cout<<"\n";

    // Find smallest/largest num in an array..
    /*
    int nums[] = {1, 0, -1, -12, 5, 12, 9};
    int size = 7;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0; i<size; i++){
        // if(nums[i]< smallest){
        //     smallest = nums[i];
        // }
       smallest =  min(smallest, nums[i]);
       largest = max(largest, nums[i]);


    }

    cout<<"smallest "<<smallest<<endl;
    cout<<"largest "<<largest<<endl;
    */


    //Pass by referance..
    /*
    int arr[] = {1,2,3};

    changeArray(arr, 3);

    cout<<"In main funtion "<< endl;

    for(int i=0 ; i<3; i++){
        cout<<arr[i]<<endl;
    }
    */

    // Linear search
    /*
    int arr[] = {4,2,6,2,8,9,5,8};
    int target = 2;
    cout<< "(Linear Search) target value index = " << linearSearch(arr, 8, target)<< endl;
    */

    // WAF to calculate sum and product of all numbers in an array..
    /*
    int arr[] = {1,2,3,4};
    int size = 4;
    int sum = 0;
    int product = 1;
    for(int i=0; i<size; i++){
        sum += arr[i];

        product *= arr[i];

    }

    cout<<product<<endl;
    */

    // WAF to swap the max and min number of an array

    /*
    int arr[] = {3,4,2,5,1};
    int size = 5;

    swapMinMax(arr, size);

    */

    // WAF to print unique elements in an array..
    /*
    int arr[] = {2, 3, 5, 6, 5, 7, 8, 9};

    int size = 8;

    printUniqueElements(arr, size);
    */


    //WAF to print intersection of 2 arrays.

    int arr1[] = {1,2,3,4,5};
    int arr2[] = {6,7,3,1};
    int size1 = 5;
    int size2 = 4;

    printCommonArray(arr1, size1, arr2, size2);
    return 0;
}
