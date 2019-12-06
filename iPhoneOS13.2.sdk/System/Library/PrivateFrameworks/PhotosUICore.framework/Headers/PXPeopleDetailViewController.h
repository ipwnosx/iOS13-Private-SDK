//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotosDetailsUIViewController.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSArray, PXPeopleDetailStatusOverlayView, UIScrollView;

@interface PXPeopleDetailViewController : PXPhotosDetailsUIViewController <PXPhotoLibraryUIChangeObserver>
{
    BOOL _processingFaces;
    NSArray *_people;
    PXPeopleDetailStatusOverlayView *_overlayView;
    UIScrollView *_overlayScrollView;
    NSArray *_overlayConstraints;
}

@property(retain, nonatomic) NSArray *overlayConstraints; // @synthesize overlayConstraints=_overlayConstraints;
@property(retain, nonatomic) UIScrollView *overlayScrollView; // @synthesize overlayScrollView=_overlayScrollView;
@property(retain, nonatomic) PXPeopleDetailStatusOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) NSArray *people; // @synthesize people=_people;
@property(nonatomic, getter=isProcessingFaces) BOOL processingFaces; // @synthesize processingFaces=_processingFaces;
// - (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (void)_applicationBecameActive:(id)arg1;
- (void)_updateDataSourceWithCollectionForPerson:(id)arg1;
- (void)_launchNaming:(id)arg1;
- (void)_updateHeader;
- (void)_setupHeader;
- (void)_updateOverlayConstraintsIfNeeded;
- (void)_updateOverlayContentSizeIfNeeded;
- (void)_setupProcessingOverlayView;
- (void)_loadComposition;
- (void)_createNewDetailView:(id)arg1;
- (void)_suggestionsDidFinish:(id)arg1;
- (void)refreshName;
- (id)_fetchRefreshedPeople:(id)arg1;
- (void)presentBootstrapViewControllerWithType:(NSUInteger)arg1;
- (BOOL)shouldUpdateStatusBarTitle;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPeople:(id)arg1;

@end

