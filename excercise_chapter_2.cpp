#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
using namespace std;

double gallons_in_cubic_feet(int); // Question Number 1  // take the number of Gallons and return the number of Gallons in a Cubic Feet if in a feet 7.481 Gallons

double USD_to_British(float);
double USD_to_French(float);
double USD_to_German(float);
double USD_to_Japanese(float);

double celcius_to_farenheit(float);

float decimal_pound(float, float, float);

int main()
{

   // If you want to use colors on the console add #include<windows> and then add below programs lines 

   // HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); // h will now handle the console and we will different colors on the text also the backfround 
   
   
   /*
   SetConsoleTextAttribute(h, 1) // blue Color 
   SetConsoleTextAttribute(h, 2) // Green Color 
   SetConsoleTextAttribute(h, 3) // Cyan Color 
   SetConsoleTextAttribute(h, 4) // Red Color 
   SetConsoleTextAttribute(h, 5) // Purple Color 
   SetConsoleTextAttribute(h, 6) // Yellow (dark) Color 
   SetConsoleTextAttribute(h, 7) // Default white Color 
   SetConsoleTextAttribute(h, 8) // Gray/Grey Color 
   SetConsoleTextAttribute(h, 9) // Bright blue Color 
   SetConsoleTextAttribute(h, 10) // Bright Green Color 
   SetConsoleTextAttribute(h, 11) // Bright Cyan Color 
   SetConsoleTextAttribute(h, 12) // Bright Red Color 
   SetConsoleTextAttribute(h, 13) // pink/Magenta Color 
   SetConsoleTextAttribute(h, 14) // Yellow Color 
   SetConsoleTextAttribute(h, 15) // Bright White Color 
   SetConsoleTextAttribute(h, 16)  // Now these are the Background Colors 
   
   just add it befor the statement you want to color 
   */ 
                                                                     
   cout<<"\n\t\tBook:\tRobert Lafore -> \t Object Oriented Programming in c++."<<endl;
   cout<<"\n\n\t\tHere is the solution of all the Exercises:"<<endl;
  
   
   // ------------------------ Question Number 1 : ----------------------------------- //
   
	int numOfGallons = 0;   
	  
	cout<<"\n\tEnter the Number OF Gallons"<<endl;
	
	cin>>numOfGallons;            //Number of Gallons Taking  From the User 
	
	cout<<"\n\tNumber of Gallons in Cubic Feet is = " << gallons_in_cubic_feet(numOfGallons)<<endl;
	
	   // ------------------------ Question Number 2 : ----------------------------------- //
	   
	   // Show the Tbale of in one cout Statement hard coded values 
							cout<<setw(5)<<"1990"<<setw(10)<<"135"<<"\n"<<setw(5)<<"1991"<<setw(10)<<"7290"<<"\n"<<setw(5)<<"1992"<<setw(10)<<"11300"<<"\n"<<setw(5)<<"1993"<<setw(10)<<"16200"<<endl;
	
	   // ------------------------ Question Number 3 : ----------------------------------- //
	   
	   int number = 10;
	   
	   cout<<"\n\t\tNumber is =                    "<<number<<endl;
	   
	   number = 20;
	   
	   cout<<"\t\tNow Number is =                " <<number<<endl;
	   
	   number--;
	   
	   cout<<"\t\tDecerment Number is =          "<<number<<endl;
	         
	         
	         
	   // ------------------------ Question Number 4 : ----------------------------------- //
	   
	   cout<<"\nSome say the world will end in fire,\n";
       cout<<"Some say in ice.\n";
       cout<<"From what I’ve tasted of desire\n";
       cout<<"I hold with those who favor fire.\n";
       cout<<"But if it had to perish twice,\n";
       cout<<"I think I know enough of hate\n";
       cout<<"To know that for destruction ice\n";
       cout<<"Is also great,\n";
       cout<<"And would suffice.\n"<<endl;
	            
	            
	   // ------------------------ Question Number 5 : ----------------------------------- //
	   
	   char user_input = ' ';
	   
	   cout<<"\n\t\tEnter Any character"<<endl;
	   cin>>user_input;
	   cout<<"islower() returns this value against your input: "<<islower(user_input)<<endl;
	               
	               
	   // ------------------------ Question Number 6 : ----------------------------------- //
	   
	   float USD = 0.0;
	   
	   cout<<"\n\t\tEnter Dollers amount:"<<endl;
	   
	   cin>>USD;
	   	   
	     cout<<"\n\t\tBritish  Pound        = "<<USD_to_British(USD);
		 cout<<"\n\t\tFrance   franc        = "<<USD_to_French(USD);
		 cout<<"\n\t\tGerman   deutschemark = "<<USD_to_German(USD);
		 cout<<"\n\t\tJapanese yen          = "<<USD_to_Japanese(USD);
	                  
	                  
	   // ------------------------ Question Number 7 : ----------------------------------- //
	   
	   float temperature_in_Celcius = 0.0;
	   
	   cout<<"\n\t\tEnter the Celcius Temperature "<<endl;
	   
	   cin>>temperature_in_Celcius;
	   
	   cout<<"\n\t\tCelcius Temperature = "<<temperature_in_Celcius<<"\n\t\tFarenheit Temperature = "<<celcius_to_farenheit(temperature_in_Celcius)<<endl;
	   
	   
	                     
	                     
	   // ------------------------ Question Number 8 : ----------------------------------- //
	                        
	    long pop1=2425785, pop2=47, pop3=9761;
	    
		cout <<setfill('.')<< setw(8) << "LOCATION" <<setw(12)
		<< "POPULATION" << endl
		<< setw(8) << "Portcity" << setw(12) << pop1 << endl
		<< setw(8) << "Hightown" << setw(12) << pop2 << endl
		<< setw(8) << "Lowville" << setw(12) << pop3 << endl;
		
	                        
	   // ------------------------ Question Number 9 : ----------------------------------- //
	   
	   char dummy = '/';
	   float numerator1= 0.0 , denumerator1 = 0.0, numerator2= 0.0 , denumerator2 = 0.0;
	   
	   cout<<"\n\t\tEnter the Fraction as any number / number "<<endl;
	   cout<<"\n\t\tEnter the First Fraction"<<endl;
	   cin>>numerator1>>dummy>>denumerator1;
	   cout<<"\n\t\tEnter the Second Fraction"<<endl;
	   cin>>numerator2>>dummy>>denumerator2;
	   
	   cout<<"\n\tRESULT = "<<(numerator1 * denumerator2) + (denumerator1 * numerator2) <<dummy<< denumerator1 * denumerator2;
	   
	   
	   // ------------------------ Question Number 10 : ----------------------------------- //
	   
	   cout<<"\n\t\tEnter Pound: ";
	   
	   float pound = 0.0, shilling = 0.0, pence = 0.0;
	   
	   cin>>pound;
	   cout<<"\n\t\tEnter Shillings: ";
	   cin>>shilling;
	   cout<<"\n\t\tEnter Pence : ";
	   cin>>pence;
	   
	   cout<<"\n\t\tDecimal Pound = "<< decimal_pound(pound, shilling, pence)<<endl;
	   
	   
	   
	   
	   
	   
	   
	   
	//system("pause");
	
	return 0;
}

float decimal_pound(float pound, float shilling , float pence)
{
	float result = 0.0;
	
	result = shilling * 12;
	
	result = (result + pence) / 240 ;
	
	result = result + pound;

	return  result;
}
double gallons_in_cubic_feet(int numOfGallons = 0)
{
	return numOfGallons * 7.481;
}

double USD_to_British(float USD=0)
{
	return USD * 1.487;
}
double USD_to_French(float USD=0)
{
	return USD * 0.172;
}

double USD_to_German(float USD=0)
{
	return USD * 0.584;
}
double USD_to_Japanese(float USD=0)
{
	return USD * 0.00955;
}

double celcius_to_farenheit(float temperature_in_Celcius)
{
	return (temperature_in_Celcius * 9/5) + 32;	
}




