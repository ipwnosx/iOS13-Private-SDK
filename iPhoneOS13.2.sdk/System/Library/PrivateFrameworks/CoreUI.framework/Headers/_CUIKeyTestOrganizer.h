//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _CUIKeyTestOrganizer : NSObject
{
//     struct _renditionkeytoken originalKey[22];
    NSArray *orderedNonZeroFlexibleAttributes;
    NSUInteger flexAttributesCount;
//     struct _renditionkeytoken testKey[22];
    NSUInteger chooseCount;
    NSUInteger subchooseCount;
}

// - (struct _renditionkeytoken )nextKey;
- (void)dealloc;
// - (id)initWithRenditionKey:(const struct _renditionkeytoken )arg1;
- (void)_bumpTestKey;
- (BOOL)_bumpTestKeyAttributeIndex:(NSUInteger)arg1;
- (NSUInteger)_attributeToBumpIndex;
// - (id)_nonZeroFlexibleAttributesInKey:(const struct _renditionkeytoken )arg1;

@end

