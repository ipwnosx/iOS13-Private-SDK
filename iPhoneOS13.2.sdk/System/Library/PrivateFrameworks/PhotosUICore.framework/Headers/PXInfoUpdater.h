//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress, NSString;
@protocol PXInfoProvider, PXInfoUpdaterObserver;

@interface PXInfoUpdater : NSObject
{
   struct {
        BOOL priorityForInfoRequestOfKind;
    } _infoProviderRespondsTo;
   struct {
        BOOL shouldUpdate;
    } _observerRespondsTo;
    BOOL _shouldUpdateInfo;
    BOOL _isUpdatingInfo;
    id _info;
    id <PXInfoProvider> _infoProvider;
    NSString *_infoKind;
    id <PXInfoUpdaterObserver> _observer;
    long long _currentUpdateGeneration;
    long long _currentUpdatePriority;
    NSProgress *_currentUpdateProgress;
}

@property(retain, nonatomic) NSProgress *currentUpdateProgress; // @synthesize currentUpdateProgress=_currentUpdateProgress;
@property(nonatomic) long long currentUpdatePriority; // @synthesize currentUpdatePriority=_currentUpdatePriority;
@property(nonatomic) long long currentUpdateGeneration; // @synthesize currentUpdateGeneration=_currentUpdateGeneration;
@property(nonatomic) BOOL isUpdatingInfo; // @synthesize isUpdatingInfo=_isUpdatingInfo;
@property(nonatomic) BOOL shouldUpdateInfo; // @synthesize shouldUpdateInfo=_shouldUpdateInfo;
@property(nonatomic) __weak id <PXInfoUpdaterObserver> observer; // @synthesize observer=_observer;
@property(readonly, copy, nonatomic) NSString *infoKind; // @synthesize infoKind=_infoKind;
@property(readonly, nonatomic) __weak id <PXInfoProvider> infoProvider; // @synthesize infoProvider=_infoProvider;
// - (void).cxx_destruct;
- (void)performBlockWhenDoneUpdating:(CDUnknownBlockType)arg1;
- (void)_handleCurrentUpdateWithInfo:(id)arg1 generation:(long long)arg2;
- (void)_updateInfo;
- (void)_updateInfoIfNeeded;
- (void)invalidateInfo;
@property(retain, nonatomic) id info; // @synthesize info=_info;
- (id)initWithInfoProvider:(id)arg1 infoKind:(id)arg2;
- (id)init;

@end

