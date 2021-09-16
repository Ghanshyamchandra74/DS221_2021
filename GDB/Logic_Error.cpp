#include <iostream>
using namespace std;

float avg_floatE(float a, float b){
    return a + b / 2 ;
}

float avg_float(float a, float b){
    return (a + b )/ 2 ;
}

int main(){
    float a = 10.5;
    float b  = 10.5;
    cout << "Average float Values " << endl;
    float c  = avg_floatE(a,b);
    cout << c << endl;
    float d = avg_float(a,b);
    cout << d << endl;
    return 0;
}