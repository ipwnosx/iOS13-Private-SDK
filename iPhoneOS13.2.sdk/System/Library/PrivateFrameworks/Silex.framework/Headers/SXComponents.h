//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableArray, NSMutableDictionary;

@interface SXComponents : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableArray *_components;
    NSMutableDictionary *_componentsByIdentifier;
    NSMutableDictionary *_childComponentsByParentIdentifier;
}

@property(readonly, nonatomic) NSMutableDictionary *childComponentsByParentIdentifier; // @synthesize childComponentsByParentIdentifier=_childComponentsByParentIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *componentsByIdentifier; // @synthesize componentsByIdentifier=_componentsByIdentifier;
@property(readonly, nonatomic) NSMutableArray *components; // @synthesize components=_components;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)insertComponent:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)addComponent:(id)arg1;
- (void)addComponentsFromArray:(id)arg1;
- (id)componentsForContainerComponentWithPath:(id)arg1;
- (id)componentsForContainerComponentWithIdentifier:(id)arg1;
- (id)componentForIdentifier:(id)arg1;
- (NSUInteger)indexOfComponent:(id)arg1;
- (id)componentAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSArray *allComponents;
@property(readonly, nonatomic) NSUInteger count;
- (id)initWithArray:(id)arg1;
- (id)init;

@end

