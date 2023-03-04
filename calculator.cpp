#include <iostream>

using namespace std;


class Calculator{
    public :
        int input_one,input_two;
        char add,substraction,multiplication,devide ;
        Calculator(int a_input_one , char option,int a_input_two ){
            input_one = a_input_one;
            input_two = a_input_two;
            add = option ;
        }
        char calculate(){
            if(add == '+'){
                cout << input_one + input_two << endl;
            }else {cout << 'ok' << endl;}
        }
};


int main(){
    Calculator cal1(5,'+',6);
    cal1.calculate();
}