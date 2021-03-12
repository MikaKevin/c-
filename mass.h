#ifndef MASS_H
#define MASS_H


class mass
{
    public:
        float weight;
        float velocity;
        float height;
    float getEnergy(){
        return weight*velocity*velocity+height*weight/2;
    }
    float getMomentum(){
        return velocity*weight;
    }
    void changeVelocity(float velocitynew){
        velocity = velocitynew;
    }
    void changeWeight(float weightgain){
        weight=weight+weightgain;
    }
    mass(float x,float y, float z){
        weight = x;
        velocity = y;
        height = z;
    }
};

#endif // MASS_H
