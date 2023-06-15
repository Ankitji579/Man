#include <iostream>
using namespace std;
class Complex{
    private:
    float real;
    float imag;
    public:
    Complex():
        real(0), imag(0)
        
    { }
    void input (){
        cout<<"Enter any thing ";
        cin>> real;
        cin>> imag;
    }
    Complex operator - (Complex C2){
        Complex temp;
        temp.real = real - C2.real;
        temp.imag = imag - C2.imag;
    }
    void output(){
        if(imag<0)
            cout <<real<<imag<<"i";
        
        else 
            cout<<"This is the real part:"<<real<<"+"<<imag<<"i";
    }
};
int main(){
    Complex C1, C2, result;
    cout <<"This is fucking number";
    C1.input();
    cout<<"Next";
    C2.input();
    result = C1-C2;
    result.output();
    return 0; 
}