// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <XCTest/XCUIElementTypes.h>
#import "CDStructures.h"
@protocol OS_dispatch_queue;
@protocol OS_xpc_object;

@class NSNumber, XCUIApplication, XCUIApplicationProcess;

@protocol XCUIApplicationProcessTracker <NSObject>
- (XCUIApplicationProcess *)applicationProcessWithPID:(NSInteger)arg1;
- (XCUIApplicationProcess *)applicationProcessWithToken:(NSNumber *)arg1;
- (XCUIApplication *)monitoredApplicationWithProcessIdentifier:(NSInteger)arg1;
- (void)setApplicationProcess:(XCUIApplicationProcess *)arg1 forPID:(NSInteger)arg2;
- (void)setApplicationProcess:(XCUIApplicationProcess *)arg1 forToken:(NSNumber *)arg2;
@end

