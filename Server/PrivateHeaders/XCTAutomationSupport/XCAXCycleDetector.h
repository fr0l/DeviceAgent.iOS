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

@class NSArray, NSMutableOrderedSet;

@interface XCAXCycleDetector : NSObject
{
    NSMutableOrderedSet *_elementStack;
}

@property(readonly) NSArray *currentElementPath;

+ (id)_cycleDescriptionForElementStack:(id)arg1;
- (id)_cycleDescriptionForElementWithCurrentStack:(id)arg1;
- (id)_cycleErrorForElement:(id)arg1;
- (BOOL)trackElement:(id)arg1 error:(id *)arg2;
- (void)untrackElement:(id)arg1;

@end

