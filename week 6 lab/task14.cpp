#include<iostream>
using namespace std;
string cost(string category,float budget,int people);
main(){
    string category,result;float budget;int people;
    cout<<"Enter the budget: ";
    cin>>budget;
    cout<<"Enter the category (VIP/Normal): ";
    cin>>category;
    cout<<"Enter the number of people in the group: ";
    cin>>people;
    result=cost(category,budget,people);
    return 0.0;
}
string cost(string category,float budget,int people){
     float totalcost,money;
    if(people<=4 && category=="VIP"){
        budget=budget-(budget*0.75);
        totalcost=people*499.99;
        if(totalcost<budget){
            money=budget-totalcost;
            cout<< "Yes! You have "<<money<<" leva left.";
        }
        else{
            money=totalcost-budget;
            cout<< "Not enough money! You need "<<money<<" leva.";
        }

    }
     if((people<=4 )&& category=="Normal"){
        budget=budget-(budget*0.75);
        totalcost=people*249.99;
        if(totalcost<budget){
            money=budget-totalcost;
            cout<< "Yes! You have "<<money<<" leva left.";
        }
        else{
            money=totalcost-budget;
            cout<< "Not enough money! You need "<<money<<" leva.";
        }

    }
    
    if((people>4 && people<=9 )&& category=="VIP"){
        budget=budget-(budget*0.60);
        totalcost=people*499.99;
        if(totalcost<budget){
            money=budget-totalcost;
            cout<< "Yes! You have "<<money<<" leva left.";
        }
        else{
            money=totalcost-budget;
            cout<< "Not enough money! You need "<<money<<" leva.";
        }

    }
     if((people>4 && people<=9 )&& category=="Normal"){
        budget=budget-(budget*0.60);
        totalcost=people*249.99;
        if(totalcost<budget){
            money=budget-totalcost;
            cout<< "Yes! You have "<<money<<" leva left.";
        }
        else{
            money=totalcost-budget;
            cout<< "Not enough money! You need "<<money<<" leva.";
        }

    }
     if((people>9 && people<=24 )&& category=="VIP"){
        budget=budget-(budget*0.50);
        totalcost=people*499.99;
        if(totalcost<budget){
            money=budget-totalcost;
            cout<< "Yes! You have "<<money<<" leva left.";
        }
        else{
            money=totalcost-budget;
            cout<< "Not enough money! You need "<<money<<" leva.";
        }

    }
    if((people>9 && people<=24 )&& category=="Normal"){
        budget=budget-(budget*0.50);
        totalcost=people*249.99;
        if(totalcost<budget){
            money=budget-totalcost;
            cout<< "Yes! You have "<<money<<" leva left.";
        }
        else{
            money=totalcost-budget;
            cout<< "Not enough money! You need "<<money<<" leva.";
        }

    }
     if((people>=25 && people<=49) && category=="Normal"){
        budget=budget-(budget*0.40);
        totalcost=people*249.99;
        if(totalcost<budget){
            money=budget-totalcost;
            cout<< "Yes! You have "<<money<<" leva left.";
        }
        else{
            money=totalcost-budget;
            cout<< "Not enough money! You need "<<money<<" leva.";
        }

    }
     if((people>=25 && people<=49) && category=="VIP"){
        budget=budget-(budget*0.40);
        totalcost=people*499.99;
        if(totalcost<budget){
            money=budget-totalcost;
            cout<< "Yes! You have "<<money<<" leva left.";
        }
        else{
            money=totalcost-budget;
            cout<< "Not enough money! You need "<<money<<" leva.";
        }

    }
      
     if( people>49 && category=="VIP"){
        budget=budget-(budget*0.25);
        totalcost=people*499.99;
        if(totalcost<budget){
            money=budget-totalcost;
            cout<< "Yes! You have "<<money<<" leva left.";
        }
         else{
            money=totalcost-budget;
            cout<< "Not enough money! You need "<<money<<" leva.";
        }

    }
    if( people>49 && category=="Normal"){
        budget=budget-(budget*0.25);
        totalcost=people*249.99;
        if(totalcost<budget){
            money=budget-totalcost;
            cout<< "Yes! You have "<<money<<" leva left.";
        }
         else{
            money=totalcost-budget;
            cout<< "Not enough money! You need "<<money<<" leva.";
        }

    }
    
}