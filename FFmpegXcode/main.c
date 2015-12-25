//
//  main.c
//  FFmpegXcode
//
//  Created by 吴建国 on 15/12/25.
//  Copyright © 2015年 wujianguo. All rights reserved.
//

#include <stdio.h>
#include "libavutil/log.h"
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"

int main(int argc, const char * argv[]) {
    av_log_set_flags(AV_LOG_SKIP_REPEATED);
    av_log_set_level(AV_LOG_DEBUG);
    avcodec_register_all();
    av_register_all();
    return 0;    return 0;
}
