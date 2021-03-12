#include <iostream>
using namespace std;
double * sortarr(double arr[],int len){
    double output[len];
    for (int j=0;j<len;j++){
        output[j]=arr[j];
    }
    for (int i=0;i<len;i++){
            for (int k=i;k<len;k++){
                if (output[i]>output[k]){
                    double temp = output[i];
                    output[i] = output[k];
                    output[k] = temp;
                    i = 0;
                }
            }
    }
    for (int a=0;a<len;a++){
        cout << output[a];
        cout << "\n";
    }
    return output;
}


int main(){
    double x[] = {4,3,1,2,8,10,7,4};
    int length = sizeof x /sizeof x[0];
    sortarr(x,length);
 /*   double sorted[] = sortarr(x,length);
    for (int a=0;a<length;a++){
        cout << sorted[a];
        cout << "\n";
    }**/
    return 0;
}
