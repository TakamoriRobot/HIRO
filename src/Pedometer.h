#ifndef Pedometer_h
#define Pedometer_h

class Pedometer{ // A Pedometer instance keeps track of how far a robot has traveled, and its 
    private:
        float pedX = 0; //Keeps track of the robot's movement in the X axis using pedometry.
        float pedY = 0; //Keeps track of the robot's movement in the Y axis using pedometry
        float pedRot = 0; //Keeps track of the robot's rotation along the Z axis using pedometry. 0 <= pedRot <= 359. pedRot increases going clockWise
        float pedometry = 0; // Keeps track of the total distance the robot has traveled using pedometry.
    
    float getPedX(); //returns pedX
    float getPedY(); //returns pedY
    float getPedRot(); //returns pedRot
    float getPedometry();//returns pedometry
    float resetPedometry(); //Set pedX, pedY, pedRot, & pedometry to zero
    void iteratePedometry(float delta);
    
}

#endif