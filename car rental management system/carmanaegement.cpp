#include <iostream>
#include<stdlib.h>
#include<iomanip>
#include<iostream>
#include<fstream>

#define B_MAG   "\x1B[45m"
#define MAG   "\x1B[35m"
#define BLU   "\x1B[34m"
#define B_BLU   "\x1B[44m"
#define B_RED   "\x1B[41;1m"
#define RED   "\x1B[31;1m"
#define RE   "\x1B[31m"
#define B_CYAN   "\x1B[46m"
#define CYAN   "\x1B[36m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define RESET "\x1B[0m"
#define BOLD "\x1B[1m"

using namespace std;
char firstname[40];
char lastname[40];
long int contact;
int days;
float trent=0;
int tcar=0;

class car
{
    public:
    int n;
    char ch;
    
    static int cbaleno,cswift,calto,cfortuner,cscorpio,cinnova,cxuv700,cethios,cxuv300;
    
    void cust_details()
    {
        if(trent==0)
        {
            cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
            cout<<"\tPlease Provide the details:"<<"\n";
            cout<<"\tEnter first name:";
            cin>>firstname;
            cout<<"\n";
            cout<<"\tEnter last name:";
            cin>>lastname;
            cout<<"\n";
            cout<<"Enter contact no:";
            cin>>contact;
            cout<<"\n";
            cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
            cout<<"\n";
        }
    }
};
int car::cbaleno=1;
int car::cswift=2;
int car::calto=3;
int car::cxuv700=3;
int car::cscorpio=2;
int car::cxuv300=4;
int car::cfortuner=2;
int car::cethios=1;
int car::cinnova=3;

