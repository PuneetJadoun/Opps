// #include<bits/stdc++.h>
// using namespace std;


// class Vehicle
// {
// public:             // by default all the members of class are private
//     string name;
//     string model;
//     int noOfTyres;

//     Vehicle(string _name, string _model, int _noOfTyres)
//     {
//         cout<<"I m inside vehicle ctor"<<endl;
//         this->name = _name;
//         this->model = _model;
//         this->noOfTyres = _noOfTyres;
//     }

// public:
//     void start_engine()
//     {
//         cout << "Engine is starting " << name << " " << model << endl;
//     }

//     void stop_engine()
//     {
//         cout << "Engine is stopping " << name << " " << model << endl;
//     }
// };

// class Car : public Vehicle
// {
// public:
//     int noOfDoors;
//     string transmissionType;

//     Car(string _name,
//         string _model,
//         int _noOfTyres,
//         int _noOfDoors,
//         string _transmissionType)
//         : Vehicle(_name, _model, _noOfTyres)
//     {
//         cout<<"I m inside car ctor"<<endl;
//         this->noOfDoors = _noOfDoors;
//         this->transmissionType = _transmissionType;
//     }

//     void startAC()
//     {
//         cout << "AC has started of " << name << endl;
//     }
// };

// int main(){
//     Car A("BMW", "X5", 4, 4, "Automatic");
//     return 0;
// }






#include<bits/stdc++.h>
using namespace std;


class Vehicle
{

private:
    string name;

public:             // by default all the members of class are private
    string model;
    int noOfTyres;

    Vehicle(string _name, string _model, int _noOfTyres)
    {
        cout<<"I m inside vehicle ctor"<<endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyres = _noOfTyres;
    }

public:
    string getName()
    {
        return this->name;
    }

    void start_engine()
    {
        cout << "Engine is starting " << name << " " << model << endl;
    }

    void stop_engine()
    {
        cout << "Engine is stopping " << name << " " << model << endl;
    }
};

class Car : public Vehicle
{
public:
    int noOfDoors;
    string transmissionType;

    Car(string _name,
        string _model,
        int _noOfTyres,
        int _noOfDoors,
        string _transmissionType)
        : Vehicle(_name, _model, _noOfTyres)
    {
        cout<<"I m inside car ctor"<<endl;
        this->noOfDoors = _noOfDoors;
        this->transmissionType = _transmissionType;
    }

    void startAC()
    {
        cout << "AC has started of " << getName()<< endl;
    }
};

int main(){
    Car A("BMW", "X5", 4, 4, "Automatic");
    return 0;
}





// llrly proctected can there then can acess inside child class but not outside the child class 
// all types of modes can be used in inheritance public, private, protected 
// types of inheritance
