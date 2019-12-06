//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface CLSInspector : NSObject
{
    NSArray *_profileClasses;
    NSMutableDictionary *_profileClassesByIdentifier;
    NSArray *_informantClasses;
    NSMutableDictionary *_informantClassesByIdentifier;
    NSMutableDictionary *_informantClassesByFamilyIdentifier;
}

+ (void)invalidateSharedTransientCaches;
+ (void)invalidateSharedPersistentCaches;
+ (void)invalidateSharedPersistentCachesForGeoServiceProviderChange;
+ (void)invalidateAllSharedCaches;
+ (id)sharedInspector;
// - (void).cxx_destruct;
- (void)performInvestigation:(id)arg1 options:(NSUInteger)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)performInvestigation:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)performInvestigation:(id)arg1;
- (id)profileIdentifierForHash:(NSUInteger)arg1;
- (Class)profileClassForIdentifier:(id)arg1;
- (id)informantIdentifierForHash:(NSUInteger)arg1;
- (id)informantIdentifiersForAnyIdentifier:(id)arg1;
- (id)informantClassesForAnyIdentifier:(id)arg1;
- (id)informantClassesForFamilyIdentifier:(id)arg1;
- (Class)informantClassForIdentifier:(id)arg1;
- (id)init;

@end

