// IM/2019/014 - Nadeera Gayantha

#include <iostream>
using namespace std;

int main()
{   

    //prices of the products
	int a=17, b=25, c=28, d=32; 
	
	// available coins in the bins 
	int one_dollar =100, two_dollar  =100, five_dollar  =100, ten_dollar =100; 
	
	//number of coins in the overflow 
	int over_flow_1=0, over_flow_2=0, over_flow_5=0, over_flow_10=0;	
	
	//coustermer payment 
	int pay_one, pay_two, pay_five, pay_ten; 
	
	//temoperary store the prices 
	int temp_one, temp_two, temp_five, temp_ten; 
	
	int product;
	
	//termination password - predefined as 12345 
	int password ; 
	
    // the main loop
	while (one_dollar !=0 || two_dollar  !=0 || five_dollar  !=0 || ten_dollar !=0 ) 
	{
		cout << "Welcome! \n" << endl;
		cout << "Enter 1 to buy the Product A price : $17 \nEnter 2 to buy the Product B price : $25 \nEnter 3 to buy the Product C price : $28 \nEnter 4 to buy the Product D price: $32"<< endl;
	
		cout << "Please Enter Product number (or the password): ";
		cin >> product; 
		
		if (product == 0) 
		{
			break; //this will break when there are no coins left
		}
		
		// if a invalid product number enterd this will run 
		while ( ! (product>=1 && product<=4 ) ) 
		{
			cout << "Invalid product number! try agin..." << endl;
			cout << "Enter 1 to buy the Product A price : $17 \nEnter 2 to buy the Product B price : $25 \nEnter 3 to buy the Product C price : $28 \nEnter 4 to buy the Product D price: $32" << endl;
			cout << "Please Enter Product number (or the password):  ";
			cin.clear();
			cin.ignore();
			cin >> product;
		}
	
		
		int price; 
		
		//the price of the product will be displayed
		switch (product)
		{
			case 1: 
				price=a;
				cout << "Your price is $17" << endl;
				break;
			case 2:
				price=b;
				cout << "Your price is $25 " << endl;
				break;
			case 3:
				price=c;
				cout << "Your price is $28 plese" << endl;
				break;
			case 4:
				price=d;
				cout << "Your price is $32 hello" << endl;
				break;
		}
		cout << endl;
		
		//initializing variables
		
		pay_one=0, pay_two=0, pay_five=0, pay_ten=0;
		
		temp_one=0, temp_two=0, temp_five=0, temp_ten=0;
		
		int count=0, lack=0, payment=0;	 // lack = the lacking amount 
		
		while(payment<price)
		{ 
			if (count!=0) 
			{
				lack = price-payment;
				cout << "$" << lack << " is insufficient! Insert remaining amount of insert" << endl;
			}
			cout << "please make sure Only to enter $1 $2 $5 and $10 coins of conins hello" << endl;
			
			cout << "Number of $1 coins: ";
			cin >> pay_one;
			cout << "Number of $2 coins: ";
			cin >> pay_two;
			cout << "Number of $5 coins: ";
			cin >> pay_five;
			cout << "Number of $10 coins in 10s: ";
			cin >> pay_ten;
			
			temp_one += pay_one;
			temp_two += pay_two;
			temp_five += pay_five;
			temp_ten += pay_ten;
			
			//the total amount 
			payment+=(pay_one*1 + pay_two*2 + pay_five*5 + pay_ten*10);
			
			//entering coins to relevant denomination reserve 
			one_dollar =pay_one;
			two_dollar  =pay_two;
			five_dollar  =pay_five;
			ten_dollar =pay_ten;
			
			pay_one=0, pay_two=0, pay_five=0, pay_ten=0;  // remaining values
			count++;
		}
		
		
		int balance = payment - price;
		int temp_balance=balance;
		pay_one=0, pay_two=0, pay_five=0, pay_ten=0;
		
		pay_ten=balance/10;
		if(ten_dollar  < pay_ten)
		{
			pay_ten = ten_dollar ;
		}
		balance = balance - pay_ten*10;
		
		pay_five=balance/10;
		if(five_dollar   < pay_five)
		{
			pay_five = five_dollar  ;
		}
		balance = balance - pay_five*5;  
		
		pay_two=balance/10;
		if(two_dollar   < pay_two)
		{
			pay_two = two_dollar  ;
		}
		balance = balance - pay_two*2;
		
		pay_one=balance/10;
		if(one_dollar  < pay_one)
		{
			pay_one = one_dollar ;
		}
		balance = balance - pay_one*1;
		
		bool changed = 1; 
		
		
		if(changed)
		{
			if(temp_balance==0)
			{
				cout << "Your Balance is $ " << temp_balance << endl;
			}
			else
			{
				cout << "Your Balance is " << temp_balance <<" Please Collect the amount!" << endl;
			}
		}
		else
		{
			cout << "sorry ! out of change ...returning your money ..." << payment << endl;
		}
		
		if (pay_ten)
		{
			cout << "$10: " << pay_ten << endl;
		}
		if (pay_five)
		{
			cout << "$5: " << pay_five << endl;
		}
		if (pay_two)
		{
			cout << "$2: " << pay_two << endl;
		}
		if (pay_one)
		{
			cout << "$1: " << pay_one << endl;
		}
		
		cout << "Have a nice day !" << endl << endl;
				
		//balance is deducted
		one_dollar -=pay_one;
		two_dollar  -=pay_two;
		five_dollar  -=pay_five;
		ten_dollar -=pay_ten;
		
		//move excess coins to relevant overflow bins
		if(one_dollar >120)
		{
			over_flow_1+=(one_dollar -100);
			one_dollar =100;	
		}
		if(two_dollar  >120)
		{
			over_flow_2+=(two_dollar  -100);
			two_dollar  =100;	
		}
		if(five_dollar  >120)
		{
			over_flow_5+=(five_dollar  -100);
			five_dollar  =100;	
		}
		if(ten_dollar >120)
		{
			over_flow_10+=(ten_dollar -100);
			ten_dollar =100;	
		}
		
		//reinitializing variables
		pay_one=0, pay_two=0, pay_five=0, pay_ten=0;
		temp_one=0, temp_two=0, temp_five=0, temp_ten=0;
		payment=0, balance=0;	
		
		//Owner terminates
		password =0;
		cout << "Press 0 to end! \nAuthorized personal can enter password: " ;
		cin >> password ;
		if(password ==12345)
		{
			break;
		}
		cout << endl;
	}
	cout << endl;
	
	
	if (password !=12345) 
	{// when the machine ran out of changes
		cout << "Out of Change! Please Check Denomination Reserves" << endl;
	}
	else
	{//when owner terminates the machine 
		cout << "Owner Terminated the Program" << endl;
	}
	
	// coins in denomination reserves
	cout << "Coins in each Denomination Reserve" << endl;
	cout << "Number of coins in $1 Reserve: " << one_dollar  << endl;
	cout << "Number of coins in $2 Reserve: " << two_dollar   << endl;
	cout << "Number of coins in $5 Reserve: " << five_dollar   << endl;
	cout << "Number of coins in $10 Reserve: " << ten_dollar  << endl << endl;
	
	// coins in overflow bin
	cout << "Coins in each Overflow Bin" << endl;
	cout << "Number of coins in $1 Reserve: " << over_flow_1 << endl;
	cout << "Number of coins in $2 Reserve: " << over_flow_2 << endl;
	cout << "Number of coins in $5 Reserve: " << over_flow_5 << endl;
	cout << "Number of coins in $10 Reserve: " << over_flow_10 << endl << endl;
	
	
}
