//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXCPLServiceUIDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXCPLServiceUI, PXMomentShareStatus;
@protocol PXDisplayMomentShare;

@interface PXMomentShareStatusPresentation : PXObservable <PXChangeObserver, PXCPLServiceUIDelegate>
{
    PXCPLServiceUI *_cplServiceUI;
    BOOL _isPaused;
    float _activityProgress;
    long long _type;
    NSString *_assetsTitle;
    NSString *_expirationTitle;
    NSString *_activityTitle;
    NSString *_idleTitle;
    NSString *_pauseTitle;
    NSString *_byline;
    long long _state;
    long long _presentationStyle;
    PXMomentShareStatus *_momentShareStatus;
    long long _numberOfAssetsNotCopied;
    NSString *_pauseStatusDescription;
}

+ (id)new;
@property(copy, nonatomic) NSString *pauseStatusDescription; // @synthesize pauseStatusDescription=_pauseStatusDescription;
@property(nonatomic) BOOL isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) long long numberOfAssetsNotCopied; // @synthesize numberOfAssetsNotCopied=_numberOfAssetsNotCopied;
@property(readonly, nonatomic) PXMomentShareStatus *momentShareStatus; // @synthesize momentShareStatus=_momentShareStatus;
@property(readonly, nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) float activityProgress; // @synthesize activityProgress=_activityProgress;
@property(copy, nonatomic) NSString *byline; // @synthesize byline=_byline;
@property(copy, nonatomic) NSString *pauseTitle; // @synthesize pauseTitle=_pauseTitle;
@property(copy, nonatomic) NSString *idleTitle; // @synthesize idleTitle=_idleTitle;
@property(copy, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
@property(copy, nonatomic) NSString *expirationTitle; // @synthesize expirationTitle=_expirationTitle;
@property(copy, nonatomic) NSString *assetsTitle; // @synthesize assetsTitle=_assetsTitle;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (void)_updatePausedStatus;
- (void)serviceUI:(id)arg1 statusDidChange:(id)arg2;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_updateCountsAndStatus;
@property(readonly, nonatomic) id <PXDisplayMomentShare> momentShare;
@property(readonly, copy) NSString *description;
- (id)initWithMomentShare:(id)arg1 presentationStyle:(long long)arg2;
- (id)initWithMomentShareStatus:(id)arg1 presentationStyle:(long long)arg2;
- (id)init;

@end

