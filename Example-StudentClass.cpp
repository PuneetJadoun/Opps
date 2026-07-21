#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;
    float *gpa;

    // ctor: Default ctor
    // Student()
    // {
    //     cout << "Student Default ctor called" << endl;
    // }
    // ctor: Parameterised ctor
    Student(int id, int age, string name, int nos, float gpa)
    {
        cout << "Student Parameterised ctor called" << endl;

        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
    }

    // copy ctor
    Student(const Student &srcObj) // srcObj => A
    {
        cout << "Student copy ctor called" << endl;

        this->id = srcObj.id;
        this->age = srcObj.age;
        this->name = srcObj.name;
        this->nos = srcObj.nos;
    }

    // Behaviour / Methods/ Functions
    void study()
    {
        cout << this->name << " Studying" << endl;
    }

    void sleep()
    {
        cout << this->name << " Sleeping" << endl;
    }

    void bunk()
    {
        cout << this->name << " Bunking" << endl;
    }

    // dtor
    ~Student()
    {
        cout << "Student Default dtor called" << endl;
        delete this->gpa;
    }
};


int main(){
   // Student A;

    // A.id = 1;
    // A.age = 20;    
    // A.name = "John";
    // A.nos = 5;


    // A.study();

    // Student B;
    // B.id = 2;
    // B.age = 15;
    // B.name = "Rahul";
    // B.nos = 5;

    // B.bunk();

    // Student A(1, 15, "Ranu", 6);    // Defined at stack
    // Student B(1, 13, "Rahul", 3);
   // Student C(1, 11, "Rena", 4);
   // Student D(1, 43, "Ronaldo", 5);

    
    // copy ctor
   // Student C = A; // Copy ctor will be called here
   // Student C(A); // Copy ctor will be called here

   //  cout << C.name << " " << A.name << endl;


   // Dynamically allocation or student pointer

   Student *A = new Student(1, 15, "Ranu", 6, 9.5);    // Defined at heap
   cout << A->name << " " << *A->gpa << endl;

   delete A; // dtor will be called here


   return 0;
}