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

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface XCTAggregateSuiteRunStatistics : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_lastTestIdentifier;
    NSMutableDictionary *_recordMap;
}

@property(readonly) NSDictionary *dictionaryRepresentation;
@property(copy) NSString *lastTestIdentifier;
@property(readonly) NSMutableDictionary *recordMap;
@property(readonly) NSUInteger suiteRecordCount;
@property(readonly) NSArray *suiteRecords;

- (void)addSuiteRecord:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (BOOL)isEqualToStatistics:(id)arg1;
- (id)recordForSuiteNamed:(id)arg1;

@end

