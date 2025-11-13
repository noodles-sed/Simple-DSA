#include<iostream>   
using namespace std;   
int main(){   
    int salary[10];   
    for(int i=0;i<10;i++){   
        cout<<"Enter the salary of "<<i+1<<"th worker : \n";   
        cin>>salary[i];   
    }   
   
    int max_salary=-1;   
    int min_salary=100000000;   
    for(int i=0;i<10;i++){          
if(salary[i]>max_salary){   
            max_salary=salary[i];   
        }   
       if(salary[i]<min_salary){   
            min_salary=salary[i];   
        }   
    }   
    cout<<"Maximum salary is : "<<max_salary<<"\n";   
    cout<<"Minimum salary is : "<<min_salary<<"\n";   
    return 0;   
} 