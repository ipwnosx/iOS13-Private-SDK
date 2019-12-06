//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLogMsgState, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineStateFactory : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    GEOLogMsgState *_deviceIdentifierState;
    GEOLogMsgState *_deviceIdentifierInternalState;
    GEOLogMsgState *_applicationIdentifierState;
    NSString *_countryCode;
}

+ (id)sharedFactory;
// - (void).cxx_destruct;
- (void)deviceCountryChanged:(id)arg1;
- (id)sessionStateForType:(long long)arg1;
- (id)_emptyUserSessionState;
- (id)stateForType:(long long)arg1;
- (id)mapRestore;
- (id)suggestions;
- (id)muninResourceLog;
- (id)lookAroundView;
- (id)lookAroundSummary;
- (id)placeRequest;
- (id)tileSet;
- (id)mapsServer;
- (id)route;
- (id)placeCard;
- (id)experimentsIncludingABAssignInfo:(BOOL)arg1 includingClientConfig:(BOOL)arg2;
- (id)mapUIShown;
- (id)mapUI;
- (id)mapSettings;
- (id)mapViewLocation;
- (id)mapView;
- (id)extension;
- (id)pairedDevice;
- (id)carPlay;
- (id)carPlayLimited;
- (id)deviceSettings_Long;
- (id)deviceSettings_Short;
- (id)deviceConnection;
- (id)deviceConnectionLimited;
- (id)deviceLocale;
- (id)deviceLocaleLimited;
- (id)applicationIdentifier;
- (id)deviceIndentifierInternal;
- (id)deviceIdentifier;
- (void)dealloc;
- (id)init;

@end

