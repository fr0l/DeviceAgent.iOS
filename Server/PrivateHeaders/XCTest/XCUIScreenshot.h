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

@class NSData, UIImage, XCTImage;

@interface XCUIScreenshot : NSObject
{
    XCTImage *_internalImage;
}

@property(readonly, copy) NSData *PNGRepresentation;
@property(readonly, copy) UIImage *image;
@property(retain) XCTImage *internalImage;

+ (void)setSystemScreenshotQuality:(NSInteger)arg1;
+ (NSInteger)systemScreenshotQuality;
- (id)debugQuickLookObject;
- (id)initWithImage:(id)arg1;

@end
