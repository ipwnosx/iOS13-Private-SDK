//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <SpringBoard/CSExternalAppearanceProviding-Protocol.h>
#import <SpringBoard/CSExternalBehaviorProviding-Protocol.h>
#import <SpringBoard/CSExternalEventHandling-Protocol.h>
#import <SpringBoard/CSExternalPresentationProviding-Protocol.h>

@interface SBDashBoardViewExternalControllerBase : CSCoverSheetViewControllerBase <CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSExternalPresentationProviding, CSExternalEventHandling>
{
    BOOL _externalToDashBoard;
}

@property(readonly, nonatomic, getter=isExternalToDashBoard) BOOL externalToDashBoard; // @synthesize externalToDashBoard=_externalToDashBoard;
- (id)_presenter;
- (void)_unregisterAsExternalProvider;
- (void)_registerAsExternalProviderIfNeeded;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;

@end

