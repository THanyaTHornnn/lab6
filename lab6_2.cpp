#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double D){
    return (D*M_PI)/180;
}
double rad2deg(double R){
    return (180*R)/M_PI;
}
double findXComponent(double L1,double L2,double a1,double a2){
    double xcomp = (L1*cos(a1))+(L2*cos(a2));
    return xcomp;
}
double findYComponent(double L1,double L2,double a1,double a2){
    double ycomp = (L1*sin(a1))+(L2*sin(a2));
    return ycomp;
}
double pythagoras(double xcomp,double ycomp){
    double resultvL = sqrt(pow(xcomp,2) + pow(ycomp,2)) ;
    return resultvL;
}
void showResult(double resultvL,double resultvD){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << resultvL << endl;
    cout << "Direction of the resultant vector (deg) = " << resultvD << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
     
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
