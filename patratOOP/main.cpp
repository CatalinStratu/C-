#include <iostream>

using namespace std;

class Patrat{

private:
    float a;
    //Getter
    float Perimetru(){
        return (4*a);
    }
    float Aria(){
        return (a*a);
    }
public:
    Patrat(){
        a= 0.00;
    }
    // Setter
    void setA(float latura){
        a = latura;
    }
    //Afiseaza Aria si perimetrul
    void PrintPerimetru(){
        cout << "Perimetrul patratului este : "<< Perimetru()<< endl;
    }
    void PrintAria(){
        cout << "Aria patratului este : "<< Aria()<< endl;
    }
};
int main()
{
    Patrat p1;
    p1.setA(5);
    p1.PrintAria();
    p1.PrintPerimetru();
    return 0;
}
