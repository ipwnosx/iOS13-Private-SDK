//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCKeyValueStore, NSDictionary, NSMutableDictionary;

@interface FCPurchaseLookUpEntriesManager : NSObject
{
    FCKeyValueStore *_localStore;
    NSMutableDictionary *_entriesByTagID;
}

@property(retain, nonatomic) NSMutableDictionary *entriesByTagID; // @synthesize entriesByTagID=_entriesByTagID;
@property(retain, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
// - (void).cxx_destruct;
- (void)removeAllEntries;
- (void)removeEntryForTagID:(id)arg1;
- (void)removeEntry:(id)arg1;
- (void)updateEntry:(id)arg1;
- (void)addEntryWithTagID:(id)arg1 purchaseID:(id)arg2 lastVerificationTime:(id)arg3 lastVerificationFailureTime:(id)arg4 purchaseType:(NSUInteger)arg5 purchaseValidationState:(NSUInteger)arg6 isNewsAppPurchase:(BOOL)arg7 dateOfExpiration:(id)arg8 hasShownRenewalNotice:(BOOL)arg9;
- (id)_purchaseLookUpEntryIDForTagID:(id)arg1;
@property(readonly, nonatomic) NSDictionary *lookupEntriesByTagID;
- (void)loadLocalCachesFromStore;
- (id)initWithLocalStore:(id)arg1;

@end

