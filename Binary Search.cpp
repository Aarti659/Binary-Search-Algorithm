#include <iostream>  
#include <conio.h>  
using namespace std;  
int main ()  
{  
     
    int arr[100], sta, midd, end, i, num, tgt;  
      
    cout << " Define the size of the array: " << endl;  
    cin >> num;   
        cout << " Enter the values in sorted array either ascending or descending order: " << endl;  
      
    for (i = 0; i < num; i++)  
    {  
        cout << " arr [" << i << "] = ";  
        cin >> arr[i];  
    }  
      
     
    sta = 0;  
    end = num - 1; 
      
     
    cout << " Define a value to be searched from sorted array: " << endl;  
    cin >> tgt;  
      
     
    while ( sta <= end)  
    {  
        
        midd = ( sta + end ) / 2;  
        
        if (arr[midd] == tgt)  
        {  
            cout << " Element is found at index " << (midd + 1);  
            exit (0);   
        }  
         
        else if ( tgt > arr[midd])  
        {  
            sta = midd + 1;  
        }  
          
         
        else if ( tgt < arr[midd])  
        {  
            end = midd - 1; 
        }  
    }  
    cout << " Number is not found. " << endl;  
    return 0;  
}   



