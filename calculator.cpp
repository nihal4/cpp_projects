#include <iostream>

using namespace std;


class Calculator{
    public :
        float input_one,input_two;
        char add,substraction,multiplication,devide ;
        Calculator(float a_input_one , char option,float a_input_two ){
            input_one = a_input_one;
            input_two = a_input_two;
            add = option;
            substraction = option;
            multiplication = option;
            devide = option ;
        }
        void calculate(){
            if(add == '+'){
                cout << input_one + input_two << endl;
            }else if(substraction == '-'){
                cout << input_one - input_two << endl;
            }else if(multiplication == 'x'){
                cout << input_one * input_two << endl;
            }else if(devide == '/'){
                cout << input_one / input_two << endl;
            }else{
                cout << "ok" << endl;
            }
        }
};


int main(){
    float input1 , input2 ; char chose;
    cout << "number1 : ";cin >> input1;
    cout << "+,-,x,/ : ";cin >> chose;
    cout << "number2 : ";cin >> input2;
    Calculator cal1(input1,chose,input2);
    cal1.calculate();
}