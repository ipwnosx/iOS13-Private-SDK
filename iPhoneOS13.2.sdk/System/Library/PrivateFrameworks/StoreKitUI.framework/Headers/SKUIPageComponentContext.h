//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSMutableSet, NSSet;

@interface SKUIPageComponentContext : NSObject <NSCopying>
{
    NSDictionary *_componentDictionary;
    NSArray *_ineligibleGratisIdentifiers;
    NSDictionary *_items;
    long long _layoutStyle;
    double _pageGenerationTime;
    NSDictionary *_platformKeyProfileOverrides;
    NSMutableSet *_unavailableItems;
}

@property(copy, nonatomic) NSDictionary *platformKeyProfileOverrides; // @synthesize platformKeyProfileOverrides=_platformKeyProfileOverrides;
@property(readonly, nonatomic) double pageGenerationTime; // @synthesize pageGenerationTime=_pageGenerationTime;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(copy, nonatomic) NSDictionary *items; // @synthesize items=_items;
@property(copy, nonatomic) NSArray *ineligibleGratisIdentifiers; // @synthesize ineligibleGratisIdentifiers=_ineligibleGratisIdentifiers;
@property(copy, nonatomic) NSDictionary *componentDictionary; // @synthesize componentDictionary=_componentDictionary;
@property(readonly, copy, nonatomic) NSSet *allUnavailableItemIdentifiers; // @synthesize allUnavailableItemIdentifiers=_unavailableItems;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)setUnavailableItemIdentifiers:(id)arg1;
- (id)itemForItemIdentifier:(id)arg1;
- (BOOL)isUnavailableItemIdentifier:(id)arg1;
- (void)addUnavailableItemIdentifiers:(id)arg1;
- (id)init;

@end

