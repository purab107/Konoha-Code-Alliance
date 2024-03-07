#include<iostream>
using namespace std;

int shape,a,b,c;
char ch;

int menu()
{
    cout<<"Enter shape:"<<endl;
    cout<<"1.Rectangle"<<endl<<"2.Circle"<<endl<<"3.Square"<<endl<<"4.Cube"<<endl<<"5.Cuboid"<<endl<<"6.Sphere"<<endl<<"7.Cylinder"<<endl;
    cin>>shape;
}

int main()
{

    
    do{

    menu();
    switch(shape)
    {
        case 1:
            cout<<"Enter length of rectangle:";
            cin>>a;
    
            cout<<"Enter breadth of rectangle:";
            cin>>b;

            cout<<"Area of rectangle is "<<a*b<<endl;
            break;

        case 2:
            cout<<"Enter radius:";
            cin>>a;

            cout<<"Area of circle is "<<3.14*a*a<<endl;
            break;

            case 3:
            cout<<"Enter length of side:";
            cin>>a;

            cout<<"Area of square is "<<a*a<<endl;
            break;

        case 4:
            cout<<"Enter length of side:";
            cin>>a;

            cout<<"Area of cube is "<<6*a*a<<endl;
            break;

        case 5:
            cout<<"Enter length:";
            cin>>a;

            cout<<"Enter breadth:";
            cin>>b;

            cout<<"Enter height:";
            cin>>c;

            cout<<"Area of cuboid is "<<2*(a*c+a*b+b*c)<<endl;
            break;

        case 6:
            cout<<"Enter radius:";
            cin>>a;

            cout<<"Area of sphere is "<<4*3.14*a*a<<endl;
            break;

        case 7:
            cout<<"Enter radius:";
            cin>>a;

            cout<<"Enter height:";
            cin>>b;

            cout<<"Area of cylinder is "<<(2*3.14*a)*(b+a)<<endl;


        default:
            cout<<"choose from given shapes"<<endl;
            break;
    }

    cout<<"do you want to continue:";
    cin>>ch;
    }while(ch=='y'||ch=='Y');

    return 0;

}