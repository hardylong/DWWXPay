//
//  DWGetIP.h
//  DWWXPay
//
//  Created by dwang_sui on 16/9/15.
//  Copyright © 2016年 dwang. All rights reserved.
//

#import <Foundation/Foundation.h>

/** 获取本机IP */
#ifndef IPAddress_h
#define IPAddress_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/sockio.h>
#include <net/if.h>
#include <errno.h>
#include <net/if_dl.h>
#include <net/ethernet.h>

#define BUFFERSIZE  4000
#define MAXADDRS    32
#define min(a,b)    ((a) < (b) ? (a) : (b))
#define max(a,b)    ((a) > (b) ? (a) : (b))

extern char *if_names[MAXADDRS];
extern char *ip_names[MAXADDRS];
extern char *hw_addrs[MAXADDRS];
extern unsigned long ip_addrs[MAXADDRS];

// Function prototypes
void InitAddresses();
void FreeAddresses();
void GetIPAddresses();
void GetHWAddresses();


#endif /* IPAddress_h */

@interface DWGetIP : NSObject

@end
