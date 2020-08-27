//
//  main.c
//  command_test
//
//  Created by Cheng Yuan Ｗang on 2019/4/5.
//  Copyright © 2019 Cheng Yuan Ｗang. All rights reserved.
//

//#include<windows.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    
    system("./build/examples/openpose/openpose.bin --video examples/media/layup_wrong_first2.mp4 --write_images examples/layup_wrong_first2_img --display 0");

    return 0;
}
