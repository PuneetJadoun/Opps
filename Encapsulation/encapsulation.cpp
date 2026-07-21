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
    
private:
    float *gpa;
    string gf;

    // ctor: Default ctor
    // Student()
    // {
    //     cout << "Student Default ctor called" << endl;
    // }
    // ctor: Parameterised ctor

 public:   
    Student(int id, int age, string name, int nos, float gpa, string gf)
    {
        cout << "Student Parameterised ctor called" << endl;

        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
        this->gf = gf;
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

private:
    void chatting()
    {
        cout << " chatting with gf " << endl;
    }    


public:   
    // dtor
    ~Student()
    {
        cout << "Student Default dtor called" << endl;
        delete this->gpa;
    }
};


int main(){
   

    

   // Dynamically allocation or student pointer

  // Student *A = new Student(1, 15, "Ranu", 6, 9.5);    // Defined at heap
  // cout << A->name << " " << *A->gpa << endl;

  // delete A; // dtor will be called here

  Student A(1, 15, "Ranu", 6, 9.5, "Rani");
  cout << A.name << endl;
  // cout << A.gf << endl; // NOT ACCESSIBLE: gf is private member of class Student

  return 0;
}