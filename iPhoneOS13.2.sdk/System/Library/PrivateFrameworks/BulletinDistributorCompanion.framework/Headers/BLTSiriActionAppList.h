//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSURL;
@protocol BLTSiriActionAppListDelegate, OS_dispatch_queue;

@interface BLTSiriActionAppList : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSMutableDictionary *_installed;
    NSMutableSet *_removed;
    NSObject<OS_dispatch_queue> *_appListQueue;
    NSURL *_siriActionAppListStoreURL;
    NSMutableSet *_appListStore;
    id <BLTSiriActionAppListDelegate> _delegate;
}

@property(nonatomic) __weak id <BLTSiriActionAppListDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)updateStoreWithInstalled:(id)arg1 removed:(id)arg2;
- (void)applicationIconDidChange:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (BOOL)_handleAppListInstalled:(NSDictionary )arg1 removed:(id)arg2;
@property(readonly, nonatomic) NSSet *removed;
@property(readonly, nonatomic) NSDictionary *installed;
- (void)dealloc;
- (id)_siriActionAppListStoreURL;
- (id)init;

@end

