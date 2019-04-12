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


@class NSArray, NSMutableArray, NSString;

@interface XCSynthesizedEventRecord : NSObject <NSSecureCoding>
{
    NSMutableArray *_eventPaths;
    NSString *_name;
    NSInteger _interfaceOrientation;
}

@property(readonly) NSArray *eventPaths;
@property(readonly) NSInteger interfaceOrientation;
@property(readonly) double maximumOffset;
@property(readonly, copy) NSString *name;

- (void)addPointerEventPath:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 interfaceOrientation:(NSInteger)arg2;
- (BOOL)synthesizeWithError:(id *)arg1;
- (void)unsetInterfaceOrientation;

@end

