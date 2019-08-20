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


@class NSArray, NSDictionary, NSEnumerator, NSIndexPath, NSSet, NSString, XCAccessibilityElement, XCTLocalizableStringInfo;
@protocol XCTElementSnapshotAttributeDataSource, XCUIElementSnapshotApplication;


@protocol XCTElementSnapshotAttributeDataSource;

@interface XCElementSnapshot : NSObject <NSSecureCoding, NSCopying>
{
    NSUInteger _faultedInProperties;
    BOOL _isMainWindow;
    BOOL _enabled;
    BOOL _selected;
    BOOL _hasFocus;
    BOOL _hasKeyboardFocus;
    BOOL _isTruncatedValue;
    id <XCUIElementSnapshotApplication> _application;
    NSUInteger _generation;
    id <XCTElementSnapshotAttributeDataSource> _dataSource;
    NSString *_title;
    NSString *_label;
    id _value;
    NSString *_placeholderValue;
    NSUInteger _elementType;
    NSUInteger _traits;
    NSString *_identifier;
    NSInteger _verticalSizeClass;
    NSInteger _horizontalSizeClass;
    NSArray *_children;
    NSDictionary *_additionalAttributes;
    NSArray *_userTestingAttributes;
    NSSet *_disclosedChildRowAXElements;
    XCAccessibilityElement *_accessibilityElement;
    XCAccessibilityElement *_parentAccessibilityElement;
    XCElementSnapshot *_parent;
    XCTLocalizableStringInfo *_localizableStringInfo;
    CGRect _frame;
}

@property(readonly, copy, nonatomic) XCAccessibilityElement *accessibilityElement;
@property(copy) NSDictionary *additionalAttributes;
@property(nonatomic) __weak id <XCUIElementSnapshotApplication> application;
@property(readonly) CGPoint center;
@property(readonly) double centerX;
@property(readonly) double centerY;
@property(readonly, copy) NSEnumerator *childEnumerator;
@property(copy) NSArray *children;
@property(readonly, copy) NSString *compactDescription;
@property __weak id <XCTElementSnapshotAttributeDataSource> dataSource;
@property(readonly) NSUInteger depth;
@property(readonly, copy) NSEnumerator *descendantEnumerator;
@property(copy) NSSet *disclosedChildRowAXElements;
@property(readonly) NSArray *disclosedChildRows;
@property NSUInteger elementType;
@property CGRect frame;
@property(nonatomic) NSUInteger generation;
@property BOOL hasFocus;
@property BOOL hasKeyboardFocus;
@property NSInteger horizontalSizeClass;
@property(copy) NSString *identifier;
@property(readonly, copy) NSArray *identifiers;
@property(readonly, copy) NSIndexPath *indexPath;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) BOOL isInRootMenu;
@property(readonly) BOOL isMacOS;
@property BOOL isMainWindow;
@property(readonly) BOOL isRemote;
@property(getter=isSelected) BOOL selected;
@property(readonly) BOOL isTopLevelTouchBarElement;
@property(readonly) BOOL isTouchBarElement;
@property BOOL isTruncatedValue;
@property(copy) NSString *label;
@property(copy) XCTLocalizableStringInfo *localizableStringInfo;
@property(readonly) XCElementSnapshot *menu;
@property(readonly) XCElementSnapshot *menuItem;
@property(readonly) XCElementSnapshot *outline;
@property XCElementSnapshot *parent;
@property(retain) XCAccessibilityElement *parentAccessibilityElement;
@property(readonly, copy) NSString *pathDescription;
@property(readonly, copy) XCElementSnapshot *pathFromRoot;
@property(copy) NSString *placeholderValue;
@property(readonly) NSString *recursiveDescription;
@property(readonly) NSString *recursiveDescriptionIncludingAccessibilityElement;
@property(readonly) XCElementSnapshot *rootElement;
@property(readonly) XCElementSnapshot *scrollView;
@property(copy) NSString *title;
@property NSUInteger traits;
@property(copy) NSArray *userTestingAttributes;
@property(copy) id value;
@property NSInteger verticalSizeClass;
@property(readonly, copy) NSString *sparseTreeDescription;
@property(readonly) NSArray *suggestedHitpoints;
@property(readonly, copy) NSString *truncatedValueString;
@property(readonly) NSSet *uniqueDescendantSubframes;
@property(readonly) CGRect visibleFrame;

