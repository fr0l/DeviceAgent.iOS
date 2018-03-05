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

@class NSArray, NSDictionary, NSInvocation, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSThread, XCTAttachmentManager, XCTWaiter, XCTestCaseRun, XCUITestContext;

@interface _XCTestCaseImplementation : NSObject
{
    NSInvocation *_invocation;
    NSThread *_primaryThread;
    XCTestCaseRun *_testCaseRun;
    BOOL _continueAfterFailure;
    NSMutableSet *_expectations;
    NSArray *_activePerformanceMetricIDs;
    NSMutableDictionary *_perfMetricsForID;
    NSUInteger _startWallClockTime;
    struct time_value _startUserTime;
    struct time_value _startSystemTime;
    NSUInteger _measuringIteration;
    BOOL _isMeasuringMetrics;
    BOOL _didMeasureMetrics;
    BOOL _didStartMeasuring;
    BOOL _didStopMeasuring;
    NSString *_filePathForNestedFailure;
    NSUInteger _lineNumberForNestedFailure;
    NSInteger _runLoopNestingCount;
    XCTWaiter *_currentWaiter;
    NSMutableArray *_failureRecords;
    BOOL _shouldHaltWhenReceivesControl;
    BOOL _shouldIgnoreSubsequentFailures;
    NSMutableArray *_teardownBlocks;
    BOOL _hasDequeuedTeardownBlocks;
    BOOL _hasAttemptedToCaptureScreenshotOnFailure;
    XCTAttachmentManager *_attachmentManager;
    NSDictionary *_activityAggregateStatistics;
    XCUITestContext *_testContext;
}

@property(copy) NSArray *activePerformanceMetricIDs;
@property(copy) NSDictionary *activityAggregateStatistics;
@property(retain) XCTAttachmentManager *attachmentManager;
@property BOOL continueAfterFailure;
@property(retain, nonatomic) XCTWaiter *currentWaiter;
@property BOOL didMeasureMetrics;
@property BOOL didStartMeasuring;
@property BOOL didStopMeasuring;
@property(retain, nonatomic) NSMutableSet *expectations;
@property(retain, nonatomic) NSMutableArray *failureRecords;
@property(copy) NSString *filePathForNestedFailure;
@property BOOL hasAttemptedToCaptureScreenshotOnFailure;
@property BOOL hasDequeuedTeardownBlocks;
@property(retain) NSInvocation *invocation;
@property BOOL isMeasuringMetrics;
@property NSUInteger lineNumberForNestedFailure;
@property NSUInteger measuringIteration;
@property(retain) NSMutableDictionary *perfMetricsForID;
@property(retain) NSThread *primaryThread;
@property NSInteger runLoopNestingCount;
@property BOOL shouldHaltWhenReceivesControl;
@property BOOL shouldIgnoreSubsequentFailures;
@property struct time_value startSystemTime;
@property struct time_value startUserTime;
@property NSUInteger startWallClockTime;
@property(retain) XCTestCaseRun *testCaseRun;
@property(readonly) NSMutableArray *teardownBlocks;
@property(readonly) XCUITestContext *testContext;

- (void)addExpectation:(id)arg1;
- (void)resetExpectations;

@end

