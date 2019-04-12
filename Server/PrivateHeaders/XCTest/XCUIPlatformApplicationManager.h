// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr 12 2019 07:16:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <XCTest/XCUIElementTypes.h>
#import "CDStructures.h"
@protocol OS_dispatch_queue;
@protocol OS_xpc_object;

#import <objc/NSObject.h>

#import "XCUIApplicationManaging-Protocol.h"

@protocol XCUIPlatformApplicationServicesProviding;

@interface XCUIPlatformApplicationManager : NSObject <XCUIApplicationManaging>
{
    id <XCUIPlatformApplicationServicesProviding> _platformApplicationServicesProvider;
}

@property(readonly) id <XCUIPlatformApplicationServicesProviding> platformApplicationServicesProvider;

+ (BOOL)_shouldRetryForLaunchError:(id)arg1;
- (id)initWithPlatformApplicationServicesProvider:(id)arg1;
- (void)launchProcessWithPath:(id)arg1 bundleID:(id)arg2 arguments:(id)arg3 environmentVariables:(id)arg4 completion:(CDUnknownBlockType)arg5;


@end

