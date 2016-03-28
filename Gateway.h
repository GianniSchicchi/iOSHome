//
//  Gateway.h
//  Kalay Home
//
//  Created by peter_weng on 2015/4/13.
//  Copyright (c) 2015年 TUTK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SmartDevice/SmartDevBase.h>
#import "IOTCHomeAutomationCtrl.h"

#define Accessory_Items_Type_Gateway 1
#define Accessory_Items_Type_Light   2
#define Accessory_Items_Type_Plug    3
#define Accessory_Items_Type_IPCam   4

@protocol GatewayDelegate <NSObject>

@optional

@end


@interface Gateway : SmartDevBase <GatewayDelegate>

@end