+ (id)axAttributesForElementSnapshotKeyPaths:(id)arg1 isMacOS:(BOOL)arg2;
+ (id)axAttributesForSnapshotAttributes:(id)arg1 isMacOS:(BOOL)arg2;
+ (NSUInteger)elementTypeForAccessibilityElement:(id)arg1 usingAXAttributes_iOS:(id)arg2 useLegacyElementType:(BOOL)arg3;
+ (NSUInteger)elementTypeForAccessibilityElement:(id)arg1 usingAXAttributes_macOS:(id)arg2 useLegacyElementType:(BOOL)arg3;
+ (id)elementWithAccessibilityElement:(id)arg1;
+ (id)requiredAXAttributesForElementSnapshotHierarchyOnMacOS:(BOOL)arg1;
+ (id)sanitizedElementSnapshotHierarchyAttributesForAttributes:(id)arg1 isMacOS:(BOOL)arg2;
- (id)_allDescendants;
- (void)_assertForFaultsInContext:(CDUnknownBlockType)arg1;
- (id)_childMatchingElement:(id)arg1;
- (void)_compensateForInsufficientElementTypeData;
- (NSInteger)_faultingBitForKey:(id)arg1;
- (BOOL)_fetchBoolForKey:(id)arg1;
- (id)_fetchSimpleValueForKey:(id)arg1;
- (BOOL)_frameFuzzyMatchesElement:(id)arg1;
- (BOOL)_fuzzyMatchesElement:(id)arg1;
- (BOOL)_isAncestorOfElement:(id)arg1;
- (BOOL)_isDescendantOfElement:(id)arg1;
- (BOOL)_isFaultedIn:(NSInteger)arg1;
- (BOOL)_matchesElement:(id)arg1;
- (id)_nearestAncestorMatchingAnyOfTypes:(id)arg1;
- (void)_recursivelyResetElementType;
- (void)_recursivelySetFaultedBits:(NSInteger)arg1;
- (void)_setIsFaultedIn:(NSInteger)arg1;
- (BOOL)_shouldAttemptFaultForBit:(NSInteger)arg1;
- (void)_unsetIsFaultedIn:(NSInteger)arg1;
- (BOOL)_willAssertOnFault;
- (id)debugDescription;
- (id)descendantAtIndexPath:(id)arg1;
- (id)descendantsByFilteringWithBlock:(CDUnknownBlockType)arg1;
- (id)descriptionIncludingPointers:(BOOL)arg1;
- (id)dictionaryRepresentationWithAttributes:(id)arg1;
- (id)elementSnapshotMatchingAccessibilityElement:(id)arg1;
- (void)enumerateDescendantsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasDescendantMatchingFilter:(CDUnknownBlockType)arg1;
- (id)initWithAccessibilityElement:(id)arg1;
- (id)localizableStringsDataIncludingChildren;
- (void)markAsFaultedInPropertiesDerivedFromSnapshotAttributes:(id)arg1;
- (BOOL)matchesTreeWithRoot:(id)arg1;
- (void)mergeTreeWithSnapshot:(id)arg1;
- (id)nearestAncestorMatchingType:(NSInteger)arg1;
- (id)nearestSharedAncestorOfElement:(id)arg1 matchingType:(NSInteger)arg2;
- (id)recursiveDescriptionWithIndent:(id)arg1 includeAccessibilityElement:(BOOL)arg2 includingPointers:(BOOL)arg3;
- (void)recursivelyClearDataSource;
- (void)replaceDescendant:(id)arg1 withElement:(id)arg2;
- (id)sparseTreeWithDescendants:(id)arg1 error:(id *)arg2;

@end

