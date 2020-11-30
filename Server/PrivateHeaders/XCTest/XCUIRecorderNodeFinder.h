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

@class NSArray, NSMutableArray, NSSet, XCElementSnapshot, XCUIRecorderNodeFinderMatch;

@interface XCUIRecorderNodeFinder : NSObject
{
    NSUInteger _state;
    NSSet *_descendantsWithTargetElementType;
    NSArray *_childrenWithTargetElementType;
    BOOL _allowDirectChildrenMatches;
    BOOL _shouldAttemptToUseIdentifier;
    BOOL _shouldAttemptToUsePlaceholderValue;
    BOOL _shouldAttemptToUseLabel;
    BOOL _shouldAttemptToUseTitle;
    BOOL _shouldAttemptToUseTruncatedValueString;
    BOOL _allowElementQueries;
    BOOL _excludeUnlessNecessary;
    NSMutableArray *_mutableFoundNodeMatches;
    NSMutableArray *_unprocessedContainsMatches;
    XCUIRecorderNodeFinderMatch *_ancestorNodeFinderMatch;
    NSUInteger _targetSnapshotIndex;
    XCElementSnapshot *_targetSnapshot;
    NSUInteger _language;
    NSUInteger _platform;
}

@property BOOL allowElementQueries;
@property(retain) XCUIRecorderNodeFinderMatch *ancestorNodeFinderMatch;
@property BOOL excludeUnlessNecessary;
@property NSUInteger language;
@property(retain) NSMutableArray *mutableFoundNodeMatches;
@property NSUInteger platform;
@property(retain) XCElementSnapshot *targetSnapshot;
@property NSUInteger targetSnapshotIndex;
@property(retain) NSMutableArray *unprocessedContainsMatches;

+ (id)_excludeUnlessNecessaryElementTypesForPlatform:(NSUInteger)arg1;
+ (id)_nodeFindersForSnapshots:(id)arg1 ancestorMatch:(id)arg2 ancestorIndex:(NSUInteger)arg3 stopCombinatorialExpansionIndexes:(id)arg4 excludeUnlessNecessaryElementTypes:(id)arg5 language:(NSUInteger)arg6 platform:(NSUInteger)arg7;
+ (id)_stopCombinatorialExpansionElementTypesForPlatform:(NSUInteger)arg1;
+ (id)nodeToFindElementForSnapshots:(id)arg1 language:(NSUInteger)arg2 platform:(NSUInteger)arg3;
- (id)_stringConstantForString:(id)arg1;
- (id)childAtIndexNodeWithTargetElementType;
- (id)childAtIndexNodeWithTargetElementTypeAndIdentifierValue:(id)arg1;
- (id)childrenQueryNodeWithTargetElementTypeAndIdentifierValue:(id)arg1;
- (id)childrenWithTargetElementType;
- (id)childrenWithTargetElementTypeAndIdentifierValue:(id)arg1;
- (id)descendantsQueryNodeWithElementType:(NSUInteger)arg1;
- (id)descendantsQueryNodeWithTargetElementTypeAndIdentifierValue:(id)arg1;
- (id)descendantsQueryNodeWithTargetElementTypeContainingElementsOfType:(NSUInteger)arg1 identifierValue:(id)arg2;
- (id)descendantsWithTargetElementType;
- (id)descendantsWithTargetElementTypeAndIdentifierValue:(id)arg1;
- (id)descendantsWithTargetElementTypeContainingDescendantElementsWithType:(NSUInteger)arg1 identifierValue:(id)arg2;
- (id)initWithTargetSnapshot:(id)arg1 targetSnapshotIndex:(NSUInteger)arg2 ancestorMatch:(id)arg3 allowElementQueries:(BOOL)arg4 excludeUnlessNecessary:(BOOL)arg5 language:(NSUInteger)arg6 platform:(NSUInteger)arg7;
- (void)invalidate;
- (id)nextNodeFinderMatch;
- (void)removeFromAncestorNodeFinderMatch;
- (id)uniqueChildNodeWithTargetElementType;
- (id)uniqueChildNodeWithTargetElementTypeAndIdentifierValue:(id)arg1;
- (id)uniqueDescendantNodeWithTargetElementType;
- (id)uniqueDescendantNodeWithTargetElementTypeAndIdentifierValue:(id)arg1;

@end

