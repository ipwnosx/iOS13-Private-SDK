//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/RadiosPreferencesDelegate-Protocol.h>

@class NSString, RadiosPreferences;

@interface IKNetworkUtilities : NSObject <RadiosPreferencesDelegate>
{
    id _isNetworkTypeChangedToken;
    id _networkReachabilityChangedToken;
    RadiosPreferences *_radioPrefs;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_notifyObservers;
- (void)airplaneModeChanged;
@property(readonly, nonatomic) double lastNetworkChangedTime;
@property(readonly, nonatomic) NSString *networkType;
@property(readonly, nonatomic, getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled;
@property(readonly, nonatomic, getter=isNetworkReachable) BOOL networkReachable;
- (void)dealloc;
- (id)init;

@end

