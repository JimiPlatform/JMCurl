//
//  FtpOperate.hpp
//  JMCurl
//
//  Created by jimi01 on 2020/7/27.
//  Copyright © 2020 jimi01. All rights reserved.
//

#ifndef FtpOperate_hpp
#define FtpOperate_hpp

#include <stdio.h>
#include "curl.h"
class FtpOperate {
private:
    
public:
    FtpOperate(){};
    ~FtpOperate();
    //ftp目录文件信息
    struct FtpDirFileInfo
    {
//        char szFileName[MAX_PATH];                //文件名称
        unsigned char ucIsDir;                    //是否是目标
        unsigned char ucReserve[3];                //保留值
        unsigned int uiFileSize;                //文件大小
    };
    
};

#endif /* FtpOperate_hpp */
