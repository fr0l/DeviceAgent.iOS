// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 26 2020 14:08:26).
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


@class NSData, NSDate, NSDictionary, NSString;

@interface XCTAttachment : NSObject <NSSecureCoding>
{
    BOOL _hasPayload;
    NSString *_uniformTypeIdentifier;
    NSString *_name;
    NSDictionary *_userInfo;
    CDUnknownBlockType _serializationBlock;
    NSInteger _internalLifetime;
    NSDate *_timestamp;
    NSString *_fileNameOverride;
    NSData *_payload;
}

@property(copy) NSString *fileNameOverride;
@property(readonly) BOOL hasPayload;
@property NSInteger internalLifetime;
@property NSInteger lifetime;
@property(copy) NSString *name;
@property(readonly, copy) NSData *payload;
@property(copy) CDUnknownBlockType serializationBlock;
@property(copy) NSDate *timestamp;
@property(copy) NSDictionary *userInfo;
@property(readonly, copy) NSString *uniformTypeIdentifier;

+ (id)_attachmentWithArchivableObject:(id)arg1 uniformTypeIdentifier:(id)arg2;
+ (id)_attachmentWithContentsOfFileAtURL:(id)arg1 uniformTypeIdentifier:(id)arg2;
+ (id)_attachmentWithData:(id)arg1 uniformTypeIdentifier:(id)arg2;
+ (id)_attachmentWithUniformTypeIdentifier:(id)arg1 name:(id)arg2 serializationBlock:(CDUnknownBlockType)arg3;
+ (id)attachmentWithArchivableObject:(id)arg1;
+ (id)attachmentWithArchivableObject:(id)arg1 uniformTypeIdentifier:(id)arg2;
+ (id)attachmentWithContentsOfFileAtURL:(id)arg1;
+ (id)attachmentWithContentsOfFileAtURL:(id)arg1 uniformTypeIdentifier:(id)arg2;
+ (id)attachmentWithData:(id)arg1;
+ (id)attachmentWithData:(id)arg1 uniformTypeIdentifier:(id)arg2;
+ (id)attachmentWithImage:(id)arg1;
+ (id)attachmentWithImage:(id)arg1 quality:(NSInteger)arg2;
+ (id)attachmentWithPlistObject:(id)arg1;
+ (id)attachmentWithScreenshot:(id)arg1;
+ (id)attachmentWithScreenshot:(id)arg1 quality:(NSInteger)arg2;
+ (id)attachmentWithString:(id)arg1;
+ (id)attachmentWithUniformTypeIdentifier:(id)arg1 name:(id)arg2 payload:(id)arg3 userInfo:(id)arg4;
+ (id)attachmentWithXCTImage:(id)arg1 quality:(NSInteger)arg2;
+ (void)setSystemAttachmentLifetime:(NSInteger)arg1;
+ (void)setUserAttachmentLifetime:(NSInteger)arg1;
+ (NSInteger)systemAttachmentLifetime;
+ (NSInteger)userAttachmentLifetime;
- (void)_writeToUserInfoWithBlock:(CDUnknownBlockType)arg1;
- (id)debugDescription;
- (id)debugQuickLookObject;
- (id)initWithUniformTypeIdentifier:(id)arg1 name:(id)arg2 payload:(id)arg3 userInfo:(id)arg4;
- (id)initWithUniformTypeIdentifier:(id)arg1 name:(id)arg2 serializationBlock:(CDUnknownBlockType)arg3;
- (void)makeSystem;
- (void)prepareForEncoding;

@end

