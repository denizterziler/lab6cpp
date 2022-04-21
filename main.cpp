#include <iostream>
using namespace std;

double recursive_q2(int n){
    if (n == 0){
        return 1;
    }
    else{
        return (((double) n / (double)(n + 2)) - 10) * recursive_q2(n - 1);
    }
}
double recursive_q2(){
    cout << "Enter the number for the function without parameter: " << endl;
    int num;
    cin >> num;
    double sum = 1;
    while(num!=0){
        sum = sum * (((double) num / (double)(num + 2)) - 10);
        num--;
    }
    cout<< "The result of the equation is: " << sum <<endl;
}
int main() {
    cout<<"Enter the number for the function with parameter: "<< endl;
    int number;
    cin>>number;
    cout<< "The result of the equation is: " << recursive_q2(number) <<endl;
    recursive_q2();
    return 0;
}
