//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/PXPeopleStatusViewDelegate-Protocol.h>

@class PXPeopleProgressManager, PXPeopleSectionedDataSource, PXPeopleStatusViewController;

@interface PXPeopleOnboardingViewController : UIViewController <PXPeopleStatusViewDelegate>
{
    NSUInteger _onboardStatus;
    PXPeopleProgressManager *_progressManager;
    PXPeopleStatusViewController *_statusViewController;
    PXPeopleSectionedDataSource *_peopleDataSource;
}

@property(retain, nonatomic) PXPeopleSectionedDataSource *peopleDataSource; // @synthesize peopleDataSource=_peopleDataSource;
@property(retain, nonatomic) PXPeopleStatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(retain, nonatomic) PXPeopleProgressManager *progressManager; // @synthesize progressManager=_progressManager;
@property(nonatomic) NSUInteger onboardStatus; // @synthesize onboardStatus=_onboardStatus;
// - (void).cxx_destruct;
- (void)_progressChanged:(id)arg1;
- (void)_pushToPeopleHome:(id)arg1;
- (id)peopleHomeController;
- (void)statusViewControllerEnterButtonTapped:(id)arg1;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_updateStatusViewForStatus:(NSUInteger)arg1 progress:(double)arg2;
- (void)_updateWithStatus:(NSUInteger)arg1 progress:(double)arg2;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1 progressManager:(id)arg2;
- (id)init;

@end