class maruti:public car
{
    public:
    void getdata()
    {
        std::cout<<left<<std::setw(60)<<"\t"YEL BOLD"------------------------------------------------------------------------------------"RESET<<"\n";
        std::cout<<left<<std::setw(16)<<"";
		//std::cout<<left<<std::setw(15)<<"";
		std::cout<<left<<std::setw(31)<<RED"BALENO"RESET;
		std::cout<<left<<std::setw(33)<<BLU BOLD"SWIFT"RESET;
		std::cout<<left<<std::setw(33)<<MAG BOLD"ALTO"RESET;
		cout<<"\n";
		std::cout<<left<<std::setw(20)<<"";
		std::cout<<left<<std::setw(20)<<CYAN"MODEL NO"RESET;
		std::cout<<left<<std::setw(20)<<"5687";
		std::cout<<left<<std::setw(20)<<"7980";
		std::cout<<left<<std::setw(20)<<"3434";
		cout<<"\n";
		std::cout<<left<<std::setw(20)<<"";
		std::cout<<left<<std::setw(20)<<CYAN"MILEAGE"RESET;
		std::cout<<left<<std::setw(20)<<"15";
		std::cout<<left<<std::setw(20)<<"18";
		std::cout<<left<<std::setw(20)<<"19";
		cout<<"\n";
		std::cout<<left<<std::setw(20)<<"";
		std::cout<<left<<std::setw(20)<<CYAN"COLOR"RESET;
		std::cout<<left<<std::setw(20)<<"Blue";
		std::cout<<left<<std::setw(20)<<"Red";
		std::cout<<left<<std::setw(20)<<"Grey";
		cout<<"\n";
		std::cout<<left<<std::setw(20)<<"";
		std::cout<<left<<std::setw(20)<<CYAN"COST"RESET;
		std::cout<<left<<std::setw(20)<<"1800/day";
		std::cout<<left<<std::setw(20)<<"1500/day";
		std::cout<<left<<std::setw(20)<<"1000/day";
		cout<<"\n";
    }
    void details()
    {
        std::cout<<std::setw(60)<<"\t"GRN"--------------------------DETAILS OF MARUTI CARS--------------------------"RESET"\n\n";
        std::cout<<left<<std::setw(20)<<"";
        cout<<"___________________________\n";
        std::cout<<left<<std::setw(20)<<"";
        cout<<"___________________________\n\n\n";
        
        for(int i=1;i<=cbaleno;i++)
		{
			std::cout<<left<<std::setw(20)<<"";
			cout<<"|"B_BLU BOLD"BALENO"RESET"\n\n";
		}
		for(int i=1;i<=cswift;i++)
		{
			std::cout<<left<<std::setw(20)<<"";
			cout<<"|"B_RED"SWIFT"RESET"\n\n";
		}
		for(int i=1;i<=calto;i++)
		{
			std::cout<<left<<std::setw(20)<<"";
			cout<<"|"B_MAG BOLD"ALTO"RESET"\n\n";
		}
		std::cout<<left<<std::setw(20)<<"";
		cout<<"___________________________\n";
		std::cout<<left<<std::setw(20)<<"";
		cout<<"___________________________\n";

		cout<<"\n";
    }
    void rentcar()
    {
        cout<<"\tDo you want to rent a "CYAN BOLD"Maruti"RESET" car? If yes press 'Y' or press 'N' : ";
			cin>>ch;
			if(ch=='N'||ch=='n')
			{
				return;
			}
			else
			{
				cout<<"\n";
				cust_details();
				cout<<"\tEnter \n\t1.To rent Baleno\n\t2.To rent Swift \n\t3.To rent Alto \n\t";
				cin>>n;
				cout<<"\tEnter the number of days : ";
				cin>>days;
				cout<<"\n";
				switch(n)
				{
					case 1: if(cbaleno==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=1;
							cout<<"\t"CYAN BOLD "Total amount = "RESET<<1800*days<<endl<<endl;
							trent+=1800*days;
							cbaleno--;
						}
						break;
					case 2: if(cswift==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=2;
							cout<<"\t"CYAN BOLD"Total amount = "RESET<<1500*days<<endl<<endl;
							trent+=1500*days;
							cswift--;
						}
						break;
					case 3: if(calto==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=3;
							cout<<"\t"CYAN BOLD"Total amount = "RESET<<1000*days<<endl<<endl;
							trent+=1000*days;
							calto--;
						}
						break;
					default: cout<<"\t"RED"Enter a valid input "RESET"\n";
						 break;
				}
			}
		}

};
class mahindra:public car
{
    public:
    void getdata()
     {
      std::cout<<left<<std::setw(20)<<"\t"YEL BOLD"-------------------------------------------------------------------------------------"RESET;
			cout<<"\n";
			std::cout<<left<<std::setw(16)<<"";
			std::cout<<left<<std::setw(15)<<"";
			std::cout<<left<<std::setw(31)<<B_BLU"Xuv700"RESET;
			std::cout<<left<<std::setw(33)<<RED"SCORPIO"RESET;
			std::cout<<left<<std::setw(23)<<BLU"XUV300"RESET;
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"MODEL NO"RESET;
			std::cout<<left<<std::setw(20)<<"5687";
			std::cout<<left<<std::setw(20)<<"7980";
			std::cout<<left<<std::setw(20)<<"3434";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"MILEAGE"RESET;
			std::cout<<left<<std::setw(20)<<"10";
			std::cout<<left<<std::setw(20)<<"14";
			std::cout<<left<<std::setw(20)<<"15";
			cout<<"\n";
    }
    void details()
    {
        std::cout<<std::setw(60)<<"\t"GRN"--------------------------DETAILS OF MAHINDRA CARS--------------------------"RESET"\n\n";
        std::cout<<left<<std::setw(20)<<"";
        cout<<"___________________________\n";
        std::cout<<left<<std::setw(20)<<"";
        cout<<"___________________________\n\n\n";
        
        for(int i=1;i<=cxuv700;i++)
		{
			std::cout<<left<<std::setw(20)<<"";
			cout<<"|"B_BLU BOLD"XUV700"RESET"\n\n";
		}
		for(int i=1;i<=cscorpio;i++)
		{
			std::cout<<left<<std::setw(20)<<"";
			cout<<"|"B_RED"SCORPIO"RESET"\n\n";
		}
		for(int i=1;i<=cxuv300;i++)
		{
			std::cout<<left<<std::setw(20)<<"";
			cout<<"|"B_MAG BOLD"XUV300"RESET"\n\n";
		}
		std::cout<<left<<std::setw(20)<<"";
		cout<<"___________________________\n";
		std::cout<<left<<std::setw(20)<<"";
		cout<<"___________________________\n";

		cout<<"\n";
    }
    void rentcar()
    {
        cout<<"\tDo you want to rent a "CYAN BOLD"mahindra"RESET" car? If yes press 'Y' or press 'N' : ";
			cin>>ch;
			if(ch=='N'||ch=='n')
			{
				return;
			}
			else
			{
				cout<<"\n";
				cust_details();
				cout<<"\tEnter \n\t1.To rent XUV700\n\t2.To rent SCORPIO \n\t3.To rent xuv300 \n\t";
				cin>>n;
				cout<<"\tEnter the number of days : ";
				cin>>days;
				cout<<"\n";
				switch(n)
				{
					case 1: if(cxuv700==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=1;
							cout<<"\t"CYAN BOLD "Total amount = "RESET<<3500*days<<endl<<endl;
							trent+=3500*days;
							cxuv700--;
						}
						break;
					case 2: if(cscorpio==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=2;
							cout<<"\t"CYAN BOLD"Total amount = "RESET<<3000*days<<endl<<endl;
							trent+=3000*days;
							cscorpio--;
						}
						break;
					case 3: if(cxuv300==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=3;
							cout<<"\t"CYAN BOLD"Total amount = "RESET<<2500*days<<endl<<endl;
							trent+=2500*days;
							cxuv300--;
						}
						break;
					default: cout<<"\t"RED"Enter a valid input "RESET"\n";
						 break;
				}
			}
		}

 };
 
 class toyota:public car
 {
     public:
     void getdata()
     {
        std::cout<<left<<std::setw(20)<<"\t"YEL BOLD"-------------------------------------------------------------------------------------"RESET;
			cout<<"\n";
			std::cout<<left<<std::setw(16)<<"";
			std::cout<<left<<std::setw(15)<<"";
			std::cout<<left<<std::setw(31)<<B_RED"FORTUNER"RESET;
			std::cout<<left<<std::setw(33)<<RED"ETHIOS"RESET;
			std::cout<<left<<std::setw(23)<<BLU"INNOVA"RESET;
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"MODEL NO"RESET;
			std::cout<<left<<std::setw(20)<<"5687";
			std::cout<<left<<std::setw(20)<<"7980";
			std::cout<<left<<std::setw(20)<<"3434";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"MILEAGE"RESET;
			std::cout<<left<<std::setw(20)<<"10";
			std::cout<<left<<std::setw(20)<<"16";
			std::cout<<left<<std::setw(20)<<"10";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"COLOR"RESET;
			std::cout<<left<<std::setw(20)<<"White";
			std::cout<<left<<std::setw(20)<<"Silver";
			std::cout<<left<<std::setw(20)<<"Black";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<CYAN"COST"RESET;
			std::cout<<left<<std::setw(20)<<"4000/day";
			std::cout<<left<<std::setw(20)<<"3000/day";
			std::cout<<left<<std::setw(20)<<"3800/day";
     }
    void details()
    {
        std::cout<<std::setw(60)<<"\t"GRN"--------------------------DETAILS OF TOYOTA CARS--------------------------"RESET"\n\n";
        std::cout<<left<<std::setw(20)<<"";
        cout<<"___________________________\n";
        std::cout<<left<<std::setw(20)<<"";
        cout<<"___________________________\n\n\n";
        
        for(int i=1;i<=cfortuner;i++)
		{
			std::cout<<left<<std::setw(20)<<"";
			cout<<"|"B_BLU BOLD"FORTUNER"RESET"\n\n";
		}
		for(int i=1;i<=cethios;i++)
		{
			std::cout<<left<<std::setw(20)<<"";
			cout<<"|"B_RED"ETHIOS"RESET"\n\n";
		}
		for(int i=1;i<=cinnova;i++)
		{
			std::cout<<left<<std::setw(20)<<"";
			cout<<"|"B_MAG BOLD"INNOVA"RESET"\n\n";
		}
		std::cout<<left<<std::setw(20)<<"";
		cout<<"___________________________\n";
		std::cout<<left<<std::setw(20)<<"";
		cout<<"___________________________\n";

		cout<<"\n";
    }
    void rentcar()
    {
         cout<<"\tDo you want to rent a "CYAN BOLD"toyota"RESET" car? If yes press 'Y' or press 'N' : ";
			cin>>ch;
			if(ch=='N'||ch=='n')
			{
				return;
			}
			else
			{
				cout<<"\n";
				cust_details();
				cout<<"\tEnter \n\t1.To rent FORTUNER\n\t2.To rent ETHIOS \n\t3.To rent INNOVA \n\t";
				cin>>n;
				cout<<"\tEnter the number of days : ";
				cin>>days;
				cout<<"\n";
				switch(n)
				{
					case 1: if(cfortuner==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=1;
							cout<<"\t"CYAN BOLD "Total amount = "RESET<<4000*days<<endl<<endl;
							trent+=4000*days;
							cfortuner--;
						}
						break;
					case 2: if(cethios==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=2;
							cout<<"\t"CYAN BOLD"Total amount = "RESET<<3500*days<<endl<<endl;
							trent+=3500*days;
							cethios--;
						}
						break;
					case 3: if(cinnova==0)
						{
							cout<<"\t"RED"Sorry no cars available in this category, Pick another car"RESET"\n";
						}
						else
						{	tcar=3;
							cout<<"\t"CYAN BOLD"Total amount = "RESET<<3800*days<<endl<<endl;
							trent+=3800*days;
							cinnova--;
						}
						break;
					default: cout<<"\t"RED"Enter a valid input "RESET"\n";
						 break;
				}
			}
		}

 };
     
