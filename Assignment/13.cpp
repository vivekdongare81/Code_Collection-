#include <iostream>
 using namespace std;
 class vehicle
{

protected:
    int mileage, price;

public:
    void getdata()

    {

        cout << "Enter the mileage of the vehicle:\t";
        cin >> mileage;
        cout << "Enter the price of the vehicle:\t";
        cin >> price;
    }

    void display1()

    {

        cout << "mileage:\t" << mileage << "\nprice:\t" << price << endl;
    }
};

class car : public vehicle

{

protected:
    int ownership_cost, warranty, seating_capacity;
    char fuel_type[20];

public:
    void getcar()

    {

        cout << "enter the ownership cost\n";
        cin >> ownership_cost;
        cout << "enter the warranty by years\n";
        cin >> warranty;
        cout << "enter the seating capacity\n";
        cin >> seating_capacity;
        cout << "enter the fule type(diesel or petrol\n";
        cin >> fuel_type;
    }

    void display2()

    {

        cout << "\nownership cost:\t" << ownership_cost << "\n"
             << "\nwarranty:\t" << warranty;

        cout << "\nseating capacity:\t" << seating_capacity << "\nfule type:\t" << fuel_type;
    }
};

class bike : public vehicle

{

private:
    int no_of_cylinder, no_of_gears, fuel_tank_size;
    char cooling_type[20], wheel_type[20];

public:
    void getbike()

    {

        cout << "enter the no of cylinders\n";
        cin >> no_of_cylinder;
        cout << "enter the no of gears\n";
        cin >> no_of_gears;
        cout << "enter the fuel tank size(in inches)\n";
        cin >> fuel_tank_size;
        cout << "enter the cooling type(air liquid or oil)\n";
        cin >> cooling_type;
        cout << "enter the wheel type(alloy or spokes)\n";
        cin >> wheel_type;
    }

    void display2()

    {

        cout << "\n no of cylinders:\t" << no_of_cylinder << "\nno of gears:\t" << no_of_gears;

        cout << "\nfuel tank size:\t" << fuel_tank_size << "\ncooling type:\t" << cooling_type;

        cout << "\nwheel type:\t" << wheel_type;
    }
};

class audi : public car

{

protected:
    char model_type[20];

public:
    void get_model()

    {

        cout << "enter the the model type(A6,A8 L,Q8)\n";
        cin >> model_type;
    }

    void display3()

    {

        cout << "\nmodel type:\t" << model_type;
    }

    void fun()

    {

        get_model();

        getcar();
        getdata();
        display1();

        display2();

        display3();
    }
};

class ford : public car

{

protected:
    char model_type[20];

public:
    void get_model()

    {

        cout << "enter the the model type(endeavour,figo,aspire)\n";
        cin >> model_type;
    }

    void display3()

    {

        cout << "\nmodel type:\t" << model_type;
    }

    void fun()

    {

        get_model();
        getcar();
        getdata();

        display1();

        display2();
        display3();
    }
};

class bajaj : public bike

{

protected:
    char make_type[20];

public:
    void get_make()

    {

        cout << "enter the the make type(chetak,dominar,pulsar)\n";
        cin >> make_type;
    }

    void display3()

    {

        cout << "\nmake type:\t" << make_type;
    }

    void fun()

    {

        get_make();
        getbike();
        getdata();

        display1();
        display2();
        display3();
    }
};

class tvs : public bike

{

private:
    char make_type[20];

public:
    void get_make()

    {

        cout << "enter the the make type(chetak,dominar,pulsar)\n";
        cin >> make_type;
    }

    void display3()

    {

        cout << "\nmake type:\t" << make_type;
    }

    void fun()

    {

        get_make();

        getbike();
        getdata();
        display1();
        display2();
        display3();
    }
};

int main()

{

    tvs t;
    bajaj b;
    audi a;
    ford f;
    int c, d;
    cout << "enter the choice\n1:car\n2:bike\n3:Exit(0)\n";
    cin >> c;
    if (c == 1)

    {

        cout << "enter the choice\n1:Audi\n2:Ford\n3:Exit(0)\n";

        cin >> d;
    }

    else

    {

        cout << "enter the choice\n1:Bajaj\n2:Tvs\n3:Exit(0)\n";

        cin >> d;
    }

    switch (c)
    {

    case 1:

    {

        switch (d)

        {

        case 1:

            a.fun();
            break;
        case 2:

            f.fun();
            break;
        case 3:

            exit(0);
        }
    }

    break;

    case 2:

    {

        switch (d)

        {

        case 1:

            b.fun();
            break;
        case 2:
            t.fun();
            break;
        case 3:
            exit(0);
        default:
            cout << "enter the correct option\n";
        }
    }

    case 3:

        exit(0);
    default:
        cout << "enter the correct option\n";
        return 0 ;
    }
}
