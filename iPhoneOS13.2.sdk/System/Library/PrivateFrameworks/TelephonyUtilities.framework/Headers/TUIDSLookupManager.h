//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/IDSBatchIDQueryControllerDelegate-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, TUIDSBatchIDQueryController, TUIDSIDQueryController;

@interface TUIDSLookupManager : NSObject <IDSBatchIDQueryControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <TUIDSIDQueryController> _queryController;
    NSMutableDictionary *_idsFaceTimeVideoStatuses;
    NSMutableDictionary *_idsFaceTimeAudioStatuses;
    NSMutableDictionary *_idsFaceTimeMultiwayStatuses;
    id <TUIDSBatchIDQueryController> _batchQuerySearchVideoController;
    id <TUIDSBatchIDQueryController> _batchQuerySearchAudioController;
    id <TUIDSBatchIDQueryController> _batchQuerySearchMultiwayController;
    id /* CDUnknownBlockType */ _batchQueryControllerCreationBlock;
}

+ (BOOL)isAnyDestinationAvailableInDestinations:(id)arg1 usingCache:(id)arg2;
+ (id)sharedManager;
@property(copy, nonatomic) id /* CDUnknownBlockType */ batchQueryControllerCreationBlock; // @synthesize batchQueryControllerCreationBlock=_batchQueryControllerCreationBlock;
@property(retain, nonatomic) id <TUIDSBatchIDQueryController> batchQuerySearchMultiwayController; // @synthesize batchQuerySearchMultiwayController=_batchQuerySearchMultiwayController;
@property(retain, nonatomic) id <TUIDSBatchIDQueryController> batchQuerySearchAudioController; // @synthesize batchQuerySearchAudioController=_batchQuerySearchAudioController;
@property(retain, nonatomic) id <TUIDSBatchIDQueryController> batchQuerySearchVideoController; // @synthesize batchQuerySearchVideoController=_batchQuerySearchVideoController;
@property(readonly, nonatomic) NSMutableDictionary *idsFaceTimeMultiwayStatuses; // @synthesize idsFaceTimeMultiwayStatuses=_idsFaceTimeMultiwayStatuses;
@property(readonly, nonatomic) NSMutableDictionary *idsFaceTimeAudioStatuses; // @synthesize idsFaceTimeAudioStatuses=_idsFaceTimeAudioStatuses;
@property(readonly, nonatomic) NSMutableDictionary *idsFaceTimeVideoStatuses; // @synthesize idsFaceTimeVideoStatuses=_idsFaceTimeVideoStatuses;
@property(readonly, nonatomic) id <TUIDSIDQueryController> queryController; // @synthesize queryController=_queryController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (void)beginQueryWithDestinations:(id)arg1;
- (void)cancelQueries;
- (BOOL)isFaceTimeMultiwayAvailableForAnyDestinationInDestinations:(id)arg1;
- (BOOL)isFaceTimeAudioAvailableForAnyDestinationInDestinations:(id)arg1;
- (BOOL)isFaceTimeVideoAvailableForAnyDestinationInDestinations:(id)arg1;
- (BOOL)isFaceTimeMultiwayAvailableForItem:(id)arg1;
- (BOOL)isFaceTimeAudioAvailableForItem:(id)arg1;
- (BOOL)isFaceTimeVideoAvailableForItem:(id)arg1;
- (void)dealloc;
- (id)initWithQueryController:(id)arg1;
- (id)init;

@end

