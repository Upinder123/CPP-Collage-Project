
#include"bus.cpp"
int main()
 {
 
	
	

	int w,g=1;
 
while(g){
 cout<<"*****************************************************"<<endl;
 cout<<"******* *******"<<endl;
 cout<<"* The Administrator *"<<endl;
 cout<<"* DoubleR Transport Service *"<<endl;
 cout<<"******* *******"<<endl;
 cout<<"*****************************************************"<<endl;

 cout<<"\t\t\t 1.Install\n\t\t\t 2.Show\n\t\t\t 3.Book \n\t\t\t 4.Exit";
 cout<<"\n\t\t\t Enter your choice:-> ";
 cin>>w;
 switch(w){
 case 1:
	b[p].install();

 break;
 case 2:
	 b[0].show();
 break;
 case 3:
	b[p].book();
 
 break;
 case 4:
	 {
g=0;

cout<<endl<<"Total Sell:"<<allsell<<endl<<"******Thank You******"<<endl;
break;
	 }
 }
}
return 0;
}