class rent:virtual public maruti,virtual public mahindra,virtual public toyota
{
	public:
		int m;
		void details()
		{
			 cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
			cout<<"\t"CYAN BOLD"Please enter Car comapny:"RESET"\n";
			cout<<"\t1.MARUTI \n\t2.MAHINDRA \n\t3.TOYOTA\n\t";
			cin>>m;
			 cout<<"\t"MAG BOLD"-------------------------------------------------------------------------------------"RESET"\n";
			switch(m)
			{
				case 1: maruti::details();
					maruti::getdata();
					maruti::rentcar();
					break;
				case 2: mahindra::details();
					mahindra::getdata();
					mahindra::rentcar();
					break;
				case 3: toyota::details();
					toyota::getdata();
					toyota::rentcar();
					break;
			}
		}

};
int main()
{
   	char ch;
	rent r;

	cout<<"\t"B_RED BOLD"-------------------------------WELCOME TO RENTALS-----------------------------"RESET"\n";
	r.details();


	ofstream file;
	file.open("Customer_details.txt");
	file<<"\n\n\t****************************** DriveOut Rentals ******************************\n";
	file<<"\t                                  RECEIPT                                    \n\n";
	file<<"\t CUSTOMER DETAILS: \n\n";
	file<<"\t CUSTOMER NAME : "<<firstname<<"  "<<lastname<<endl<<endl;
	file<<"\t CONTACT : "<<contact<<endl<<endl;
	file<<"\t__________________________________________________________________________________\n\n";
	file<<left<<setw(20)<<"\t CAR COMPANIES";
	file<<left<<setw(20)<<" DAYS ";
	file<<left<<setw(20)<<" COST ";
	file<<left<<setw(17)<<" TOTAL AMOUNT  \n";
	file<<"__________________________________________________________________________________\n\n\t";

	for(;;)
	{

		do
		{
			cout<<"\n";

			if(tcar==1)
			{
				file<<left<<setw(20)<<" BALENO :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.1800";
				file<<left<<setw(20)<<1800*days<<"\n\t";
			}

			if(tcar==2)
			{
				file<<left<<setw(20)<<" SWIFT:";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.1500";
				file<<left<<setw(20)<<1500*days<<"\n\t";
			}

			if(tcar==3)
			{
				file<<left<<setw(20)<<" ALTO :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.1000";
				file<<left<<setw(20)<<1000*days<<"\n\t";
			}
			if(tcar==4)
			{
				file<<left<<setw(20)<<" XUV700 :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.3500";
				file<<left<<setw(20)<<3500*days<<"\n\t";
			}
			if(tcar==5)
			{
				file<<left<<setw(20)<<" SCORPIO :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.3000";
				file<<left<<setw(20)<<3000*days<<"\n\t";
			}
			if(tcar==6)
			{
				file<<left<<setw(20)<<" XUV300 :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.2500";
				file<<left<<setw(20)<<2500*days<<"\n\t";
			}
			if(tcar==7)
			{
				file<<left<<setw(20)<<" FORTUNER :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.4000";
				file<<left<<setw(20)<<4000*days<<"\n\t";
			}
			if(tcar==8)
			{
				file<<left<<setw(20)<<" ETHIOS :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.3500";
				file<<left<<setw(20)<<3500*days<<"\n\t";
			}
			if(tcar==9)
			{
				file<<left<<setw(20)<<" INNOVA :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.3800";
				file<<left<<setw(20)<<3800*days<<"\n\t";
			}

			cout<<"\tDo you want to rent another car? If yes press 'Y' or press 'N' : ";
			cin>>ch;
			if(ch=='n'||ch=='N')
				break;

			r.details();
		}while(ch=='y'||ch=='Y');
		file.close();

			string linesread;
			    ifstream infile ("Customer_details.txt");
			    if (infile.is_open())
			    {
				while ( getline (infile, linesread) )
				{
				    cout << linesread << endl;
				}
				infile.close();
			    }
			    else cout << "File cannot be read";


			cout<<"\t"YEL "Thank You for visiting"RESET"\n";
			cout<<"\t"RED"TOTAL RENT : "RESET<<trent<<endl;
			exit(0);
	}
	return 0;
}