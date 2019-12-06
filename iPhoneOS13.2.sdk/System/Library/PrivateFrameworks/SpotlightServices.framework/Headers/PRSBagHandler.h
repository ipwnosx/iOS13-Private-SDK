//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOUserSessionEntity, NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString, PARBag, PRSRankingServerKnobs, SSPlistDataReader;
@protocol OS_dispatch_group, OS_dispatch_queue, PRSSessionController;

@interface PRSBagHandler : NSObject
{
    BOOL _waitingForLocation;
    NSObject<OS_dispatch_group> *_locationGroup;
    id _lockObject;
    NSMutableArray *_tasks;
    PARBag *_bag;
    NSObject<OS_dispatch_queue> *_bagQueue;
    BOOL _active;
    BOOL _disableAsTypedSuggestion;
    BOOL _collectAnonymousData;
    BOOL _collectScores;
    BOOL _use2LayerRanking;
    BOOL _bagEnabled;
    BOOL _resourceMetadataNeedsWrite;
    id <PRSSessionController> _client;
    long long _status;
    double _searchRenderTimeout;
    double _suggestionsRenderTimeout;
    SSPlistDataReader *_cep_server_values;
    PRSRankingServerKnobs *_ranking_server_knobs;
    NSSet *_appBlacklist;
    NSArray *_enabledDomains;
    NSArray *_anonymousMetadataUndesiredBundleIDs;
    NSString *_fteLocString;
    NSString *_fteLearnMoreString;
    NSString *_fteContinueString;
    NSArray *_suggestionRankerModelParams;
    NSString *_lookupFirstUseDescription1;
    NSString *_lookupFirstUseDescription2;
    NSString *_lookupFirstUseLearnMore;
    GEOUserSessionEntity *_geoUserSessionEntity;
    NSMutableDictionary *_resourceMetadata;
    NSString *_resourceMetadataPath;
    NSObject<OS_dispatch_queue> *_resourceFetchQueue;
}

+ (id)sharedHandler;
+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resourceFetchQueue; // @synthesize resourceFetchQueue=_resourceFetchQueue;
@property(retain, nonatomic) NSString *resourceMetadataPath; // @synthesize resourceMetadataPath=_resourceMetadataPath;
@property(nonatomic) BOOL resourceMetadataNeedsWrite; // @synthesize resourceMetadataNeedsWrite=_resourceMetadataNeedsWrite;
@property(retain, nonatomic) NSMutableDictionary *resourceMetadata; // @synthesize resourceMetadata=_resourceMetadata;
@property(readonly) GEOUserSessionEntity *geoUserSessionEntity; // @synthesize geoUserSessionEntity=_geoUserSessionEntity;
@property(readonly, nonatomic, getter=isBagEnabled) BOOL bagEnabled; // @synthesize bagEnabled=_bagEnabled;
@property(readonly, nonatomic) NSString *lookupFirstUseLearnMore; // @synthesize lookupFirstUseLearnMore=_lookupFirstUseLearnMore;
@property(readonly, nonatomic) NSString *lookupFirstUseDescription2; // @synthesize lookupFirstUseDescription2=_lookupFirstUseDescription2;
@property(readonly, nonatomic) NSString *lookupFirstUseDescription1; // @synthesize lookupFirstUseDescription1=_lookupFirstUseDescription1;
@property(retain, nonatomic) NSArray *suggestionRankerModelParams; // @synthesize suggestionRankerModelParams=_suggestionRankerModelParams;
@property(retain, nonatomic) NSString *fteContinueString; // @synthesize fteContinueString=_fteContinueString;
@property(retain, nonatomic) NSString *fteLearnMoreString; // @synthesize fteLearnMoreString=_fteLearnMoreString;
@property(retain, nonatomic) NSString *fteLocString; // @synthesize fteLocString=_fteLocString;
@property(nonatomic) BOOL use2LayerRanking; // @synthesize use2LayerRanking=_use2LayerRanking;
@property(retain, nonatomic) NSArray *anonymousMetadataUndesiredBundleIDs; // @synthesize anonymousMetadataUndesiredBundleIDs=_anonymousMetadataUndesiredBundleIDs;
@property(nonatomic) BOOL collectScores; // @synthesize collectScores=_collectScores;
@property(nonatomic) BOOL collectAnonymousData; // @synthesize collectAnonymousData=_collectAnonymousData;
@property(nonatomic) BOOL disableAsTypedSuggestion; // @synthesize disableAsTypedSuggestion=_disableAsTypedSuggestion;
@property(retain, nonatomic) NSArray *enabledDomains; // @synthesize enabledDomains=_enabledDomains;
@property(retain, nonatomic) NSSet *appBlacklist; // @synthesize appBlacklist=_appBlacklist;
@property(retain) PRSRankingServerKnobs *ranking_server_knobs; // @synthesize ranking_server_knobs=_ranking_server_knobs;
@property(retain) SSPlistDataReader *cep_server_values; // @synthesize cep_server_values=_cep_server_values;
@property double suggestionsRenderTimeout; // @synthesize suggestionsRenderTimeout=_suggestionsRenderTimeout;
@property double searchRenderTimeout; // @synthesize searchRenderTimeout=_searchRenderTimeout;
@property(nonatomic) long long status; // @synthesize status=_status;
@property __weak id <PRSSessionController> client; // @synthesize client=_client;
@property(nonatomic) BOOL active; // @synthesize active=_active;
// - (void).cxx_destruct;
- (void)refreshGUID;
- (void)getFTEStringsWithReply:(CDUnknownBlockType)arg1;
- (void)triggerTaskWhenReady:(id)arg1;
- (void)removeTask:(id)arg1;
- (void)updateFromSession:(id)arg1 bag:(id)arg2 forClient:(id)arg3 error:(id)arg4;
- (void)fetchModifiedResourceFromSession:(id)arg1 resource:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateWithBagDictionary:(id)arg1 error:(id)arg2;
- (BOOL)isLocaleSupported:(id)arg1;
- (id)supportedServices;
- (BOOL)sessionReady;
- (id)excludedDomainIdentifiers;
- (void)deactivate;
- (void)activate;
- (id)init;
- (BOOL)searchSupported:(BOOL)arg1;
- (id)userId;
- (id)applicationNameForUserAgent;
- (BOOL)isEnabled;
- (void)updateWithDictionary:(id)arg1;
- (void)parseCEPFromData:(id)arg1 forClient:(id)arg2;
- (void)_processQIFeatures:(id)arg1 forClient:(id)arg2;
- (id)_base64CEPDataNoCopyFromFeatureData:(id)arg1;

@end

