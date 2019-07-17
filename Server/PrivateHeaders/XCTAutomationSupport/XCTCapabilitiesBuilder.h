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

@class NSMutableDictionary, XCTCapabilities;

@interface XCTCapabilitiesBuilder : NSObject
{
    NSMutableDictionary *_capabilitiesDictionary;
}

@property(readonly, copy) XCTCapabilities *capabilities;
@property(readonly, copy) NSMutableDictionary *capabilitiesDictionary;

- (void)registerCapability:(id)arg1;
- (void)registerCapability:(id)arg1 version:(NSUInteger)arg2;
- (void)upgradeCapability:(id)arg1 toVersion:(NSUInteger)arg2;

@end

