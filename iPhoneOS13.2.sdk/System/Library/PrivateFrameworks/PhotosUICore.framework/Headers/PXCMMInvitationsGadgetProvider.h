//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXCMMInvitationGadgetDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class PXCMMInvitationsDataSource, PXCMMInvitationsDataSourceManager;
@protocol PXCMMWorkflowPresenting;

@interface PXCMMInvitationsGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXCMMInvitationGadgetDelegate>
{
    PXCMMInvitationsDataSource *_dataSource;
    BOOL _didGenerateGadgets;
    PXCMMInvitationsDataSourceManager *_dataSourceManager;
    id <PXCMMWorkflowPresenting> _workflowPresenter;
}

@property(readonly, nonatomic) id <PXCMMWorkflowPresenting> workflowPresenter; // @synthesize workflowPresenter=_workflowPresenter;
@property(readonly, nonatomic) PXCMMInvitationsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (id)invitationForGadget:(id)arg1;
- (void)_setDataSource:(id)arg1 changes:(id)arg2;
- (id)_newGadgetForObjectID:(id)arg1;
- (void)generateGadgets;
- (NSUInteger)estimatedNumberOfGadgets;
- (id)initWithDataSourceManager:(id)arg1 workflowPresenter:(id)arg2;
- (id)init;

@end

