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

@class NSOrderedSet, NSSet, NSString, XCElementSnapshot;
@protocol XCTMatchingElementIterator;

@protocol XCTElementSetTransformer <NSObject>
- (id <XCTMatchingElementIterator>)iteratorForInput:(XCElementSnapshot *)arg1;
- (NSSet *)requiredKeyPathsOrError:(id *)arg1;
- (NSOrderedSet *)transform:(NSOrderedSet *)arg1 relatedElements:(id *)arg2;
@end

