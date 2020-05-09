#include<iostream>
#include"bus/bus.cpp"
#include"Plane/airplane.cpp"
#include"Movie/movie_ticket_cpp.cpp"
#include"Taxi/callout.cpp"
using namespace std;
int main(){
    cout<<"#####################################\n";
    cout<<"##                                 ##\n";
    cout<<"##                                 ##\n";
    cout<<"##                                 ##\n";
    cout<<"##                                 ##\n";
    cout<<"##                                 ##\n";
    cout<<"##                                 ##\n";
    cout<<"##                                 ##\n";
    cout<<"#####################################\n";
    cout<<"What do you want today?\n";
    cout<<"2 for bus Ticket\n";
    cout<<"3 for Airplane Ticket\n";
    cout<<"4 for Movie Ticket\n";
    cout<<"5 for Taxi\n";
    int x;
    cin>>x;
    switch (x)
    {
    case 2:
        Buss();
        break;

    case 3:
        ars();
        break;
    case 4:
        Movie();
    break;
    case 5:
        Taxi();
        break;




    default:
        break;
    }
    
}
}
