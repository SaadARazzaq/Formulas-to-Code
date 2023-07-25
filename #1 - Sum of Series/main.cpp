#include<iostream>
using namespace std;

int main(){
    int terms;
    cout<<"Enter the number of terms: ";
    cin>>terms;
    float sum=0;  // Taking sum and fact as float to get answer in points
    float fact = 1;
    for (int i=1;i<=terms;i++){
        fact = 1;   //  reset the value after every ith iteration
      
        /*  
        Below(inner) loop will run till 'i' because in this way we will be able to take factorial of 'i' 
        e.g. for second iteration the answer must be 2! like it will be only possible to run 'j' from 1 to 'i'
        and find the factorial and store it in fact variable.
        */
        for(int j = 1; j <= i; j++){  
            fact *=j;
        }
        sum = sum + ((i)/(fact));  //  formula for finding sum e.g. 2/2! in second ith iteration.
    }
    cout<<"The sum of first "<<terms<<" terms is = "<<sum<<endl;
    return 0;
}
