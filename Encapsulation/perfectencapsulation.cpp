// all data members of class are private used to add extra security layer to the class. This is called perfect encapsulation.



#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    // Attributes
    int id;
    int age;
    string name;
    int nos;
    float *gpa;
    string gf;

    // ctor: Default ctor
    // Student()
    // {
    //     cout << "Student Default ctor called" << endl;
    // }
    // ctor: Parameterised ctor

 public:   
    void setGpa(float a)
    {
        // layer of authentication;
        *this->gpa = a;
    }

    float getGpa() const
    {
        return *this->gpa;
    }

    float getAge() const
    {
        return this->age;
    }
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
   
    Student A(1, 12, "Ranu", 5, 7.8, "Menu");

    cout << A.getGpa() << endl;
    A.setGpa(6.7);
    cout << A.getGpa() << endl;

    cout << A.getAge() << endl;
    // cout << A.gf << endl; // NOT ACCESSIBLE: gf is private member of class Student

  return 0;
}
