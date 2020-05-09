#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;



void createPlaneSection(vector<bool>& psection, int n);
void CreatePlane(vector<bool>& fc, vector<bool>& ec);
void displaySeatingSectionChart(vector<bool> v);
void displayPlaneChart(vector<bool> fc, vector<bool> ec);
char translateSeatStatus(bool b);
void displayBookingMenu();
int getMenuChoice();
int getEmptySeat(vector<bool> v);
int reserveSeat(vector<bool>& v, int seat);
int bookseat(vector<bool>& fc, vector<bool>& ec, int choice);
bool bookseat1(vector<bool>& fc, vector<bool>& ec, int& actualSeat, int choice);
void printBoardingPass(vector<bool> fc, vector<bool> ec,int choice, int seat);
void ars();
bool isSeatEmpty(vector<bool> v, int s);