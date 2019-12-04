//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, WLKChannelsResponse;
@protocol OS_dispatch_queue;

@interface WLKChannelUtilities : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _filtered;
    WLKChannelsResponse *_cachedResponse;
    NSDictionary *_channelsByBundleID;
}

+ (id)_validiTunesBundles;
+ (_Bool)isItunesBundleID:(id)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceFiltered;
@property(readonly, copy, nonatomic) NSDictionary *channelsByBundleID; // @synthesize channelsByBundleID=_channelsByBundleID;
- (id)_configuration;
- (_Bool)isItunesOrFirstPartyBundleID:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *orderedChannels;
- (id)channelIDForBundleID:(id)arg1;
- (id)channelForBundleID:(id)arg1;
- (id)channelForID:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *channelsByID;
- (id)init;
- (id)initFiltered:(_Bool)arg1;

@end
