//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WFDevice : NSObject
{
    NSArray *_capabilities;
}

+ (id)currentDevice;
// - (void).cxx_destruct;
//  (id)_deviceInfoForKey:(struct __CFString )arg1;
@property(readonly, nonatomic) long long chipID;
@property(readonly, nonatomic) NSString *marketingName;
@property(readonly, nonatomic) NSString *localizedWiFiDisplayName;
- (BOOL)hasCapability:(id)arg1;
@property(readonly, nonatomic) NSArray *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) long long platform;
@property(readonly, nonatomic) long long idiom;
@property(readonly, nonatomic) NSString *systemName;
@property(readonly, nonatomic) NSString *localizedModel;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) double screenScale;
@property(readonly, nonatomic) CGRect screenBounds;

@end

