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

@interface XCTestObserver : NSObject
{
}

- (void)startObserving;
- (void)stopObserving;
- (void)testCaseDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(NSUInteger)arg4;
- (void)testCaseDidStart:(id)arg1;
- (void)testCaseDidStop:(id)arg1;
- (void)testSuiteDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(NSUInteger)arg4;
- (void)testSuiteDidStart:(id)arg1;
- (void)testSuiteDidStop:(id)arg1;

@end

