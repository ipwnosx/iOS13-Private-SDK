//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet;

@interface CRKIdentifiedProviderRegistry : NSObject
{
    NSMutableOrderedSet *_identifiedProviders;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *identifiedProviders;
- (void)unregisterIdentifiedProvider:(id)arg1;
- (void)registerIdentifiedProvider:(id)arg1;
- (id)init;

@end

