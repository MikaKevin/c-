#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

double getmean(double arr[],int len){
    double sum = 0;
    for (int i=0;i < len;i++){
        sum=sum + arr[i];
    }
    return sum/len;
}
double getvar(double arr[],int len){
    double var;
    double arrmean = getmean(arr,len);
    for (int i = 0; i < len;i++){
        var = var + (arr[i]-arrmean)*(arr[i]-arrmean);
    }
    var = var /len;
    return var;
}
double getstd(double arr[],int len){
    double arrstd;
    double arrvar = getvar(arr,len);
    arrstd = sqrt (arrvar);
    return arrstd;
}
double getpearson(double arrx[],double arry[],int len,double arrxmean, double arrymean){
    double r;
    double temp_r_above;
    double temp_r_belx;
    double temp_r_bely;

    for (int k=0; k < len; k++){
        temp_r_above = temp_r_above + (arrx[k]-arrxmean)*(arry[k]-arrymean) ;
        temp_r_belx = temp_r_belx + (arrx[k]-arrxmean)*(arrx[k]-arrxmean) ;
        temp_r_bely = temp_r_bely + (arry[k]-arrymean)*(arry[k]-arrymean) ;
    }

    r = temp_r_above/(sqrt(temp_r_belx)*sqrt(temp_r_bely));
    return r;
}
double * linregress(double arrx[],double arry[],int len){
    double params[2];
    double arr_r = getpearson(arrx,arry,len,getmean(arrx,len),getmean(arry,len));
    double arr_varx = getvar(arrx,len);
    double arr_vary = getvar(arry,len);
    // mx+b, b = [1],m=[0]
    params[0] = arr_r*arr_vary/arr_varx;
    params[1] = getmean(arry,len)-params[0]*getmean(arrx,len);
    return params;
}
int main(){
    double x[] = {1,2,3,4,5,6};
    double y[] = {2,4,6,8,10,12};
    int length = sizeof x /sizeof x[0];
    //cout << getpearson(x,y,length,getmean(x,length),getmean(y,length));
    //cout << linregress(x,y,length)[1];
    return 0;
}

