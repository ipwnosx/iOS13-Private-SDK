//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMutableDictionary, NSString;

@interface HMDApplicationInfo : HMFObject <HMFLogging>
{
    BOOL _spiClient;
    NSString *_teamIdentifier;
    NSString *_bundleIdentifier;
    NSString *_companionAppBundleIdentifier;
    NSMutableDictionary *_activeProcesses;
}

+ (id)logCategory;
@property(readonly, nonatomic, getter=isSPIClient) BOOL spiClient; // @synthesize spiClient=_spiClient;
@property(readonly, nonatomic) NSMutableDictionary *activeProcesses; // @synthesize activeProcesses=_activeProcesses;
@property(readonly, copy, nonatomic) NSString *companionAppBundleIdentifier; // @synthesize companionAppBundleIdentifier=_companionAppBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;
- (id)initWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2 companionAppBundleIdentifier:(id)arg3 spiClient:(BOOL)arg4;
- (id)init;

@end

