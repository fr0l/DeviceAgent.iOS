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

@interface XCSymbolicationRecord : NSObject
{
    NSUInteger _lineNumber;
    NSString *_filePath;
    NSString *_symbolName;
    NSString *_symbolOwner;
}

@property(copy) NSString *filePath;
@property NSUInteger lineNumber;
@property(copy) NSString *symbolName;
@property(copy) NSString *symbolOwner;

+ (id)failureRecord;
+ (id)symbolicationRecordForAddress:(NSUInteger)arg1;
+ (struct _CSTypeRef)symbolicator;

@end

