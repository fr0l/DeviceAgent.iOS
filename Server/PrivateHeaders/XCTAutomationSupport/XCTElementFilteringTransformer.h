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

#import "XCTElementSetCodableTransformer.h"

@class NSPredicate;

@interface XCTElementFilteringTransformer : XCTElementSetCodableTransformer
{
    NSInteger _scope;
    NSPredicate *_predicate;
}

@property(readonly, copy) NSPredicate *predicate;
@property(readonly) NSInteger scope;

- (id)_scopedExpansionOfInput:(id)arg1;
- (BOOL)canBeRemotelyEvaluatedWithCapabilities:(id)arg1;
- (id)initWithScope:(NSInteger)arg1 predicate:(id)arg2;
- (id)iteratorForInput:(id)arg1;
- (id)requiredKeyPathsOrError:(id *)arg1;
- (BOOL)supportsAttributeKeyPathAnalysis;
- (BOOL)supportsRemoteEvaluation;
- (id)transform:(id)arg1 relatedElements:(id *)arg2;

@end

