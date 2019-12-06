//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXForYouSuggestionsGadgetProvider.h>

#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>

@class PXAssetReference, PXForYouSuggestionAssetsDataSourceManager, PXGestureProvider, PXPhotoKitAdjustedUIMediaProvider;

@interface PXForYouEditSuggestionsGadgetProvider : PXForYouSuggestionsGadgetProvider <PXOneUpPresentationDelegate>
{
    PXPhotoKitAdjustedUIMediaProvider *_oneUpMediaProvider;
    PXForYouSuggestionAssetsDataSourceManager *_oneUpDataSourceManager;
    PXAssetReference *_oneUpInitialAssetReference;
    PXGestureProvider *_oneUpGestureProvider;
}

// - (void).cxx_destruct;
- (id)oneUpPresentationGestureProvider:(id)arg1;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)suggestionGadget:(id)arg1 didDismissPreviewController:(id)arg2 committing:(BOOL)arg3;
- (void)suggestionGadget:(id)arg1 willDismissPreviewController:(id)arg2;
- (void)suggestionGadget:(id)arg1 commitViewController:(id)arg2;
- (id)suggestionGadgetPreviewController:(id)arg1;
- (void)presentOneUpForSuggestion:(id)arg1;
- (BOOL)_prepareForOneUpPresentationForSuggestion:(id)arg1;
- (void)configureGadget:(id)arg1;
- (id)init;

@end

