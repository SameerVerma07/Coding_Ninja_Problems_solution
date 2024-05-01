#include<bits/stdc++.h>
using namespace std;
int fibonaci_series(int number);

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
       cout<<"Starts \n please comment this line as it add to show the start of the program.\n";
        int numbers;
        cin>>numbers;
        cout<<fibonaci_series(numbers);


}

int fibonaci_series(int number){
        if(number == 1 || number == 2){
                return 1;
        }
        return fibonaci_series(number-1) + fibonaci_series(number -2);

}