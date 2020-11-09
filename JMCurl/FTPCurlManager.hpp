//
//  FTPCurlManager.hpp
//  JMCurl
//
//  Created by jimi01 on 2020/7/27.
//  Copyright © 2020 jimi01. All rights reserved.
//

#ifndef FTPCurlManager_hpp
#define FTPCurlManager_hpp

#include <stdio.h>
#include "curl.h"

class FTPCurlManager {
public:
    struct CustomProgress
    {
        curl_off_t lastruntime; /* type depends on version, see above */
        CURL *curl;
    };
public:
    FTPCurlManager(){};
    ~FTPCurlManager(){};
    int FtpUpload(const char *remote_file_path,const char *local_file_path,const char *username,const char *password,long timeout, long tries = 3);
    int FtpDownload(const char *remote_file_path,const char *local_file_path,const char *username,const char *password,long timeout = 3);
};


#endif /* FTPCurlManager_hpp */
