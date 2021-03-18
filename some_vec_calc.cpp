#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
/* given a set of vectors
**/
float getdistance(vector<float> vec1,vector<float> vec2){
    float sum=0;
    for(int i=0;i<vec1.size();i++){
       sum = sum + pow((vec2[i]-vec1[i]),2);
    }
    float dist =  sqrt (sum);
    return dist;
}
float ScalarMult(vector<float> vec1,vector<float> vec2){
    float sum=0;
    for (int k=0;k<vec1.size();k++){
        sum = sum + vec1[k]*vec2[k];
    }
    return sum;
}
float vecmag(vector<float> vec){
    float mag = 0;
    for (int j=0;j<vec.size();j++){
        mag = mag + pow(vec[j],2);
    }
    mag = sqrt(mag);
    return mag;
}
float vecangle(vector<float> vec1,vector<float> vec2){
    float nominator = ScalarMult(vec1,vec2);
    float denominator = vecmag(vec1)*vecmag(vec2);
    return acos(nominator/denominator);
}
vector<float> veccross(vector<float> vec1,vector<float> vec2){
    //so far i only remember how to calculate cross product in 3d
    vector<float> output;
    output[0] = vec1[1]*vec2[2]-vec1[2]*vec2[1];
    output[1] = vec1[2]*vec2[0]-vec1[0]*vec2[2];
    output[2] = vec1[0]*vec2[1]-vec1[1]*vec2[0];
    return output;
}
int main(){
    //just for testing the functions
    int aa[] = { 1, 0, 1};
    int n = sizeof(aa) / sizeof(aa[0]);

    vector<float> a(aa, aa + n);
    int bb[] = { 0, 1, 1};

    vector<float> b(bb, bb + n);
    cout << getdistance(a,b);
    return 0;
}
