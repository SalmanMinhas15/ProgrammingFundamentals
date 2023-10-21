#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit,string dayofweek,double q);
main(){
    string fruit,dayofweek;float result;
    double q;
    cout<<"Enter the fruit name: ";
    cin>>fruit;
    cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
    cin>>dayofweek;
    cout<<"Enter the quantity: ";
    cin>>q;
    result= calculateFruitPrice(fruit,dayofweek,q);
    if(result==0.0){
        cout<<"error";
    }
    else{
        cout<<result;
    }
    
}
float calculateFruitPrice(string fruit,string dayofweek,double q){
  if(dayofweek=="Monday" || dayofweek=="Tuesday" || dayofweek=="Wednesday" || dayofweek=="Thursday" || dayofweek=="Friday" || dayofweek=="Saturday"){
    if(fruit=="banana"){
        return 2.50*q;
    }
    else if(fruit=="apple"){
        return 1.20*q;
    }
     else if(fruit=="orange"){
        return 0.85*q;
    }
     else if(fruit=="grapefruit"){
        return 1.45*q;
    }
     else if(fruit=="kiwi"){
        return 2.70*q;
    }
     else if(fruit=="pineapple"){
        return 5.50*q;
    }
     else if(fruit=="grapes"){
        return 3.85*q;
    }
    
  }
  if(dayofweek=="Sunday"){
     if(fruit=="banana"){
        return 2.70*q;
    }
    else if(fruit=="apple"){
        return 1.25*q;
    }
     else if(fruit=="orange"){
        return 0.90*q;
    }
     else if(fruit=="grapefruit"){
        return 1.60*q;
    }
     else if(fruit=="kiwi"){
        return 3.00*q;
    }
     else if(fruit=="pineapple"){
        return 5.60*q;
    }
     else if(fruit=="grapes"){
        return 4.20*q;
    }
  }
   
if((dayofweek!="Monday" || dayofweek!="Tuesday" || dayofweek!="Wednesday" || dayofweek!="Thursday" || dayofweek!="Friday" || dayofweek!="Saturday" || dayofweek!="Sunday") || (fruit!="banana")||(fruit!="apple")||(fruit!="orange")||(fruit!="grapefruit")||(fruit!="kiwi")||(fruit!="pineapple")||(fruit!="grapes")){
    return 0.0;
}

}