#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
using namespace std;
			
class car
{
	private: 
		int price,seat,modal,days,fuel_oil,c,neww,no,count,b;
		long long phon;
			char name[45],add[67];
				float total_price;
	public:
		car()
		{
			cout<<"\t\t\t\tWELCOME TO BAWEJA'S EMPIRE";
				cout<<"\n\t\t\t----------------------------------------\n";
					cout<<"-------------------------\n";
						c=0,count=0,b=0;
		}
		~car()
		{
			cout<<"\nTHANK YOU";
		}
	void input();
		void seater();	
			void seat2();
				void seat7();
					void seat4();
						void FERRARI2();
							void PORSCHE2();
								void ASTON2();
									void audi4();       
										void  BMW4();
											void honda4();
												void TATA7();
													void FORD7();
														void maruti7();
															void final();
																void file();
																	void  fprice(int ,int ,int);													
};
void car:: input()
{
	
	cout<<"\nENTER CUSTOMER DETAILS";
		cout<<"\n--------------------";
			cout<<"\nENTER NAME : ";
				cin.getline(name,40);
					cout<<"ENTER ADDRESS : ";
						cin.getline(add,40);
							cout<<"ENTER PHONE NUMBER : ";
								cin>>phon; 
									
											
													system("cls");
																		
}

