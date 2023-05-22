/*
 * Copyright (c) 2011-2019, Zingaya, Inc. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <VoxImplantSDK/VoxImplantSDK.h>
#import "RCTBridgeModule.h"
#import "RCTEventEmitter.h"

@interface RNVIAudioDeviceModule : RCTEventEmitter <RCTBridgeModule, VIAudioManagerDelegate>
@end
