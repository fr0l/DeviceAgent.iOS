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

@class XCAccessibilityElement, XCElementSnapshot, XCUIApplicationImpl, XCUIApplicationMonitor;


@protocol XCTRunnerAutomationSession;
@protocol XCUIAccessibilityInterface;

@interface XCUIApplicationProcess : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _accessibilityActive;
    NSUInteger _applicationState;
    NSInteger _processID;
    id _token;
    NSInteger _exitCode;
    BOOL _eventLoopHasIdled;
    BOOL _hasReceivedEventLoopHasIdled;
    BOOL _animationsHaveFinished;
    BOOL _hasReceivedAnimationsHaveFinished;
    BOOL _hasExitCode;
    BOOL _hasCrashReport;
    XCUIApplicationImpl *_applicationImplementation;
    id <XCTRunnerAutomationSession> _automationSession;
    XCElementSnapshot *_lastSnapshot;
    XCUIApplicationMonitor *_applicationMonitor;
    id <XCUIAccessibilityInterface> _axInterface;
}

@property(nonatomic) BOOL accessibilityActive;
@property(readonly, copy) XCAccessibilityElement *accessibilityElement;
@property BOOL animationsHaveFinished;
@property XCUIApplicationImpl *applicationImplementation;
@property(retain) XCUIApplicationMonitor *applicationMonitor;
@property(nonatomic) NSUInteger applicationState;
@property(retain) id <XCTRunnerAutomationSession> automationSession;
@property(retain) id <XCUIAccessibilityInterface> axInterface;
@property(readonly) BOOL background;
@property BOOL eventLoopHasIdled;
@property NSInteger exitCode;
@property(readonly) BOOL foreground;
@property BOOL hasCrashReport;
@property BOOL hasExitCode;
@property BOOL hasReceivedAnimationsHaveFinished;
@property BOOL hasReceivedEventLoopHasIdled;
@property(retain) XCElementSnapshot *lastSnapshot;
@property(nonatomic) NSInteger processID;
@property(readonly) BOOL running;
@property(retain) id token;
@property(readonly) BOOL suspended;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingBackground;
+ (id)keyPathsForValuesAffectingForeground;
+ (id)keyPathsForValuesAffectingRunning;
+ (id)keyPathsForValuesAffectingSuspended;
- (void)_awaitKnownApplicationState;
- (id)_queue_description;
- (void)acquireBackgroundAssertion;
- (id)initWithApplicationMonitor:(id)arg1 axInterface:(id)arg2;
- (id)shortDescription;
- (void)terminate;
- (void)waitForAutomationSession;
- (void)waitForQuiescenceIncludingAnimationsIdle:(BOOL)arg1;
- (void)waitForViewControllerViewDidDisappearWithTimeout:(double)arg1;

@end

