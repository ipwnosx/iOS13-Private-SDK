//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTapToRadar-Protocol.h>

@class NSDictionary, NSSet, PXAssetsDataSourceManager, PXCMMActionManager, PXCMMPeopleSuggestionsDataSourceManager, PXCMMPeopleSuggestionsMediaProvider, PXCMMSendBackSuggestionSource, PXCMMViewModel, PXUIMediaProvider;
@protocol PXAssetImportStatusManager;

@interface PXCMMSession : NSObject <PXTapToRadar>
{
    BOOL _hideActionMenu;
    BOOL _publishOriginals;
    BOOL _ppt_presentComposeRecipientView;
    BOOL _ppt_scrollComposeRecipientsView;
    PXAssetsDataSourceManager *_dataSourceManager;
    PXUIMediaProvider *_mediaProvider;
    PXCMMPeopleSuggestionsDataSourceManager *_peopleSuggestionsPreviewDataSourceManager;
    PXCMMPeopleSuggestionsDataSourceManager *_peopleSuggestionsDataSourceManager;
    PXCMMPeopleSuggestionsMediaProvider *_peopleSuggestionsMediaProvider;
    PXCMMSendBackSuggestionSource *_sendBackSuggestionSource;
    PXCMMActionManager *_actionManager;
    NSUInteger _activityType;
    NSUInteger _sourceType;
    PXCMMViewModel *_viewModel;
    double _ppt_delay;
}

+ (id)new;
@property(readonly, nonatomic) BOOL ppt_scrollComposeRecipientsView; // @synthesize ppt_scrollComposeRecipientsView=_ppt_scrollComposeRecipientsView;
@property(readonly, nonatomic) BOOL ppt_presentComposeRecipientView; // @synthesize ppt_presentComposeRecipientView=_ppt_presentComposeRecipientView;
@property(nonatomic) double ppt_delay; // @synthesize ppt_delay=_ppt_delay;
@property(readonly, nonatomic) PXCMMViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) BOOL publishOriginals; // @synthesize publishOriginals=_publishOriginals;
@property(readonly, nonatomic) BOOL hideActionMenu; // @synthesize hideActionMenu=_hideActionMenu;
@property(readonly, nonatomic) NSUInteger sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) NSUInteger activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) PXCMMActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(readonly, nonatomic) PXCMMSendBackSuggestionSource *sendBackSuggestionSource; // @synthesize sendBackSuggestionSource=_sendBackSuggestionSource;
@property(readonly, nonatomic) PXCMMPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider; // @synthesize peopleSuggestionsMediaProvider=_peopleSuggestionsMediaProvider;
@property(readonly, nonatomic) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager; // @synthesize peopleSuggestionsDataSourceManager=_peopleSuggestionsDataSourceManager;
@property(readonly, nonatomic) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsPreviewDataSourceManager; // @synthesize peopleSuggestionsPreviewDataSourceManager=_peopleSuggestionsPreviewDataSourceManager;
@property(readonly, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
// - (void).cxx_destruct;
@property(readonly, nonatomic) id <PXAssetImportStatusManager> importStatusManager;
@property(readonly, nonatomic) NSSet *notificationSuppressionContexts;
- (id)momentShareStatusPresentationWithPresentationStyle:(long long)arg1;
- (id)initWithContext:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSDictionary *diagnosticDictionary;

@end

