#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    string sname[100];
    int smarks[100];
    int sum =0;
    int count = 0;
    double avgGrade;
    float lowGrade = INT_MAX;
    float highGrade =INT_MIN;
    char choice;

    do {
        cout<<"E N T E R   S T U D E N T  N A M E" <<endl;
        cin>> sname[count];
        cout<<"E N T E R   M A R K S "<<endl;
        cin>>smarks[count];

        sum +=smarks[count];

        if(smarks[count] >= highGrade){
            highGrade = smarks[count];
        }
        if(smarks[count] <= lowGrade){
            lowGrade = smarks[count];
        }
        count++;

        cout<<"W A N T  T O  C O N T I N U E   A D D I N G   D E T A I L S ? \n"<<endl;
        cout<<"PRESS \"y\" or \"Y\" to continue adding\n \nTo exit press any other key\n"<<endl;
        cin>>choice;
        
    }while(choice ==  'y' ||choice == 'Y');
    if(count>0){
        avgGrade = sum/count;
        cout<<"Average GRADE = " << avgGrade<<endl;
        cout<<"LOWEST GRADE = "<< lowGrade<<endl;
        cout<<"Highest GRADE = "<< highGrade<<endl;
    }
    else{
        cout << " N O  D A T A  F O U N D"<<endl;
    }
    return 0;
}