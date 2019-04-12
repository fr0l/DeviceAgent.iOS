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

#import "XCTAutomationTarget-Protocol.h"
#import "XCTConnectionAccepting-Protocol.h"
#import "XCTRemoteApplicationAutomationTarget-Protocol.h"

@class DTXConnection, DTXProxyChannel, NSMutableArray, NSString, XCTAnimationsIdleNotifier, XCTElementQueryProcessor, XCTMainRunLoopIdleNotifier;
@protocol OS_dispatch_queue;

@interface XCTAutomationSession : NSObject <XCTRemoteApplicationAutomationTarget, XCTConnectionAccepting, XCTAutomationTarget>
{
    NSMutableArray *_connections;
    XCTElementQueryProcessor *_queryProcessor;
    NSObject<OS_dispatch_queue> *_queue;
    XCTMainRunLoopIdleNotifier *_runLoopIdleMonitor;
    XCTAnimationsIdleNotifier *_animationIdleNotifier;
    DTXConnection *_dtxConnection;
    DTXProxyChannel *_proxyChannel;
}

@property(readonly) XCTAnimationsIdleNotifier *animationIdleNotifier;
@property(readonly) NSMutableArray *connections;
@property(readonly) DTXConnection *dtxConnection;
@property(readonly) DTXProxyChannel *proxyChannel;
@property(readonly) XCTElementQueryProcessor *queryProcessor;
@property(readonly) NSObject<OS_dispatch_queue> *queue;
@property(readonly) XCTMainRunLoopIdleNotifier *runLoopIdleMonitor;

- (id)_XCT_attributesForElement:(id)arg1 attributes:(id)arg2;
- (id)_XCT_fetchMatchesForQuery:(id)arg1;
- (id)_XCT_notifyWhenAnimationsAreIdle;
- (id)_XCT_notifyWhenMainRunLoopIsIdle;
- (BOOL)acceptNewConnection:(id)arg1;
- (void)attributesForElement:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)fetchMatchesForQuery:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)listenForRemoteConnectionViaSerializedTransportWrapper:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyWhenAnimationsAreIdle:(CDUnknownBlockType)arg1;
- (void)notifyWhenMainRunLoopIsIdle:(CDUnknownBlockType)arg1;
- (void)requestHostAppExecutableNameWithReply:(CDUnknownBlockType)arg1;


@end