void car:: seater()
{	
	
		cout<<"\n------------------------\n";
			cout<<"AVAILABLE CARS\n2 SEATER\n4 SEATER\n7 SEATER\n";
				cout<<"------------------------\n";
					cout<<"Press 1 for 2 SEATER :  ";
					cout<<"\nPress 2 for 4 SEATER :  ";
					cout<<"\nPress 3 for 7 SEATER :  \n";
						cin>>seat; 
						if(seat==1)
							seat2();
								else if(seat==2)
									seat4();
										else if(seat==3)
											seat7();
												else
												{
													system("cls");
														cout<<"THIS Option IS NOT AVAILABLE, Choose the correct option";
															seater();
									       		}
}
void car :: seat2()
{
	
	cout<<"\npress 1 for FERRARI models  ";
		cout<<"\npress 2 PORSCHE  models  ";
			cout<<"\npress 3 ASTON MARTIN  models  \n";
					cin>>modal;
	switch(modal)
	{
		case 1:
			FERRARI2();
				break;
		case 2:
			PORSCHE2();
				break;
		case 3:
			ASTON2();
				break;	
		default:
			system("cls");
				cout<<"\nThis option is not available, Choose the correct option";
					seat2();	
						break;
	}							
}
void car :: seat4()
{	cout<<"\npress 1 for AUDI models  ";
		cout<<"\npress 2 for BMW models  ";
			cout<<"\npress 3 for HONDA models \n";
						cin>>modal;
	switch(modal)
	{
		case 1:
			audi4();
				break;
		case 2:
			BMW4();
				break;
		case 3:
			honda4();
				break;
		default:			
			system("cls");
				cout<<"This option is not available, Choose the correct option";
					seat4();	
						break;
	}						
}
void car :: seat7()
{
	
	cout<<"\npress 1 for TATA models  ";
		cout<<"\npress 2 for FORD models ";
			cout<<"\npress 3 for MARUTI models \n";
					cin>>modal;
	switch(modal)
	{
		case 1:
			TATA7();
				break;
		case 2:
			FORD7();
				break;
		case 3:
			maruti7();
				break;
		default:
			system("cls");
				cout<<"This option is not available, Choose the correct option";
					seat7();
						break;
	}				
}
void car :: FERRARI2()
{
	
			cout<<"\npress 1 for FERRAI 458 \n";
				cout<<"press 2 for FERRARI CALIFORNIA T\n";
					cout<<"press 3 for FERRARI 459 SPECIALE\n";
						cout<<"press 4 for FERRARI 488 GTB \n";
							cout<<"press 5 for FERRARI F12 BERLINETTA\n";
								cin>>modal;
	switch(modal)
	{
	case 1:	
		cout<<"DETAILS OF CAR \n";
			cout<<"---------------\n";
				cout<<"car name : FERRAI 458\n";
						cout<<"mileage    : 5.5km/ltr\n";
							cout<<"fueloil    : PETROL\n";
								price=8000; 	
									cout<<"price    : "<<price<<"/day";
										cout<<"\nHow many FERRAI 458 car do u want :";
												cin>>no;
													cout<<"\nFor how many days do you this want car : ";
														cin>>days;
														fprice(price,days,no);	
															break;
														
																
	case 2:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name : FERRAI CALIFORNIA T\n";
				
						cout<<"mileage 	: 9km/ltr\n";
							cout<<"fueloil	: PETROL\n";
								price=8500; 
									cout<<"price 	: "<<price<<"/day";
									
											cout<<"\nHow many FERRAI CALIFORNIA car do u want :";
												cin>>no;	
												
														cout<<"\nFor how many days do you want this car : ";
															cin>>days;	
																fprice(price,days,no);	
																
																	
																			break;
	case 3:
		cout<<"DETAILS OF CAR \n";
			cout<<"---------------\n";
				cout<<"car name   : FERRARI 459 SPECIALE\n";
						cout<<"\nmileage    : 9km/ltr\n";
							cout<<"\nfueloil    : PETROL\n";
								price=9000; 
									cout<<"price      : "<<price<<"/day";
									
											cout<<"\nHow many FERRARI 459 SPECIALE car do u want :";
												cin>>no;
													
														cout<<"\nFor how many days do you this want car : ";
															cin>>days;
																fprice(price,days,no);	
																
																			break;
	case 4:
		cout<<"DETAILS OF CAR \n";
			cout<<"---------------\n";
				cout<<"car name  : FERRARI 488 GTB\n";
					
						cout<<"\nmileage   : 5.5km/ltr\n";
							cout<<"\nfueloil   : PETROL\n";
								price=10000; 
									cout<<"price     : "<<price<<"/day\n";
										
											cout<<"\nHow many FERRARI 488 GTB car do u want :";
												cin>>no;
												
														cout<<"For how  days do you want this car : ";
															cin>>days;
															fprice(price,days,no);	
																	
																			break;
	case 5:
		cout<<"DETAILS OF CAR \n";
			cout<<"---------------\n";
				cout<<"car name   : FERRARI F12 BERLINETTA\n";
					
						cout<<"\nmileage    : 5.5km/ltr\n";
							cout<<"\nfueloil    : PETROL\n";
								price=10000; 
									cout<<"price      : "<<price<<"/day";
										
											cout<<"\nHow many FERRARI F12 BERLINETTA car do u want :";
												cin>>no;
													
														cout<<"\nFor how  days do you want this car : ";
															cin>>days;
													fprice(price,days,no);	
																			break;
		default:
			system("cls");
				cout<<"\nThis option is not available, Choose the correct option ";
					FERRARI2();	
						break;
			
			
	}
}
void car :: PORSCHE2()
{
			cout<<"\npress 1 for PORSCCHE 718 \n";
				cout<<"press 2 for PORSCHE CAYMAN\n";
					cout<<"press 3 for PORSCHE 911\n";
						cin>>modal;
	switch(modal)
	{
	case 1:
		cout<<"DETAILS OF CAR \n";
			cout<<"---------------\n";
				cout<<"car name   : PORSCCHE 718";
						cout<<"\nmileage    : 7.5km/ltr";
							cout<<"\nfueloil    : PETROL\n";
								price=8000; 
									cout<<"price      : "<<price<<"/day";
										
											cout<<"\nHow many PORSCCHE 718 car do u want :";
												cin>>no;
													
														cout<<"\nFor how many days do you want this car :";
															cin>>days;
																
																	fprice(price,days,no);	
																			break;
	case 2:
		cout<<"DETAILS OF CAR \n";
			cout<<"---------------\n";
				cout<<"car name  : PORSCHE CAYMAN";
				
						cout<<"\nmileage   : 13.8km/ltr";
							cout<<"\nfueloil   : PETROL\n";
								price=8500; 
									cout<<"price 	 : "<<price<<"/day";
									
											cout<<"\nHow many PORSCHE CAYMAN car do u want :";
												cin>>no;
													
														cout<<"\nFor how many days do you want this car :";
															cin>>days;
															fprice(price,days,no);		
																			break;
	case 3:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : PORSCHE 911";
					
						cout<<"\nmileage   : 10.5/ltr";
							cout<<"\nfueloil   : PETROL\n";
								price=9000; 
									cout<<"price 	 : "<<price<<"/day";
									
											cout<<"\nHow many PORSCHE 911 car do u want :";
												cin>>no;
												
														cout<<"\nFor how many days do you want this car : ";
															cin>>days;
															fprice(price,days,no);	
																
		break;
		default:
			system("cls");
				cout<<"This option is not available, Choose the correct option";
					PORSCHE2();	
						break;

	}
}
void car :: ASTON2()            
{
	
			cout<<"\npress 1 for ASTON MARTIN V12 VANTAGE S \n";
				cout<<"press 2 for ASTON MARTIN VANQUISH\n";
					cin>>modal;
	switch(modal)
	{
	case 1:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name   : ASTON MARTIN V12 VANTAGE S";
				
						cout<<"\nmileage    : 10km/ltr";
							cout<<"\nfueloil    : PETROL\n";
								price=8000;
									cout<<"price      : "<<price<<"/day";
									
											cout<<"\nHow many ASTON MARTIN V12 VANTAGE S car do u want :";
												cin>>no;
												
														cout<<"\nFor how many days do you want this car : ";
															cin>>days;
																fprice(price,days,no);	
																			break;
	case 2:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : ASTON MARTIN VANQUISH";
					
						cout<<"\nmileage   : 8km/ltr";
							cout<<"\nfueloil   : PETROL\n";
								price=8500; 
									cout<<"price     : "<<price<<"/day";
									
											cout<<"\nHow many ASTON MARTIN VANQUISH car do u want :";
												cin>>no;
													
														cout<<"\nFor how many days do you want this car : ";
															cin>>days;
																fprice(price,days,no);							
																	break;													
		default:
			system("cls");
				cout<<"This option is not available, Choose the correct option";
					ASTON2();	
						break;
	}
}
void car :: audi4()
{
	
			cout<<"\npress 1 for AUDI Q3\n";
				cout<<"press 2 AUDI A4 \n";
					cout<<"press 3 for AUDI A6\n";
						cout<<"press 4 for AUDI Q7\n";
							cin>>modal;
	switch(modal)
	{
	case 1:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : AUDI Q3";
				
						cout<<"\nmileage   : 16.5km/ltr";
							cout<<"\nfueloil   : DIESEL / PETROL\n";
								price=8000; 	
									cout<<"price     : "<<price<<"/day";
										
											cout<<"\nHow many AUDI Q3 car do u want :";
												cin>>no;
												
														cout<<"\nFor how many days do you want this car : ";
															cin>>days;
																fprice(price,days,no);
																			break;
	case 2:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : 	AUDI A4 ";

						cout<<"\nmileage   : 18km/ltr";
							cout<<"\nfueloil   : DIESEL / PETROL\n";
								price=8500; 
									cout<<"price     : "<<price<<"/day";
							
											cout<<"\nHow many AUDI A4 car do u want :";
												cin>>no;
												
														cout<<"\nFor how many days do you want this car : ";
															cin>>days;	
																fprice(price,days,no);	
																		
																			break;
	case 3:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : AUDI A6";
				
						cout<<"\nmileage   : 16/ltr";
							cout<<"\nfueloil   : DIESEL / PETROL\n";
								price=9000; 
									cout<<"price     : "<<price<<"/day";
										
											cout<<"\nHow many AUDI A6 car do u want :";
												cin>>no;
													
														cout<<"For how many days do you want this car : ";
															cin>>days;
																	fprice(price,days,no);
																			break;
	case 4:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : AUDI Q7";
					
						cout<<"\nmileage   : 14.5/ltr";
							cout<<"\nfueloil   : DIESEL / PETROL\n";
								price=10000; 
									cout<<"price     : "<<price<<"/day";
										
											cout<<"\nHow many AUDI Q7 car do u want :";
												cin>>no;
										
										cout<<"\nFor how many days do you want this car : ";
									cin>>days;
								fprice(price,days,no);
					
						
					break;
				default:
			system("cls");
		cout<<"This option is not available, Choose the correct option";
	audi4();	
break;
	}
}
void car :: BMW4()
{
	ofstream fout;
		fout.open("prince.txt",ios::app);
	cout<<"\npress 1 for BMW X1\n";
	cout<<"press 2 BMW X3\n";
	cout<<"press 3 for BMW Z4\n"; 
	cout<<"press 4 for BMW X5\n";
	cin>>modal;
	switch(modal)
	{
	case 1:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : BMW X1";
				
						cout<<"\nmileage   : 18.5km/ltr";
							cout<<"\nfueloil   : DIESEL / PETROL\n";
								price=8000;
									cout<<"price     : "<<price<<"/day";
									
									cout<<"\nHow many BMW X1 car do u want :";
								cin>>no;
							
	    				cout<<"\nFor how many days do you want this car : ";
					cin>>days;
			
		fprice(price,days,no);
	break;
	case 2:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : BMW X3";
				
						cout<<"\nmileage   : 18.5km/ltr\n";
							cout<<"\nfueloil   : DIESEL\n";
								price=8500; 
									cout<<"price    : "<<price<<"/day";
									
											cout<<"\nHow many BMW X3 car do u want :";
										cin>>no; 
								cout<<"price     : "<<price<<"/day";
							cout<<"\nHow many car do u want :";
						cin>>no;
					cout<<"\nFor how many days do you want this car : ";
				cin>>days;
		
	fprice(price,days,no);
break;
	case 3:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : BMW Z4";
				
						cout<<"\nmileage   : 11/ltr";
							cout<<"\nfueloil   : PETROL\n";
								price=9000; 
									cout<<"price     : "<<price<<"/day";
										
									cout<<"\nHow many BMW Z4 car do u want :";
								cin>>no; 
							
						cout<<"\nFor how many days do you want this car : ";
					cin>>days;
			fprice(price,days,no);
	break;
	case 4:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : BMW X5";
					
						cout<<"\nmileage   : 13/ltr";
							cout<<"\nfueloil   : DIESEL / PETROL\n";
								price=10000; 
									cout<<"price     : "<<price<<"/day";
										
									cout<<"\nHow many BMW X5 car do u want :";
								cin>>no; 
							
							cout<<"\nFor how many days do you want this car : ";
						cin>>days;
					
			fprice(price,days,no);
		break;	
	default:
			system("cls");
				cout<<"This option is not available, Choose the correct option";
					BMW4();	
						break;
	}
	
}
void car :: honda4()
{

			cout<<"\npress 1 for HONDA BRIO\n";
				cout<<"press 2 HONDA JAZZ\n";
					cout<<"press 3 for HONDA CRV\n";
						cout<<"press 4 for HONDA AMAZE\n";
							cin>>modal;
	switch(modal)
	{
	case 1:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : HONDA BRIO";
						cout<<"\nmileage   : 17.5km/ltr";
							cout<<"\nfueloil   : PETROL\n";
								price=8000; 	
									cout<<"price     : "<<price<<"/day";
										
									cout<<"\nHow many HONDA BRIO car do u  want :";
								cin>>no; 
						
						cout<<"\nFor how many days do you want this car : ";
					cin>>days;		
					fprice(price,days,no);
			
	break;
	case 2:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : HONDA JAZZ";
					
						cout<<"\nmileage   : 23km/ltr";
							cout<<"\nfueloil   : DIESEL / PETROL\n";
								price=8500;
									cout<<"price     : "<<price<<"/day";
										
									cout<<"\nHow many HONDA JAZZ car do u want :";
								cin>>no; 
						
						cout<<"\nFor how many days do you want this car :";
					cin>>days;
					
			fprice(price,days,no);	
	break;
	case 3:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
					cout<<"car name  : HONDA CRV";
					
							cout<<"\nmileage   : 13/ltr";
								cout<<"\nfueloil   : PETROL\n";
									price=9000; 
										cout<<"price     : "<<price<<"/day";
											
												cout<<"\nHow many HONDA CRV car do u want :";
											cin>>no; 
										
									cout<<"\nFor how many days do you want this car :";
								cin>>days;
							
					fprice(price,days,no);
				break;
	case 4:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : HONDA AMAZE";
						cout<<"\nmileage   : 21/ltr";
							cout<<"\nfueloil   : DIESEL / PETROL\n";
								price=10000; 
									cout<<"price     : "<<price<<"/day";
										
									cout<<"\nHow many HONDA AMAZE car do u want :";
								cin>>no; 
							
						cout<<"\nFor how many days do you want this car\n";
					cin>>days;
					
				
		fprice(price,days,no);
	break;
		default:
			system("cls");
				cout<<"This option is not available, Choose the correct option";
					honda4();	
						break;
		
	}
}
void car :: TATA7()
{
	
			cout<<"\npress 1 for TATA TIAGO\n";
				cout<<"press 2 TATA BOLT\n";
					cout<<"press 3 for TATA NEXON\n";
						cout<<"press 4 for TATA SUMO\n";
							cin>>modal;
	switch(modal)
	{
	case 1:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : TATA TIAGO";
						cout<<"\nmileage   : 25km/ltr";
							cout<<"\nfueloil   : DIESEL / PETROL\n";
								price=1000; 
									cout<<"price     : "<<price<<"/day";
									
									cout<<"\nHow many  TATA TIAGO car do u want :";
								cin>>no; 
						
						cout<<"\nFor how many days do you want this car : ";
					cin>>days;
				
		fprice(price,days,no);
	break;
	case 2:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : TATA BOLT";
				
						cout<<"\nmileage   : 17.5km/ltr";
						cout<<"\nfueloil   : DIESEL / PETROL\n";
							price=2200; 
								cout<<"price     : "<<price<<"/day";
									
								cout<<"\nHow many TATA BOLT car do u want :";
							cin>>no; 	
						
					cout<<"\nFor how many days do you want this car : ";
				cin>>days;
			
		fprice(price,days,no);
	break;
	case 3:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : TATA NEXON";
				
						cout<<"\nmileage   : 17.6/ltr\n";
							cout<<"\nfueloil   : PETROL";
								price=2300; 
									cout<<"price     : "<<price<<"/day";
									cout<<"\nHow many TATA NEXON car do u want :";
								cin>>no; 
						cout<<"\nFor how many days do you want this car :";
					cin>>days;
			
	fprice(price,days,no);
break;
	case 4:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  :  TATA SUMO";
					
						cout<<"\nmileage   : 15.3/ltr";
							cout<<"\nfueloil   : DIESEL\n";
								price=2000;				
									cout<<"price     : "<<price<<"/day";
									cout<<"\nHow many  TATA SUMO car do u want :";
								cin>>no; 
							
						cout<<"\nFor how many days do you want this car :";
					cin>>days;
				
		fprice(price,days,no);
	break;
		default:
			system("cls");
				cout<<"This option is not available, Choose the correct option";
					TATA7();	
						break;
	}
}
void car :: FORD7()
{
	
			cout<<"\npress 1 for FORD FIGO\n";
				cout<<"press 2 for FORD ECOSPORT\n";
					cout<<"press 3 for FORD ENDEAVOUR\n";
						cin>>modal;
	switch(modal)
	{
	case 1:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : FORD FIGO";
						cout<<"\nmileage   : 17km/ltr";
							cout<<"\nfueloil   : PETROL\n";
								price=5500; 
									cout<<"price     : "<<price<<"/day";
										
									cout<<"\nHow many FORD FIGO car do u want :";
								cin>>no; 
							
						cout<<"\nFor how many days do you this want car : ";
					cin>>days;
			
		fprice(price,days,no);
	break;
	case 2:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : FORD ECOSPORT";
						cout<<"\nmileage     : 14.8km/ltr";
							cout<<"\nfueloil     : DIESEL / PETROL \n ";
								price=5000; 
									cout<<"price     : "<<price<<"/day";
										
									cout<<"\nHow many FORD ECOSPORT car do u want :";
								cin>>no;
						
						cout<<"\nFor how many days do you want this car :";
					cin>>days;
			
		fprice(price,days,no);
	break;
	case 3:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : FORD ENDEAVOUR";
					
						cout<<"\nmileage   : 10.91/ltr";
							cout<<"\nfueloil   : PETROL\n";
								price=1450; 
									cout<<"price     : "<<price<<"/day";
										
									cout<<"\nHow many FORD ECOSPORTcar do u want :";
								cin>>no; 
							
						cout<<"\nFor how many days do you want this car :";
					cin>>days;
				
		fprice(price,days,no);
	break;
	default:
			system("cls");
				cout<<"This option is not available, Choose the correct option";
					FORD7();	
						break;
	}	
}
void car :: maruti7()
{
			cout<<"press 1 for MARUTI SUZUKI K10\n";
				cout<<"press 2 for MARUTI SUZUKI VITARA BREZZA\n";
					cout<<"press 3 for MARUTI SUZUI-CROSS\n";
						cout<<"press 4 for MARUTI SUZUKI ERTIGA\n";
							cin>>modal;
	switch(modal)
	{
	case 1:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : MARUTI SUZUKI K10";
				
						cout<<"\nmileage   : 24.07km/ltr";
							cout<<"\nfueloil   : DIESEL / PETROL\n";
								price=800; 
									cout<<"price     : "<<price<<"/day";
										
									cout<<"\nHow many MARUTI SUZUKI K10 car do u want :";
								cin>>no; 
						cout<<"\nFor how many days do you want this car :";
					cin>>days;
				
		fprice(price,days,no);
	break;
	case 2:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : MARUTI SUZUKI VITARA BREZZA";
					
						cout<<"\nmileage   : 24.5km/ltr\n";
							cout<<"fueloil     : DIESEL\n";
								price=1050; 
									cout<<"price     : "<<price<<"/day";
									cout<<"\nHow many MARUTI SUZUKI VITARA BREZZA car do u want :";
								cin>>no; 
						cout<<"\nFor how many days do you want this car :";
					cin>>days;
			
		fprice(price,days,no);
	break;
	case 3:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  :  MARUTI SUZUI-CROSS";
						cout<<"\nmileage   : 19.12/ltr";
							cout<<"\nfueloil   : PETROL/DIESEL\n";
								price=1100; 
									cout<<"price     : "<<price<<"/day";
									cout<<"\nHow many MARUTI SUZUI-CROSS car do u want :";
								cin>>no; 
						cout<<"\nFor how many days do you want this car : ";
					cin>>days;		
			
		fprice(price,days,no);
	break;
	case 4:
		cout<<"DETAILS OF CAR\n";
			cout<<"---------------\n";
				cout<<"car name  : MARUTI SUZUKI ERTIGA";
				
						cout<<"\nmileage   : 17.03/ltr";
							cout<<"\nfueloil   : DIESEL / PETROL\n";
								price=1000; 
									cout<<"price     : "<<price<<"/day";
									
									cout<<"\nHow many MARUTI SUZUKI ERTIGA car do u want :";
								cin>>no; 
							
						cout<<"\nFor how many days do you want this car : ";
					cin>>days;	
			
			fprice(price,days,no);
		break;
		default:
			system("cls");
				cout<<"This option is not available, Choose the correct option";
					maruti7();	
						break;	
	}	
}
void car :: fprice(int rate,int day,int no)
{	

		count=count+no;
			total_price=rate*day*no;
				cout<<"\nprice of "<<no<< " car for "<<day<<" days : "<<total_price;					
				c=c+total_price;
					cout<<"\npress 1 if u want another car : ";
						cin>>neww;
							if(neww==1)
							{
								system("cls");
									seater();
							}
								else
									final();
}
void car::final()
{ 
	system("cls");

			cout<<"\n\t\t\t\t\t\t\t\tCUSTOMER DETAILS\n";
				cout<<"\t\t\t\t\t\t\t--------------------------------\n";
					cout<<"NAME        : "<<name<<endl;
						cout<<"ADDRESS     : "<<add<<endl;
							cout<<"PHONE NO.   : "<<phon<<endl;
								cout<<"NO. OF CARS TAKEN : "<<count<<endl;
									
										cout<<"Total Amount to be paid : "<<c<<endl;	
										
}	


int main()
{ 
		car b1;
			b1.input();
				b1.seater();
}
