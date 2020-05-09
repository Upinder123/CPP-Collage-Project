#include <iostream>
#include "menu.cpp"

using namespace std;

class Driver{
protected:
    string status,driverID1,driverID2,driverID3,driverID4,driverID5,driverID6,
    driver1,driver2,driver3,driver4,driver5,driver6,
    driveraddress1,driveraddress2,driveraddress3,driveraddress4,driveraddress5,driveraddress6,
    driverphonenumber1,driverphonenumber2,driverphonenumber3,driverphonenumber4,driverphonenumber5,driverphonenumber6,
    Licensetype1,Licensetype2,Licensetype3,Licensetype4,Licensetype5,Licensetype6,
    date1,date2,date3,date4,date5,date6;
    unsigned long km1,km2,km3,km4,km5,km6;

public:
    Driver(){driverID1="1234567A",driverID2="2345678B",driverID3="3456789B",driverID4="4567890C",driverID5="5678901D",driverID6="6789012E",
    driver1="Tom Daly",driver2="Anne O'Brien",driver3="James Twomey",driver4="Mary O'Neill",driver5="Brendan Brown",driver6="Vincent Coy",
    driveraddress1=" 14 Green St,Cork",driveraddress2=" Beach View, Kinsale",driveraddress3=" 14, French St,Cork",driveraddress4=" 23 Castle Road,Youghal",driveraddress5=" 98 Nuns Walk,Cork",driveraddress6=" Green Valley,Cobh",
    driverphonenumber1="087-6543210",driverphonenumber2="086-5432109",driverphonenumber3="085-4321098",driverphonenumber4="089-8765432",driverphonenumber5="083-2109876",driverphonenumber6="087-8901234",
    km1=23231,km2=11980,km3=18414,km4=12669,km5=23864,km6=34196,
    Licensetype1="B",Licensetype2="D",Licensetype3="D1",Licensetype4="B",Licensetype5="D",Licensetype6="D1",
    date1="12/08/2008",date2="09/12/2011",date3="14/11/2010",date4="11/02/2014",date5="01/04/2007",date6="03/04/1998";};
   void printalldrivers();

};
class Vehicle{
protected:
    string vehicletype1,vehicletype2,vehicletype3,vehicletype4,vehicletype5,vehicletype6,vehicletype7,vehicletype8,vehicletype9,vehicletype10,vehicletype11,
    regnum1,regnum2,regnum3,regnum4,regnum5,regnum6,regnum7,regnum8,regnum9,regnum10,regnum11,
    capacity1,capacity2,capacity3,capacity4,capacity5,capacity6,capacity7,capacity8,capacity9,capacity10,capacity11,
    make1,make2,make3,make4,make5,make6,make7,make8,make9,make10,make11,
    model1,model2,model3,model4,model5,model6,model7,model8,model9,model10,model11;
    unsigned long kmdriven1,kmdriven2,kmdriven3,kmdriven4,kmdriven5,kmdriven6,kmdriven7,kmdriven8,kmdriven9,kmdriven10,kmdriven11;
    char wheelchair1,wheelchair2,wheelchair3,wheelchair4,wheelchair5,wheelchair6,wheelchair7,wheelchair8,wheelchair9,wheelchair10,wheelchair11;
public:
   Vehicle(){vehicletype1 = "Taxi", vehicletype2 = "Taxi", vehicletype3 = "Taxi", vehicletype4 = "Taxi", vehicletype5 = "Taxi", vehicletype6 = "Taxi", vehicletype7 = "Bus", vehicletype8= "Bus", vehicletype9= "Minibus", vehicletype10= "Minibus", vehicletype11= "Minibus",
    regnum1 = "12 C 4956", regnum2 = "14 C 89365", regnum3 = "15 C 46046", regnum4 = "14 C 38492", regnum5 = "10 C 99393", regnum6 = "15 C 2379", regnum7 = "10 C 37209", regnum8 = "11 C 882", regnum9 = "14 C 23908", regnum10  ="10 C 831", regnum11 = "13 C 82677",
    kmdriven1 = 65172, kmdriven2 = 33892, kmdriven3 = 23897, kmdriven4 = 29418, kmdriven5 = 89678, kmdriven6 = 12812, kmdriven7 = 28786, kmdriven8 = 68893, kmdriven9 = 18827, kmdriven10 = 32986, kmdriven11 = 18567,
    capacity1 = "4", capacity2 = "4", capacity3 = "4", capacity4 = "4", capacity5 ="4", capacity6 = "4", capacity7 = "48", capacity8 = "48", capacity9 = "16", capacity10 = "16", capacity11 = "20",
    make1 = "Hyundai", make2 = "Ford", make3 = "VW", make4 = "Nissan", make5 = "Skoda", make6 = "Seat", make7 = "Ace", make8 = "Daimler", make9 = "Ford", make10 = "Fiat", make11 = "Mercedes-Benz",
    model1 = "i30 Tourer", model2 = "Mondeo", model3 = "Passat", model4 = "Primera", model5 = "Octavia", model6 = "Toledo", model7 = "Cougar", model8 = "Fleetline", model9 = "Transit", model10 = "Ducato",model11= "Vario",
    wheelchair1 = 'Y', wheelchair2 = 'Y', wheelchair3 = 'Y', wheelchair4 = 'Y', wheelchair5 = 'Y', wheelchair6 = 'Y', wheelchair7 = 'Y', wheelchair8 = 'N', wheelchair9 = 'Y', wheelchair10 = 'Y', wheelchair11 = 'N';};
   void allvehicle();
};
class Customer{
protected :
    string phonenumber,custname,destination,location;
   unsigned short noofpeople,kmtravel;
   char wheelchairaccess;
public:
    void booking();
};
class Fare:public Customer,public Driver,public Vehicle{
protected :
    unsigned short fareID=1,calloutcharge,totalcost;
public:
    Fare(){calloutcharge=5;};
    void calccost(){totalcost=6.50*kmtravel+calloutcharge;};
    void printjourney();
    void assigndriver();

};

