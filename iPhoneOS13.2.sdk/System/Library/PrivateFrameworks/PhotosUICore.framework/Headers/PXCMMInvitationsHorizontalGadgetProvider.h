//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXForYouRankable-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSDate, PXCMMInvitationsDataSourceManager;
@protocol PXCMMWorkflowPresenting;

@interface PXCMMInvitationsHorizontalGadgetProvider : PXGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXForYouRankable>
{
    PXCMMInvitationsDataSourceManager *_dataSourceManager;
    BOOL _didGenerateGadgets;
    id <PXCMMWorkflowPresenting> _workflowPresenter;
    NSDate *_cachedPriorityDate;
}

@property(retain, nonatomic) NSDate *cachedPriorityDate; // @synthesize cachedPriorityDate=_cachedPriorityDate;
@property(readonly, nonatomic) id <PXCMMWorkflowPresenting> workflowPresenter; // @synthesize workflowPresenter=_workflowPresenter;
// - (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)resetPriorityDate;
@property(readonly, nonatomic) NSUInteger gadgetType;
@property(readonly, nonatomic) long long defaultPriority;
@property(readonly, nonatomic) long long priorityType;
@property(readonly, nonatomic) NSDate *priorityDate;
- (void)generateGadgets;
- (void)loadDataForGadgets;
- (NSUInteger)estimatedNumberOfGadgets;
- (BOOL)supportsDynamicRanking;
- (void)_updateGadgets;
- (void)_configureDataSourceManager;
- (id)initWithWorkflowPresenter:(id)arg1;
- (id)init;

@end

