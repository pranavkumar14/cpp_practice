#include<iostream>

using namespace std;
class HelloWorld{
    public:
    //Constructor
    HelloWorld(){
        cout<<"Constuctor is called"<<endl;
    }
    //Destructor
    ~HelloWorld(){
        cout<<"Destructor is called"<<endl;
    
    }
    //Member function
    void display(){
        cout<<"Hello World"<<endl;
    }
};
int main(){
    //Object created
    HelloWorld obj;
    obj.display();
    return 0;
}