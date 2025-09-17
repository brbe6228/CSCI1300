#include<iostream>

using namespace std;

int main()
{
    int glasses;
    int glasses_remain;

    cout<<"How many glasses of water have you had today?"<<endl;
    cin>>glasses;

    glasses_remain=7-glasses;

    if (glasses<=3){
        cout<<"You are falling behind! Drink more water! You have "<<glasses_remain<<" left to drink."<<endl;
        return 0;
    }
    else if (glasses>3){
        cout<<"You're doing well! Keep it up! You still have "<<glasses_remain<<" left to drink."<<endl;
    }
    else if(glasses>=7){
        cout<<"Congratulations! You've hit your water goal for the day! Stay hydrated!"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    return 0;


}