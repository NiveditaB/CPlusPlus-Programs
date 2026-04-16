#include<iostream>
using namespace std;
int main(){
    int n = 4;

    //Triangle pattern :  1
                       // 1 2
                       // 1 2 3 
                       // 1 2 3 4
    cout<<"Triangle pattern\n";
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++)
        {
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
    cout<<endl;


    /*Square Pattern: 1 2 3 4
                      1 2 3 4
                      1 2 3 4 
                      1 2 3 4
    */    
   cout<<"Square pattern\n";
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    /* Floyd's Triangle pattern: 1
                                 2 3
                                 4 5 6
                                 7 8 9 10 
    */
    cout<<"Floyd's Triangle pattern\n";
    int num =1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    cout<<endl;


    /* Inverted Triangle pattern: 1 1 1 1
                                    2 2 2
                                      3 3
                                        4 
    */
   cout<<"Inverted Triangle pattern\n";
        //space+num so two inner loops 
        
        for(int i=0;i<n;i++)
        {
            //space
            for(int j =0; j<i ;j++){
                cout<<" ";
            }
            //num
            for(int j=0; j<n-i;j++){
                cout<<(i+1);
            }
            cout<<endl;

        }
    cout<<endl;
    /* Pyramid pattern:               1 
                                    1 2 1
                                  1 2 3 2 1
                                1 2 3 4 3 2 1 
    */
     cout<<"Pyramid Pattern\n";
     
     for(int i=0;i<n;i++){
        //space
        for(int j =0;j<n-i-1;j++){
            cout<<" ";
        }
        //num1 
        for(int j=1;j<=i+1;j++){
            cout<<j ;
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
     }
    return 0;
}
