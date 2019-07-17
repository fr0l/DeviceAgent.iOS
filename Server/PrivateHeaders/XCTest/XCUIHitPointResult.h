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

@interface XCUIHitPointResult : NSObject
{
    BOOL _hittable;
    CGPoint _hitPoint;
}

@property(readonly) CGPoint hitPoint;
@property(readonly, getter=isHittable) BOOL hittable;

- (id)initWithHitPoint:(CGPoint)arg1 hittable:(BOOL)arg2;

@end

