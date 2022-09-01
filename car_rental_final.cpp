#include <iostream>    //cin and cout method of reading from std input and output
#include <fstream>     //to perform file processing
#include <conio.h>     //inbuilt function like getch() and clrscr()
#include <stdlib.h>    //includes function involving memory allocation eg. malloc(),calloc();
#include <unistd.h>    //
#include <dos.h>       //used for handling interrupts, producing sound, data and time function
#include <iomanip>     //affect the state of iostream objects.

// included required library files
using namespace std;
//base class
class customer // customer class
{
	private:
	public:
	string customername;
  string carmodel;
  string carnumber;
  char data;
    // variables defined in this class in public mode.
};

//intereted class from customer class
//public inheritance : derive a class from a public base class
class rent : public customer 
{
	public:
	int days=0,
  rentalfee=0; // additional int vatiables defined
	void data()
	{
		int login();
	  login();
    //taking data from the user
	  cout << "\t\t\t\tPlease Enter your Name: "; 
    cin >> customername;
    cout<<endl;
    do
    {
        //giving user a choice to select among three different models
        cout <<"\t\t\t\tPlease Select a Car"<<endl; 
        cout<<"\t\t\t\tEnter 'A' for Tesla 20011."<<endl;
        cout<<"\t\t\t\tEnter 'B' for Hyundai 2015."<<endl;
        cout<<"\t\t\t\tEnter 'C' for Ford 2017."<<endl;
        cout<<endl;
        cout<<"\t\t\t\tChoose a Car from the above options: ";
        cin >>carmodel;
        cout<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    if(carmodel=="A")
    {
 	  system("CLS");
 
		cout<<"You have choosed Tesla model 2011"<<endl;
    //displaying details of model A
    //ifstream : this data type represent the input file stream and is used to read information from files
    //before we use an ifstream, however you must create a variable of type ifstream and connect it to a particular input file
    // "inA" :- is the variable of fstream ("A.txt" :- {input file we want} it stream a data used for reading input from a file)
		 ifstream inA("A.txt"); 
         char str[200];
         while(inA) {
          //getline function:- accept the character even when the space character is encountered
          inA.getline(str, 200);  //implementing getline function

         if(inA) cout << str << endl;
        }
     //header file for sleep function  (  <unistd.h>  )
    sleep(2);   // 2 is paramater in second for which execution of the program is suspended
    }

    // user select model B
    if(carmodel=="B")
    {
    	system("CLS");
  
		   cout<<"You have choosed Hyundai model 2015"<<endl;
		  ifstream inB("B.txt"); //displaying details of model B
         char str[200];
         while(inB) {
         inB.getline(str, 200);  
         if(inB) cout << str << endl;    
       }
     sleep(2);
    }

    // user select model C
    if(carmodel=="C")
    {
 	   system("CLS");
	     cout<<"You have choosed Ford model 2017"<<endl;
		   ifstream inC("C.txt"); //displaying details of model C
         char str[200];
         while(inC) {
         inC.getline(str, 200);  
         if(inC) cout << str << endl;
      }
      sleep(2);
    }  
    if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" )
        cout<<"Invaild Car Model. Please try again!"<<endl;
    }//do loop complete

    while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" );
    //do while loop complete

    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: "<<endl; 
	  //getting data from user related to rental service
    cout<<"Please select a Car No. :  ";
    cin >> carnumber;
    cout<<"Number of days you wish to rent the car :   ";
    cin >> days;
    cout<<endl;
	}

//calculate function 
	void calculate()
	{
		sleep(1);
		system ("CLS");
		cout<<"Calculating rent. Please wait......"<<endl;
		sleep(2);
    //calculating rent 
		if(carmodel == "A"|| carmodel=="a")
        rentalfee=days*56;
    if(carmodel == "B" || carmodel=="b")
        rentalfee=days*60;
    if(carmodel == "C" || carmodel=="c")
        rentalfee=days*75;
  }

//showrent function
void showrent()
    {
    cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
    cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
    cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<carmodel<<" |"<<endl;
    cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<carnumber<<" |"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
    cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
    cout << "\t\t	 require an authorised signture #"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
    cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    int f;
    system("PAUSE");
    
    system ("CLS");
    
    ifstream inf("thanks.txt");  
    char str[300];

    while(inf) {
       inf.getline(str, 300);
       if(inf) cout << str << endl;
    }
    inf.close();
	}
};

//welcome Class
class welcome 
{
	public:
	int welcum()
	{
  ifstream in("welcome.txt"); //displaying welcome ASCII image text on output screen fn1353

  if(!in) {
    cout << "Cannot open input file.\n";
  }
  char str[1000];
  while(in) {
    in.getline(str, 1000);  // delim defaults to '\n' cp
    if(in) cout << str << endl;
  }
  in.close();
  sleep(1);
  cout<<"\nStarting the program please wait....."<<endl;
  sleep(1);
  cout<<"\nloading up files....."<<endl;
  sleep(1); //function which waits for (n) seconds
  system ("CLS"); //cleares screen
  }
};

//Main Function
int main()
{
     welcome obj1; //object created for welcome class
     obj1.welcum(); //welcum function is called
     rent obj2; 
    //object created for rent class and further member functions are called
    obj2.data();
    obj2.calculate();
    obj2.showrent();

    return 0; //end of the program
}

int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";	
   cout<<"\t\t\t\t\t------------------------------\n\n";	
   cout << "\t\t\t\t\tEnter Password: ";
   ch = _getch();

   //_getch() <conio.h> header file, it returns the ASCII value of character
   //character 13 is enter  // ASCII Value of 13 - carriage return (End of line)

   while(ch != 13){       
      pass.push_back(ch);
      cout << '*';    //here the * is to used for hiding the input
      ch = _getch();  //we can hide the input character provided by users
   }
   if(pass == "pass"){
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
       // system("pause") command is only available in windows system only
       // system() function performs a call to the operating system to run a particular command
       //system(const char *command)  ##( <cstdlib> header file )
       // This system("pause") program halts the exceution of the parent c++ program
      system("PAUSE");

      //to clear the screen in visual c++ ( header file  <stdlib.h> )
      system ("CLS");

   }else{
      cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}

