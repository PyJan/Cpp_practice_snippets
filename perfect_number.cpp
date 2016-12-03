#include <iostream>
using namespace std;
/*
Finding out if a given number is a perfect number.
Perfect number is the sum of its divisors starting from 1, itself not counting (6,28,496,8128).
2016-3-12
by PyJan
*/
int main()
{
    bool again=true;
    while (again){
        int my_number;
        cout<<"Give me a number: ";
        cin>>my_number;

        int partial_sum=0;
        for (int i=1;i<my_number;i++){
            if (my_number%i==0){
                partial_sum+=i;
            }
        };
        if (partial_sum==my_number){
            cout<<"This is a perfect number"<<endl<<endl;
        }
        else {
            cout<<"Computer says 'no'...."<<endl<<endl;
        }
    }
 
    system("pause");
    return 0;
}
