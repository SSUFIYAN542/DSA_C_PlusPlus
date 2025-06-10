#include <iostream>
using namespace std;
int main() {

    /*
    A
    BB
    CCC
    DDDD
    EEEEE

    int n = 5;
    char ch = 'A';

    for(int i = 0; i<n; i++){
        
        for (int j = 0; j <=i; j++)
        {
            cout<< ch;
            
        }
        ch++;
        cout<<endl;
    }
    */


    /*
    1
    12
    123
    1234

    int n =4;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<< j;
        }       
        cout<< endl;
    }
    */


    //Backward for loop
    /* int n = 5;
    for(int i = n ; i> 0 ; i--){
        cout<<i << endl;
    } 
    */

    /*
    1
    21
    321
    43421

    int n= 4;

    for (int i=0; i<n; i++){ //row

        for(int j= i+1 ; j>0; j--){ //column
            cout<< j;
        }
        cout<<endl;
    }
    */

    /*
    1111
     222
      33
       4
    */

    // int n = 4;

    // for(int i=0; i<n; i++){

    //     for(int j= 0; j<i;j++){
    //         cout<<" ";
    //     }

    //     for(int j=0; j<n-i; j++){
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }


    /*
    AAAA
     BBB
      CC
       D
    */

    // int n = 4;
    // char ch = 'A';

    // for(int i=0 ; i< n; i++){
    //     for (int j = 0; j<i ; j++)
    //     {
    //         cout<<" ";
    //     }

    //     for(int j=0; j<n-i; j++){
    //         cout<< ch;
    //     }
    //     ch++;
    //     cout<<endl;
    // }


    /*
       1
      121
     12321
    1234321

        int n =4;

    
    for(int i=0; i<n; i++){

        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        //num1
        for (int j = 0; j <i+1; j++)
        {
            cout<< j+1;

        }

        //num2
        for(int j=i; j>= 1; j--){
            cout<< j;
        }
         cout<< endl;
    */

    /*
   *
  * *
 *   *
*     *
 *   *
  * *
   *
    */

    int n=4;

    //top 
    for(int i = 0; i<n; i++){
        //space
        for (int j = 0; j<n-i-1; j++)
        {
            cout<<"  ";
        }
        
        cout<<"*";

        //after *
        if (i != 0)
        {
            for(int j=0; j<2*i-1; j++){
                cout<<"  ";
            }

            cout<< "*";
        }
        cout<<endl;
         
    }

    //Bottom
    for(int i = 0; i<n-1;i++)
    {
        //space
         for(int j=0; j<i+1; j++){
                cout<< "  ";
        }

        cout<< "*";

         if(i !=(n-2)){
            for(int j = 0; j< 2*(n-i)-5; j++){
                    cout<< "  ";
            }
                cout<< "*";
        }
            cout<<endl;
    }
}
