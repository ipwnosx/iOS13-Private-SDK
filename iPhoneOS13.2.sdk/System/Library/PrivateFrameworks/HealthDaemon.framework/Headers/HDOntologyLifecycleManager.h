//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthDaemon/HDHealthOntologyManagerObserver-Protocol.h>
#import <HealthDaemon/HDHealthRecordsAccountEventObserver-Protocol.h>

@class HDConceptIndexManager, HDHealthOntologyManager, HDHealthRecordsNotificationManager, HDOntologyAssetManager, HDProfile;
@protocol HDOntologyTester;

@interface HDOntologyLifecycleManager : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDHealthOntologyManagerObserver, HDHealthRecordsAccountEventObserver>
{
//    struct os_unfair_lock_s _ivarLock;
    BOOL _ready;
    HDProfile *_profile;
    HDOntologyAssetManager *_assetManager;
    HDHealthOntologyManager *_ontologyManager;
    HDConceptIndexManager *_indexManager;
    HDHealthRecordsNotificationManager *_notificationManager;
    id <HDOntologyTester> _ontologyTester;
}

@property(nonatomic) __weak id <HDOntologyTester> ontologyTester; // @synthesize ontologyTester=_ontologyTester;
@property(nonatomic, getter=isReady) BOOL ready; // @synthesize ready=_ready;
@property(readonly, nonatomic) HDHealthRecordsNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) HDConceptIndexManager *indexManager; // @synthesize indexManager=_indexManager;
@property(retain, nonatomic) HDHealthOntologyManager *ontologyManager; // @synthesize ontologyManager=_ontologyManager;
@property(retain, nonatomic) HDOntologyAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (void)profileExtension:(id)arg1 accountEventOccurred:(NSUInteger)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)ontologyManagerReferenceOntologyCreated:(id)arg1;
- (void)ontologyManagerReferenceOntologyFinishedUpdate:(id)arg1 success:(BOOL)arg2 error:(id)arg3;
- (void)ontologyManagerReferenceOntologyWillUpdate:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)_evaluateManagerState;
- (void)_disableAllManagers;
- (void)_enableAllManagers;
- (void)dealloc;
- (void)obliterateWithReason:(id)arg1;
- (void)invalidateAndWait;
- (id)initWithProfile:(id)arg1;

@end

