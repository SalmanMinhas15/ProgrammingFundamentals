#include <iostream>
using namespace std;
float pyramidVol(float length,float height,float width,string desiredoutputunit);
main(){     
	float length,width,height;
	string desiredoutputunit;
	float result;
	cout<<"Enter the length of the pyramid (in meters): ";
	cin>>length;
	cout<<"Enter the width of the pyramid (in meters): ";
	cin>>width;
	cout<<"Enter the height of the pyramid (in meters): ";
	cin>>height;
	cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
	cin>>desiredoutputunit;
	result=pyramidVol(length, height, width, desiredoutputunit);
	cout<<"The volume of the pyramid is: " <<result<<" cubic "<<desiredoutputunit;
	
		
}
	
float pyramidVol(float length,float height,float width,string desiredoutputunit){
	
if(desiredoutputunit=="meters"){
	float volinMeter =(length*width*height)/3;
	return volinMeter;
		}
if(desiredoutputunit=="centimeters"){
	float volinCentimeter=(length*width*height*100)/3;
	return volinCentimeter;	}
if(desiredoutputunit=="millimeters"){
	float volinMillimeter=(length*width*height*1000)/3;
	return volinMillimeter;	}
if(desiredoutputunit=="kilometer"){
	float volinKilometer=(length*width*height)/(1000*3);
	return volinKilometer;	}
	return 0;
	}





	