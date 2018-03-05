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

@class NSError, NSString, XCTestExpectation;

@interface XCTPromise : NSObject
{
    NSError *_error;
    id _value;
    XCTestExpectation *_expectation;
    NSString *_promiseDescription;
}

@property(retain) NSError *error;
@property(readonly) XCTestExpectation *expectation;
@property(readonly) NSString *promiseDescription;
@property(retain) id value;

- (void)fulfillWithError:(id)arg1;
- (void)fulfillWithValue:(id)arg1;
- (void)fulfillWithValue:(id)arg1 error:(id)arg2;
- (id)initWithDescription:(id)arg1;

@end

