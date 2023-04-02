#include <iostream>
using namespace std;

class operation{
    int a,b,add,sub,mul;
    float div;

    public:
    void get();
    void sum();
    void difference();
    void product();
    void division();

};

inline void operation ::get(){
    cout << "val 1 :";
    cin>>a;
    cout<<"val2 : ";
    cin>>b;

}
inline void operation ::sum(){
    add = a+b ;
    cout<<"a+b : "<<add<<"\n";

    
}
inline void operation ::difference(){
    sub = a-b;
    cout<<"a-b : "<<sub<<"\n";
 
    
}
inline void operation ::product(){
    mul = a*b;
    cout<<"a*b : "<<mul<<"\n";
    
}
inline void operation ::division(){
    div = a/b;
    cout<<"a/b : "<<div<<"\n";

    
}

int main(){
    operation s;
    s.get();
    s.sum();
    s.difference();
    s.division();
    s.product();
    return 0;
}