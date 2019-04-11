// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//


#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <XCTest/XCUIElementTypes.h>
#import "CDStructures.h"
@protocol OS_dispatch_queue;
@protocol OS_xpc_object;

@class NSArray, NSDictionary, NSString, XCUIApplicationSpecifier;
@protocol XCUIApplicationPlatformServicesProviderDelegate;

@protocol XCUIPlatformApplicationServicesProviding <NSObject>
- (void)beginMonitoringApplicationWithSpecifier:(XCUIApplicationSpecifier *)arg1;
- (void)launchApplicationWithPath:(NSString *)arg1 bundleID:(NSString *)arg2 arguments:(NSArray *)arg3 environment:(NSDictionary *)arg4 completion:(void (^)(BOOL, NSError *))arg5;
- (void)requestApplicationSpecifierForPID:(NSInteger)arg1 reply:(void (^)(XCUIApplicationSpecifier *, NSError *))arg2;
- (void)terminateApplicationWithBundleID:(NSString *)arg1 pid:(NSInteger)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end
