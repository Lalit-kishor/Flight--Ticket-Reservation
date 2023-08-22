#include<iostream>
#include<fstream>
#include<iomanip> // floating point values

using namespace std;

void mainMenu();

class Management
{
    public:
        Management()
        {
            mainMenu();
        }
};

class Details
{
    public:
        static string name,gender;
        int phoneNo,age;
        string address;

        static int cId;
        char arr[100];

        void information()
        {
            cout<<"\nEnter the customer ID : ";
            cin>>cId;
            cout<<"\nEnter the name : ";
            cin>>name;
            cout<<"\nEnter the age : ";
            cin>>age;
            cout<<"\nAddress : ";
            cin>>address;
            cout<<"\nGender : ";
            cin>>gender;

            cout<<"Your details have been saved with us\n"<<endl; 
        }

};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
        static int choice;
        int choice1,back;
        static float charges;

        void flights()
        {
            string flightN[] = {"Dubai","Canada","Britain","USA"};

            for(int a=0;a<4;a++)
            {
                cout<<(a+1)<<".flight to "<<flightN[a]<<endl;
            }

            cout<<"\nWelcome to the Airlines"<<endl;
            cout<<"Enter destination : ";
            cin>>choice;

            switch(choice)
            {
                case 1:
                {
                    cout<<"__________________Welcome to Dubai Emirates______________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey !"<<endl;
                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. DUB - 498"<<endl;

                    cout<<"\t08-01-2022  8:00 AM  10hrs Rs. 14000"<<endl;
                    cout<<"2. DUB - 658"<<endl;

                    cout<<"\t09-01-2022  10:00 AM  12hrs Rs. 10000"<<endl;
                    cout<<"3. DUB - 888"<<endl;

                    cout<<"\t12-01-2022  11:00 PM  15hrs Rs. 9000"<<endl;

                    cout<<"Select the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges = 14000;
                        cout<<"\nYou have successfully booked the flight No. DUB - 498"<<endl;
                        cout<<"You can go back to menu and take the ticket;"<<endl;
                    }
                    else if(choice1==2)
                    {
                        charges = 10000;
                        cout<<"\nYou have successfully booked the flight No. DUB - 658"<<endl;
                        cout<<"You can go back to menu and take the ticket;"<<endl;
                    }
                    else if(choice1==3)
                    {
                        charges = 9000;
                        cout<<"\nYou have successfully booked the flight No. DUB - 888"<<endl;
                        cout<<"You can go back to menu and take the ticket;"<<endl;
                    }
                    else
                    {
                        cout<<"Invalid input, shifting to the previous Menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to Main Menu"<<endl;
                    cin>>back;

                    if(back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                }
                case 2:
                {
                    cout<<"__________________Welcome to Canadian Airlines______________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey !"<<endl;
                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. CAN - 234"<<endl;

                    cout<<"\t18-01-2022  6:00 AM  11hrs Rs. 16000"<<endl;
                    cout<<"2. CAN - 253"<<endl;

                    cout<<"\t20-01-2022  10:00 PM  13hrs Rs. 13000"<<endl;
                    cout<<"3. CAN - 289"<<endl;

                    cout<<"\t12-01-2022  12:00 PM  8hrs Rs. 29000"<<endl;

                    cout<<"Select the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges = 16000;
                        cout<<"\nYou have successfully booked the flight No. CAN - 234"<<endl;
                        cout<<"You can go back to menu and take the ticket;"<<endl;
                    }
                    else if(choice1==2)
                    {
                        charges = 13000;
                        cout<<"\nYou have successfully booked the flight No. CAN - 253"<<endl;
                        cout<<"You can go back to menu and take the ticket;"<<endl;
                    }
                    else if(choice1==3)
                    {
                        charges = 29000;
                        cout<<"\nYou have successfully booked the flight No. DUB - 289"<<endl;
                        cout<<"You can go back to menu and take the ticket;"<<endl;
                    }
                    else
                    {
                        cout<<"Invalid input, shifting to the previous Menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to Main Menu"<<endl;
                    cin>>back;

                    if(back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                }
                case 3:
                {
                    cout<<"__________________Welcome to Britain Airlines______________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey !"<<endl;
                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. UK - 101"<<endl;

                    cout<<"\t02-02-2022  4:00 AM  23hrs Rs. 56000"<<endl;
                    cout<<"2. UK - 102"<<endl;

                    cout<<"\t16-02-2022  2:00 PM  26hrs Rs. 48000"<<endl;
                    cout<<"3. UK - 103"<<endl;

                    cout<<"\t25-02-2022  12:00 AM  18hrs Rs. 68000"<<endl;

                    cout<<"Select the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges = 56000;
                        cout<<"\nYou have successfully booked the flight No. UK - 101"<<endl;
                        cout<<"You can go back to menu and take the ticket;"<<endl;
                    }
                    else if(choice1==2)
                    {
                        charges = 48000;
                        cout<<"\nYou have successfully booked the flight No. UK - 102"<<endl;
                        cout<<"You can go back to menu and take the ticket;"<<endl;
                    }
                    else if(choice1==3)
                    {
                        charges = 68000;
                        cout<<"\nYou have successfully booked the flight No. UK - 103"<<endl;
                        cout<<"You can go back to menu and take the ticket;"<<endl;
                    }
                    else
                    {
                        cout<<"Invalid input, shifting to the previous Menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to Main Menu"<<endl;
                    cin>>back;

                    if(back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }

                }
                case 4:
                {
                    cout<<"__________________Welcome to American Airlines______________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey !"<<endl;
                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. USA - 932"<<endl;

                    cout<<"\t03-01-2022  3:00 PM  40hrs Rs. 66000"<<endl;
                    cout<<"2. USA - 933"<<endl;

                    cout<<"\t05-01-2022  7:00 PM  45hrs Rs. 61000"<<endl;
                    cout<<"3. USA - 934"<<endl;

                    cout<<"\t12-01-2022  1:00 AM  36hrs Rs. 79000"<<endl;

                    cout<<"Select the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges = 66000;
                        cout<<"\nYou have successfully booked the flight No. USA - 932"<<endl;
                        cout<<"You can go back to menu and take the ticket;"<<endl;
                    }
                    else if(choice1==2)
                    {
                        charges = 61000;
                        cout<<"\nYou have successfully booked the flight No. USA - 933"<<endl;
                        cout<<"You can go back to menu and take the ticket;"<<endl;
                    }
                    else if(choice1==3)
                    {
                        charges = 79000;
                        cout<<"\nYou have successfully booked the flight No. USA - 934"<<endl;
                        cout<<"You can go back to menu and take the ticket;"<<endl;
                    }
                    else
                    {
                        cout<<"Invalid input, shifting to the previous Menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to Main Menu"<<endl;
                    cin>>back;

                    if(back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                }
                default:
                {
                    cout<<"Invalid input, shifting to the Main Menu"<<endl;
                    mainMenu();
                    break;
                } 
            }
        }
};

float registration::charges;
int registration::choice;

class ticket : public registration,Details
{
    public:
     
     void Bill()
     {
        string destination="";
        ofstream outf("records.txt");
        {
            outf<<"______________AirAsia Airlines_____________"<<endl;
            outf<<"___________________Ticket__________________"<<endl;
            outf<<"___________________________________________"<<endl;

            outf<<"Customer ID : "<<Details::cId<<endl;
            outf<<"Customer Name : "<<Details::name<<endl;
            outf<<"Customer Gender : "<<Details::gender<<endl;
            outf<<"\tDescription"<<endl<<endl;

            if(registration::choice==1)
            {
                destination = "Dubai";
            }
            else if(registration::choice==2)
            {
                destination = "Canada";
            }
            else if(registration::choice==3)
            {
                destination = "Britain";
            }
            else if(registration::choice==4)
            {
                destination = "USA";
            }

            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Flight cost :\t\t"<<registration::charges<<endl;
        }
        outf.close();
     }
    void dispBill()
    {
        ifstream ifs("records.txt");
        {
            if(!ifs)
                cout<<"File Error !"<<endl;
            
            // while(!ifs.eof())
            // {
            //     ifs.getline(arr,100);
            //     cout<<arr<<endl;
            // }

            while (ifs.getline(arr, 100)) {
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};
void mainMenu()
{
    int lchoice,schoice,back;

    cout<<"\t            Airasia Airline \n"<<endl;
    cout<<"\t_______________Main Menu_____________"<<endl;
    cout<<"\t_____________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t"<<endl;

    cout<<"\t|\t Press 1 to add the customer details  \t|"<<endl;
    cout<<"\t|\t Press 2 for flight registration  \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges  \t|"<<endl;
    cout<<"\t|\t Press 4 to exit  \t\t\t|"<<endl;
    cout<<"\t\t\t\t\t\t\t"<<endl; 
    cout<<"\t_____________________________________"<<endl;

    cout<<"Enter the Choice : ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
        case 1:
        {
            cout<<"___________Customers_____________\n"<<endl;
            d.information();
            cout<<"Press any to go back to Main Menu";
            cin>>back; 

            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 2:
        {
            cout<<"___________Book a flight using this system_________\n"<<endl;
            r.flights();
            break;
        }
        case 3:
        {
            cout<<"____________Get your ticket___________\n"<<endl;
            t.Bill();

            cout<<"Your ticket has been printed, you cam collect it \n"<<endl;
            cout<<"Press 1 to display your ticket";

            cin>>back;

            if(back==1)
            {
                t.dispBill();
                cout<<"Press any key to go back to Main Menu:";
                cin>>back;

                if(back==1)
                    mainMenu();
                else
                    mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
        case 4:
        {
            cout<<"\n\n\t_________Thank-you__________"<<endl;
            break;
        }
        default:
        {
            cout<<"Invalid input, Please try again!\n"<<endl;
            mainMenu();
            break;
        }
    }
}
int main()
{
    Management Mobj;
    return 0;
}