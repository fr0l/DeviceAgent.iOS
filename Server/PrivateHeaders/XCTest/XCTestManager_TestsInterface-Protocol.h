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

@class NSData, NSString, XCAccessibilityElement;

@protocol XCTestManager_TestsInterface
- (void)_XCT_applicationWithBundleID:(NSString *)arg1 didUpdatePID:(NSInteger)arg2 andState:(NSUInteger)arg3;
- (void)_XCT_receivedAccessibilityNotification:(NSInteger)arg1 fromElement:(XCAccessibilityElement *)arg2 payload:(NSData *)arg3;
- (void)_XCT_receivedAccessibilityNotification:(NSInteger)arg1 withPayload:(NSData *)arg2;
@end

