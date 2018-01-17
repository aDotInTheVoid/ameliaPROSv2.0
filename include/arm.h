#ifndef _ARM_H_
#define _ARM_H_

#include "hardware.h"
#include <main.h>

void armSet(bool up, bool down, int* lmotors, int* rmotors){
    if (up){
        for(int i = 0; i < ARM_MOTORS_PER_SIDE; i++){
    		motorSet(lmotors[i], armSpeed);
    	}
        for(int i = 0; i < ARM_MOTORS_PER_SIDE; i++){
    		motorSet(rmotors[i], -armSpeed);
    	}
    }else if(down){
        for(int i = 0; i < ARM_MOTORS_PER_SIDE; i++){
            motorSet(lmotors[i], -armSpeed);
        }
        for(int i = 0; i < ARM_MOTORS_PER_SIDE; i++){
            motorSet(rmotors[i], armSpeed);
        }
    }else{
        for(int i = 0; i < ARM_MOTORS_PER_SIDE; i++){
    		motorSet(lmotors[i], 0);
    	}
        for(int i = 0; i < ARM_MOTORS_PER_SIDE; i++){
    		motorSet(rmotors[i], 0);
    	}
    }
}


#endif /* end of include guard: _ARM_H_ */
