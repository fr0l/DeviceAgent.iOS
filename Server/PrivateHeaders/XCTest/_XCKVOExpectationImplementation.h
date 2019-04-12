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

@class NSString, XCTKVOExpectation;
@protocol OS_dispatch_queue;

@interface _XCKVOExpectationImplementation : NSObject
{
    XCTKVOExpectation *_expectation;
    id _observedObject;
    NSString *_keyPath;
    id _expectedValue;
    NSUInteger _options;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasCleanedUp;
}

@property(readonly) id expectedValue;
@property(copy) CDUnknownBlockType handler;
@property(readonly, copy) NSString *keyPath;
@property(readonly) id observedObject;
@property(readonly) NSUInteger options;

- (void)cleanup;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2 expectedValue:(id)arg3 expectation:(id)arg4 options:(NSUInteger)arg5;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

