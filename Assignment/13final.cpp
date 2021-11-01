

/*
We want to store the information of different vehicles. Create a class named Vehicle with two data member
 named mileage and price. Create its two subclasses 
*Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel
 or petrol). 
*Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil),
 wheel type(alloys or spokes) and fuel tank size(in inches) 
Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. Next, 
make two subclasses Bajaj and TVS, edeeach having a data member to store the make-type. 
Now, store and print the information of an Audi and a Ford car (i.e. model type, ownershi
p cost, warranty, seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a TVS bike. */

#include <iostream>
using namespace std;
  /* void inputdata(string temp)
{   string vehiclename = temp ;
    cout<<"Enter model type of " << vehiclename;
     cin>>audi.modeltype;
    cout<<"Enter Ownership Cost of "<< vehiclename;
     cin>>audi.ownership cost;
    cout<<"Enter Warranty of "<< vehiclename;
     cin>>audi.warranty;
    cout<<"Enter Seating Capacity of "<< vehiclename;
    cin>> audi.seatcapacity;
    cout<<"Enter Fuel Type in " << vehiclename;
    cin>>audi.fueltype;
    cout<<"Enter Mileage of "<< vehiclename;
    cin>>audi.mileage;
    cout<<"Enter Price of "<< vehiclename;
    cin>> audi.price;
}    */
class vehicle
{
public:
    int mileage, price;
    void getdata()

    {

        cout << "enter the mileage of the vehicle:\t";
        cin >> mileage;
        cout << "enter the price of the vehicle:\t";
        cin >> price;
    }
};
class car : public vehicle
{
public:
    int ownershipcost, warranty, seatcapacity;
    string fueltype;
    void getcar()

    {

        cout << "enter the ownership cost\n";
        cin >> ownershipcost;
        cout << "enter the warranty by years\n";
        cin >> warranty;
        cout << "enter the seating capacity\n";
        cin >> seatcapacity;
        cout << "enter the fule type(diesel or petrol\n";
        cin >> fueltype;
    }
    void display2()

    {

        cout << "\nownership cost:\t" << ownership_cost << "\n"
             << "\nwarranty:\t" << warranty;

        cout << "\nseating capacity:\t" << seating_capacity << "\nfule type:\t" << fuel_type;
    }

};
class audi : public car
{
public:
    string modeltype;
    void inputdata(string temp);
};
class ford : public car
{
public:
    string modeltype;
    void inputdata(string temp);
};
class bike : public vehicle
{
public:
    int cylinders, gears, tanksize;
    string coolingtype, wheeltype;
    void getbike()

    {

        cout << "enter the no of cylinders\n";
        cin >> cylinders;
        cout << "enter the no of gears\n";
        cin >> gears;
        cout << "enter the fuel tank size(in inches)\n";
        cin >> tanksize;
        cout << "enter the cooling type(air liquid or oil)\n";
        cin >> coolingtype;
        cout << "enter the wheel type(alloy or spokes)\n";
        cin >> wheeltype;
    }
    void display2()

    {

        cout << "\n no of cylinders:\t" << no_of_cylinder << "\nno of gears:\t" << no_of_gears;

        cout << "\nfuel tank size:\t" << fuel_tank_size << "\ncooling type:\t" << cooling_type;

        cout << "\nwheel type:\t" << wheel_type;
    }
};
};
class bajaj : public bike
{
public:
    string modeltype;
    void inputdata(string temp);
};
class tvs : public bike
{
public:
    string modeltype;
    void inputdata(string temp);
};
