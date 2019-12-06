//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EMVIPManagerInterface-Protocol.h>

@class EDVIPManager, NSMapTable;

@interface EDVIPManagerProxy : NSObject <EMVIPManagerInterface>
{
//    struct os_unfair_lock_s _observersLock;
    NSMapTable *_observersByIdentifier;
    EDVIPManager *_vipManager;
}

@property(readonly, nonatomic) EDVIPManager *vipManager; // @synthesize vipManager=_vipManager;
// - (void).cxx_destruct;
- (void)_vipsDidChange:(id)arg1;
- (void)removeVIPsWithEmailAddresses:(id)arg1;
- (void)removeVIPsWithIdentifiers:(id)arg1;
- (void)saveVIPs:(id)arg1;
- (void)cancelObservation:(id)arg1;
- (void)registerObserver:(id)arg1 observationIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithVIPManager:(id)arg1;

@end

