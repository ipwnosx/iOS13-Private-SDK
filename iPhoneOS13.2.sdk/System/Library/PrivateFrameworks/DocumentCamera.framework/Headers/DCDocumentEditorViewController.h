//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <DocumentCamera/ICDocCamExtractedDocumentControllerDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamViewControllerDelegate-Protocol.h>

@class DCScannedDocument, ICDocCamDocumentInfoCollection, ICDocCamExtractedDocumentViewController, ICDocCamImageCache, NSIndexPath, UIImage, UIView;
@protocol DCDocumentEditorViewControllerDelegate;

@interface DCDocumentEditorViewController : UINavigationController <ICDocCamExtractedDocumentControllerDelegate, ICDocCamViewControllerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate>
{
    BOOL _useCustomRecropTransition;
    ICDocCamExtractedDocumentViewController *_extractedDocumentController;
    id <DCDocumentEditorViewControllerDelegate> _docCamDelegate;
    DCScannedDocument *_scannedDocument;
    ICDocCamDocumentInfoCollection *_docInfoCollection;
    ICDocCamImageCache *_imageCache;
    long long _orientationForRecrop;
    NSIndexPath *_indexPathForRecrop;
    UIImage *_filteredImageForRecrop;
    UIImage *_unfilteredImageForRecrop;
    UIView *_sourceViewForZoomTransition;
}

+ (id)activityTypeOrder;
+ (id)docInfoCollectionFromScannedDocument:(id)arg1 imageCache:(id)arg2;
+ (BOOL)isAvailable;
@property(retain, nonatomic) UIView *sourceViewForZoomTransition; // @synthesize sourceViewForZoomTransition=_sourceViewForZoomTransition;
@property(retain, nonatomic) UIImage *unfilteredImageForRecrop; // @synthesize unfilteredImageForRecrop=_unfilteredImageForRecrop;
@property(retain, nonatomic) UIImage *filteredImageForRecrop; // @synthesize filteredImageForRecrop=_filteredImageForRecrop;
@property(retain, nonatomic) NSIndexPath *indexPathForRecrop; // @synthesize indexPathForRecrop=_indexPathForRecrop;
@property(nonatomic) long long orientationForRecrop; // @synthesize orientationForRecrop=_orientationForRecrop;
@property(nonatomic) BOOL useCustomRecropTransition; // @synthesize useCustomRecropTransition=_useCustomRecropTransition;
@property(retain, nonatomic) ICDocCamImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) ICDocCamDocumentInfoCollection *docInfoCollection; // @synthesize docInfoCollection=_docInfoCollection;
@property(retain, nonatomic) DCScannedDocument *scannedDocument; // @synthesize scannedDocument=_scannedDocument;
@property(nonatomic) __weak id <DCDocumentEditorViewControllerDelegate> docCamDelegate; // @synthesize docCamDelegate=_docCamDelegate;
@property(retain, nonatomic) ICDocCamExtractedDocumentViewController *extractedDocumentController; // @synthesize extractedDocumentController=_extractedDocumentController;
// - (void).cxx_destruct;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)scanDataDelegateWithIdentifier:(id)arg1;
- (id)documentCameraControllerCreateDataCryptorIfNecessary;
- (BOOL)documentCameraController:(id)arg1 canAddImages:(NSUInteger)arg2;
- (id)documentCameraControllerImageCache;
- (void)documentCameraControllerDidCancel:(id)arg1;
- (void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(BOOL)arg4 closeViewController:(BOOL)arg5;
- (void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(BOOL)arg4;
- (void)extractedDocumentControllerDiscardMarkupModelDataForDocument:(id)arg1;
- (id)extractedDocumentControllerMarkupModelDataForDocument:(id)arg1;
- (void)extractedDocumentControllerDidChangeTitle:(id)arg1;
- (id)extractedDocumentControllerTitle;
- (void)extractedDocumentControllerDidSelectCopyFromMenuForDocument:(id)arg1;
- (void)extractedDocumentControllerDidSelectShareFromMenuForDocument:(id)arg1 sourceRect:(CGRect)arg2 sourceView:(id)arg3;
- (void)extractedDocumentController:(id)arg1 shareDocument:(id)arg2 sender:(id)arg3;
- (void)extractedDocumentControllerDidTapAddImage;
- (void)extractedDocumentController:(id)arg1 didTapRecrop:(id)arg2 index:(long long)arg3;
- (void)extractedDocumentControllerDidTapDone:(NSUInteger)arg1;
- (void)extractedDocumentControllerDidTapDone:(NSUInteger)arg1 scanDataDelegate:(id)arg2;
- (void)extractedDocumentControllerDidTapRetake:(NSUInteger)arg1;
- (void)_autoDismiss;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1 scannedDocument:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;

@end

