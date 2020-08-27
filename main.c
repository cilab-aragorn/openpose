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
    
    system("./build/examples/openpose/openpose.bin --video examples/media/layup_normal3.mp4 --write_json examples/layup_normal3 --display 0 --render_pose 0");

    return 0;
}
