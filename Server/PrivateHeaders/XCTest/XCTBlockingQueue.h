// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 26 2020 14:08:26).
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

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface XCTBlockingQueue : NSObject
{
    BOOL _finalized;
    NSObject<OS_dispatch_queue> *_mutex;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSMutableArray *_objects;
}

@property BOOL finalized;
@property(readonly) NSObject<OS_dispatch_queue> *mutex;
@property(readonly) NSMutableArray *objects;
@property(readonly) NSObject<OS_dispatch_semaphore> *sema;

- (id)dequeueObject;
- (void)enqueueObject:(id)arg1;
- (void)enqueueObjects:(id)arg1;
- (void)finalize;

@end

