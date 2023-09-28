#include<iostream>
using namespace std;

int main(){
   
    int no1 , no2 , option;

    
    cout<<"***************** A   S I M P L E   C A L C U L A T O R *****************\n\n"<<endl;
    
    cout<<"YOU'RE  REQUIRED  TO  ENTER  TWO  NUMBERS  TO  PERFORM    ARITHMETIC   OPERATIONS \n"<<endl;
    
    cout<<"ENTER NUMBER 1-: "<<endl;
    
    cin>>no1;
    cout<<endl;
    
    cout<<"ENTER NUMBER 2-: "<<endl;
    
    cin>>no2;
    cout<<endl;
    
    cout<<"CHOOSE THE ARITHMETIC OPERATION TO PERFORM. CHOOSE FROM - \n\nPRESS 1. for addition(\"+\")\n\nPRESS 2. for subtraction(\"-\")\n\nPRESS 3. for multiplication(\"*\")\n\nPRESS 4. for division(\"/\")"<<endl;
    
    cin>>option;
    cout<<endl;
    
    switch(option){
    
        case 1:
        cout<< "ANSWER IS = " << no1+no2<<endl;
        break;
    
        case 2:
        cout<< "ANSWER IS = " <<no1-no2<<endl;
        break;
    
        case 3:
        cout<< "ANSWER IS = " <<no1*no2<<endl;
        break;
    
        case 4:
        cout<< "ANSWER IS = " << no1/no2<<endl;
        break;
    
        default :
        cout<<"INVALID INPUT"<<endl;

    }


}