#include <iostream> 
using namespace std;   
class base { 
public: 
    virtual void print() 
    { 
        cout << "print base class" << endl; 
    } 
    virtual void show() 
    { 
        cout << "show base class" << endl; 
    } 
};   
class derived : public base { 
public: 
    void print() 
    { 
        cout << "printing the class of terminator" << endl; 
    }   
 void show() 
    { 
        cout << "unleash it with the power of that" << endl; 
    } 
};   
int main() 
{ 
    base* bptr; 
    derived d; 
    bptr = &d; 
    bptr->print(); 
     
    bptr->show(); 
    return 0;
} 
