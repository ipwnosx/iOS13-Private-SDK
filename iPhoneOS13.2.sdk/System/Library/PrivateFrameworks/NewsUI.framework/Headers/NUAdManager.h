//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdAnalyticsProvider-Protocol.h>
#import <NewsUI/NUAdContextProvider-Protocol.h>
#import <NewsUI/NUAdProvider-Protocol.h>

@class NUAdStore;
@protocol NUAdManagerConfigurationProvider, NUDevice;

@interface NUAdManager : NSObject <NUAdContextProvider, NUAdProvider, NUAdAnalyticsProvider>
{
    NUAdStore *_adStore;
    id <NUAdManagerConfigurationProvider> _configurationProvider;
    id <NUDevice> _device;
}

@property(readonly, nonatomic) id <NUDevice> device; // @synthesize device=_device;
@property(readonly, nonatomic) id <NUAdManagerConfigurationProvider> configurationProvider; // @synthesize configurationProvider=_configurationProvider;
@property(readonly, nonatomic) NUAdStore *adStore; // @synthesize adStore=_adStore;
// - (void).cxx_destruct;
- (id)videoInTodayHeaderDefinition;
- (id)videoPlaylistAdBodyDefinition;
- (id)videoPlaylistAdRootDefinition;
- (id)prerollHeaderDefinition;
- (id)prerollBodyDefinition;
- (id)prerollRootDefinition;
- (id)defaultFeedMetadataDefinition;
- (id)defaultArticleDefinition;
- (id)defaultIssueDefinition;
- (id)defaultBodyDefinition;
- (id)defaultHeaderDefinition;
- (id)defaultRootDefinition;
- (id)contextForContextProviders:(id)arg1 keyedContextProviders:(id)arg2 constructor:(id)arg3;
- (id)videoPlaylistAdContextConstructor;
- (id)prerollContextConstructor;
- (id)interstitialContextConstructor;
- (id)inArticleContextConstructor;
- (id)adContextValueForKeyPath:(id)arg1;
- (void)adForIdentifier:(id)arg1 contextProviders:(id)arg2 constructor:(id)arg3 layoutOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)adWithIdentifier:(id)arg1;
- (void)bannerViewDidUnload:(id)arg1;
- (void)bannerViewDidLoad:(id)arg1;
- (void)videoPlaylistAdForContextProviders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)prerollForContextProviders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)videoAdForContextProviders:(id)arg1 constructor:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)interstitialViewForContextProviders:(id)arg1 contextProvidersWithKeys:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)interstitialViewForContextProviders:(id)arg1 layoutOptions:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)bannerViewForIdentifier:(id)arg1 contextProviders:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (id)initWithConfigurationProvider:(id)arg1 device:(id)arg2;

@end

