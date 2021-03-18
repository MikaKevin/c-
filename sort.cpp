#include <iostream>
using namespace std;
double* sortarr(double arr[],int len){
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

double* findMultiples(double arr[],int len){
    //should i consider, that the array is sorted?
    //nope
    double temp__[len];
    int temp_ind = 0;
    int counter = 1;
    for (int i=0;i<len;i++){
        for (int j=i+1;j<len;j++){
            if (arr[i] == arr[j]){
                 counter = counter + 1;
            }
        }
        if (counter > 1){
            temp__[temp_ind] = arr[i];
            temp_ind = temp_ind+1;
            counter = 1;
            }
    }
    double output[temp_ind];
    for (int k=0;k<temp_ind;k++){
        output[k]=temp__[k];
        cout << output[k];
        cout << "\n";
    }
    return output;
}

int main(){
    double x[] = {3,2,1,3,6,7,7};
    int length = sizeof x /sizeof x[0];
    //sortarr(x,length);
    findMultiples(x,length);
 /*   double sorted[] = sortarr(x,length);
    for (int a=0;a<length;a++){
        cout << sorted[a];
        cout << "\n";
    }**/
    return 0;
}
