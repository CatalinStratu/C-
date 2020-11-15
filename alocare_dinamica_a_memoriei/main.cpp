#include <iostream>
#include <string>
#define MAX 10
using namespace std;

class Student{
private:
    char nume [30];
    char prenume [30];
    int nota;
public:
    // Pune student
    void putStudent();
    // arata student
    void getStudent();
};
void Student ::putStudent(void){
    cout << "Introduce nume student : "<<endl;
    cin>>nume;
    cout<< "\n"<<endl;
    cout<< "Introduce prenume"<< endl;
    cin>>prenume;
    cout<< "\n"<<endl;
    cout<< "Introduce nota"<< endl;
    cin>>nota;
}

void Student::getStudent(void){
    cout << "Nume:"<< nume << ",Prenume :" << prenume << ",Nota:" << nota << "\n";
}
int main()
{
    int n,i ;
    Student * stud;

    cout << "Introdu numarul de studenti : ";
    cin >> n;
    try
    {
         stud = new Student[n] ;
    }
    catch(const bad_alloc& e)
    {
        cout << "Error: " << e.what() << '\n';
    }

    for(i=0;i< n; i++){
        cout << "Introdu detalii despre student  " << i+1 << ":\n";
        stud[i].putStudent();
    }

    cout << "Studentii:\n";

    for(i=0;i< n; i++){
        stud[i].getStudent();
    }
    delete [] stud;
    return 0;
}
