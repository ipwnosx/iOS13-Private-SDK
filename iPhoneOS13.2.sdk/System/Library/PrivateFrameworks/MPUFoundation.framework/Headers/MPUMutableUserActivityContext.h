//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPUFoundation/MPUUserActivityContext.h>

@class NSArray, NSMutableArray;

@interface MPUMutableUserActivityContext : MPUUserActivityContext
{
    NSMutableArray *_containerItems;
}

// - (void).cxx_destruct;
- (void)removeContainerItem:(id)arg1;
- (void)insertContainerItem:(id)arg1 afterContainerItem:(id)arg2;
- (void)addContainerItem:(id)arg1;
@property(nonatomic) long long originatorVersion; // @dynamic originatorVersion;
@property(nonatomic) long long originatorType; // @dynamic originatorType;
@property(copy, nonatomic) NSArray *containerItems;
// - (id)copyWithZone:(_NSZone )arg1;

@end

