//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface ADAdServerManifestManager : NSObject
{
    NSMutableDictionary *_recordsByServerName;
    NSString *_deviceDescription;
}

+ (id)sharedManager;
@property(copy, nonatomic) NSString *deviceDescription; // @synthesize deviceDescription=_deviceDescription;
@property(retain, nonatomic) NSMutableDictionary *recordsByServerName; // @synthesize recordsByServerName=_recordsByServerName;
- (void)_persistRecords;
- (void)_loadRecords:(CDUnknownBlockType)arg1;
- (void)_storeLoadedRecords:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_persistedManifestsURL;
@property(readonly, nonatomic) BOOL updateInProgress;
- (void)refreshRecord:(id)arg1;
- (void)refreshAllRecords;
- (id)serverRecords;
- (void)_considerRefreshingServerRecord:(id)arg1;
- (void)setManifest:(id)arg1 forRecord:(id)arg2 URL:(id)arg3;
- (id)URLForServerWithName:(id)arg1;
- (void)_setURL:(id)arg1 forServerWithName:(id)arg2 temporary:(BOOL)arg3;
- (void)setURL:(id)arg1 forTemporaryServerWithName:(id)arg2;
- (void)dealloc;
- (id)init;

@end