Menu CalloutMenu;
unsigned short nextavailable = 0;

int Taxi (){

    Customer custom;
    Driver details;
    Vehicle service;
    Fare call;
    unsigned short choice;

    do{
        choice = CalloutMenu.printAndGetChoice();
        switch (choice){

            case 1 :custom.booking();
            break;

       case 2 :service.allvehicle();
           break;
       case 3 :details.printalldrivers();
          break;};
//            }
//    case 4 :{
//            unsigned short eventToDelete;
//            cout<<"\nEnter Event Number you want to delete ";
//            cin>>eventToDelete;
//            events[eventToDelete - 1].deleteevent();
//            };
//        };
//for (unsigned short i = 0; i < nextavailable; i++)
//   dispa.printjourney();
}
while(choice !=5);

return 0;
}

void Driver::printalldrivers(){
cout<<setfill (' ') << setiosflags (ios::right) <<setw (16)<<"ID Number"<<setw (14)<<"Name"<<setw (16)<<"Address"<<setw (20)<<"Phone Number"<<setw(16)<<"Kilometers"<<setw(16)<<"Start Date"<<setw(16)<<"License Type \n"
    <<setw (16)<<driverID1 <<setw (16) <<driver1 <<setw (20) <<driveraddress1 <<setw (16) <<driverphonenumber1 <<setw (16) <<km1
    <<setw (15) <<date1 <<setw (8) <<Licensetype1<<"\n"
    <<setw (16)<<driverID2 <<setw (16) <<driver2 <<setw (20) <<driveraddress2 <<setw (16) <<driverphonenumber2 <<setw (16) <<km2
    <<setw (15) <<date2 <<setw (8) <<Licensetype2<<"\n"
    <<setw (16)<<driverID3 <<setw (16) <<driver3<<setw (20) <<driveraddress3 <<setw (16) <<driverphonenumber3 <<setw (16) <<km3
    <<setw (15) <<date3 <<setw (8) <<Licensetype3<<"\n"
    <<setw (16)<<driverID4 <<setw (16) <<driver4 <<setw (20) <<driveraddress4 <<setw (12) <<driverphonenumber4 <<setw (16) <<km4
    <<setw (15) <<date4 <<setw (8) <<Licensetype4<<"\n"
    <<setw (16)<<driverID5 <<setw (16) <<driver5 <<setw (20) <<driveraddress5 <<setw (16) <<driverphonenumber5 <<setw (16) <<km5
    <<setw (15) <<date5 <<setw (8) <<Licensetype5<<"\n"
    <<setw (16)<<driverID6 <<setw (16) <<driver6 <<setw (20) <<driveraddress6 <<setw (16) <<driverphonenumber6 <<setw (16) <<km6
    <<setw (15) <<date6 <<setw (8) <<Licensetype6<<"\n";
}
void Vehicle::allvehicle(){
cout <<setfill (' ') << setiosflags (ios::right)<<setw(16) << "VehicleType" <<setw(8)<< "RegNum" <<setw(16)<< "KM Driven" <<setw(10)<< "Capacity" <<setw(10)<< "Make"<<setw(10)<< "Model" <<setw(14)<< "WheelChair"<<"\n"
 <<setw(10)<< vehicletype1 <<setw(16) << regnum1 << setw(10) << kmdriven1 << setw(10) << capacity1 << setw(14) << make1 << setw(10) << model1 << setw(10) << wheelchair1<<"\n"
 <<setw(10)<< vehicletype2 <<setw(16) << regnum2 << setw(10) << kmdriven2 << setw(10) << capacity2 << setw(14) << make2 << setw(10) << model2 << setw(10) << wheelchair2<<"\n"
 <<setw(10)<< vehicletype3 <<setw(16) << regnum3 << setw(10) << kmdriven3 << setw(10) << capacity3 << setw(14) << make3 << setw(10) << model3 << setw(10) << wheelchair3<<"\n"
 <<setw(10)<< vehicletype4 <<setw(16) << regnum4 << setw(10) << kmdriven4 << setw(10) << capacity4 << setw(14) << make4 << setw(10) << model4 << setw(10) << wheelchair4<<"\n"
 <<setw(10)<< vehicletype5 <<setw(16) << regnum5 << setw(10) << kmdriven5 << setw(10) << capacity5 << setw(14) << make5 << setw(10) << model5 << setw(10) << wheelchair5<<"\n"
 <<setw(10)<< vehicletype6 <<setw(16) << regnum6 << setw(10) << kmdriven6 << setw(10) << capacity6 << setw(14) << make6 << setw(10) << model6 << setw(10) << wheelchair6<<"\n"
 <<setw(10)<< vehicletype7 <<setw(16) << regnum7 << setw(10) << kmdriven7 << setw(10) << capacity7 << setw(14) << make7 << setw(10) << model7 << setw(10) << wheelchair7<<"\n"
 <<setw(10)<< vehicletype8 <<setw(16) << regnum8 << setw(10) << kmdriven8 << setw(10) << capacity8 << setw(14) << make8 << setw(10) << model8 << setw(10) << wheelchair8<<"\n"
 <<setw(10)<< vehicletype9 <<setw(16) << regnum9 << setw(10) << kmdriven9 << setw(10) << capacity9 << setw(14) << make9 << setw(10) << model9 << setw(10) << wheelchair9<<"\n"
 <<setw(10)<< vehicletype10 <<setw(16)<< regnum10<< setw(10) << kmdriven10 << setw(10) << capacity10 << setw(14) << make10 << setw(10) << model10 << setw(10) << wheelchair10<<"\n"
 <<setw(10)<< vehicletype11 <<setw(16)<< regnum11<< setw(10) << kmdriven11 << setw(10) << capacity11 << setw(16) << make11 << setw(10) << model11 << setw(10) << wheelchair11;
}
void Customer::booking(){
cout<<"Your Name : ";
cin>>custname;
cout<<"Your Phone Number : ";
cin>>phonenumber;
cout<<"Where would you like to be picked : ";
cin>>location;
cout<<"Your Destination : ";
cin>>destination;
cout<<"Enter Journey Distance : ";
cin>>kmtravel;
do{
    cout<<"Number of people travelling : ";
cin>>noofpeople;
if (noofpeople>48){
    cout<<"Invalid Please enter number from 1-48\n";
}
}while (noofpeople=0);
cout<<"Would you Like to have Wheelchair Access : ";
cin>>wheelchairaccess;
}
