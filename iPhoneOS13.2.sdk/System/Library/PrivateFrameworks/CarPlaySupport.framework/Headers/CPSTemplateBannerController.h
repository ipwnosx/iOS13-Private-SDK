//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlaySupport/BSInvalidatable-Protocol.h>
#import <CarPlaySupport/BSServiceConnectionListenerDelegate-Protocol.h>
#import <CarPlaySupport/CPSBannerSourceClientToServerInterface-Protocol.h>
#import <CarPlaySupport/CPSBannerSourceDelegate-Protocol.h>

@class BSServiceConnectionListener, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CPSTemplateBannerController : NSObject <BSServiceConnectionListenerDelegate, CPSBannerSourceClientToServerInterface, CPSBannerSourceDelegate, BSInvalidatable>
{
    BSServiceConnectionListener *_listener;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableDictionary *_connections;
    NSMutableDictionary *_bannerSources;
}

@property(retain, nonatomic) NSMutableDictionary *bannerSources; // @synthesize bannerSources=_bannerSources;
@property(retain, nonatomic) NSMutableDictionary *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
// - (void).cxx_destruct;
- (id)_connectionForBannerSource:(id)arg1;
- (void)_connectionQueue_removeConnection:(id)arg1;
- (void)_connectionQueue_addConnection:(id)arg1;
- (void)sceneActivationStateChangedTo:(id)arg1;
- (void)postBannerForNavigationAlert:(id)arg1;
- (void)postBannerForManeuver:(id)arg1 travelEstimates:(id)arg2;
- (void)bannerSource:(id)arg1 bannerDidDisappearWithIdentifier:(id)arg2;
- (void)bannerSource:(id)arg1 bannerDidAppearWithIdentifier:(id)arg2;
- (void)bannerSource:(id)arg1 bannerTappedWithIdentifier:(id)arg2;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)invalidate;
- (id)init;

@end

