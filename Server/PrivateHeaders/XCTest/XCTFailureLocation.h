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

@interface XCTFailureLocation : NSObject
{
    NSString *_filePath;
    NSUInteger _lineNumber;
}

@property(readonly, copy) NSString *filePath;
@property(readonly) NSUInteger lineNumber;

- (id)initWithFilePath:(id)arg1 lineNumber:(NSUInteger)arg2;

@end

