#include <iostream>

using namespace std;

class Fibonacci{

private:
    int n;
public:
    //Setter
    void Set( float number){
        n = number;
    }
    // Get Fibonnaci number
    int GetFibo(){
        return n;
    }
    // Get Fibonacci
    void Print(){
        int a,b,c,i;
        a=b=1;
        cout << a<< ",  "<<b << ",";
        for(i=3;i<n;i++){
            c= b+a;
            cout<<c << ", ";
            a=b;
            b=c;
        }
    }

};

int main()
{
    Fibonacci obj;
    obj.Set(10);
    if(obj.GetFibo()== 1){
        cout<< "1";
    } else if(obj.GetFibo()== 2){
        cout<< 1 << ", " << 1;
    }else{
        obj.Print();
    }
    return 0;
}
