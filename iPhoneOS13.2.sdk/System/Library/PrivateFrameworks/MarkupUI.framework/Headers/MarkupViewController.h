//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <MarkupUI/MUContentViewControllerDelegate-Protocol.h>
#import <MarkupUI/PKRulerHostingDelegate-Protocol.h>

@class AKController, AKToolbarView, NSData, NSLayoutConstraint, NSString, NSUndoManager, PDFDocument, PDFView, UIBarButtonItem, UIColor, UIImage, UIImageView, UINavigationBar, UINavigationItem, UIScrollView, UIView;
@protocol MUContentViewControllerProtocol, MarkupViewControllerDelegate;

@interface MarkupViewController : UIViewController <MUContentViewControllerDelegate, UINavigationBarDelegate, UIToolbarDelegate, PKRulerHostingDelegate>
{
    UIColor *_backgroundColor;
    UIColor *_toolbarItemTintColor;
    UIColor *_toolbarTintColor;
    UIColor *_navBarTitleColor;
    BOOL _pencilAlwaysDraws;
    BOOL _toolbarHidden;
    BOOL _thumbnailViewHidden;
    BOOL _showThumbnailViewForMultipage;
    BOOL _navigationModeHorizontal;
    BOOL _needToPerformFullTeardown;
    BOOL _needToPerformDocumentClosedTeardown;
    BOOL _observingAKCurrentPageIndex;
    BOOL _alreadyLoggedSavingForThisDocument;
    BOOL _useFancyTransition;
    BOOL _isAnimatingMarkupExtensionTransition;
    BOOL _userDidCancel;
    BOOL _showAsFormSheet;
    BOOL _encryptPrivateMetadata;
    BOOL _forcesPDFViewTopAlignment;
    BOOL _shapeDetectionEnabled;
    BOOL _allowShakeToUndo;
    BOOL _centersIgnoringContentInsets;
    BOOL _showShareButtonInToolbar;
    long long _toolbarPosition;
    UINavigationBar *_navBar;
    UIViewController<MUContentViewControllerProtocol> *_contentViewController;
    NSString *_sourceContentType;
    id _sourceContent;
    id _digestedSourceContent;
    NSData *_archivedModelData;
    double _initialContentScale;
    UIView *_toolbar;
    AKToolbarView *_modernToolbar;
    NSLayoutConstraint *_toolbarTopConstraint;
    NSLayoutConstraint *_toolbarTopAttachedConstraint;
    NSLayoutConstraint *_toolbarBottomConstraint;
    UINavigationItem *_navItem;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    UIImage *_placeholderImage;
    NSString *_preferredFileDisplayName;
    UIView *_contentContainerView;
    UIView *_transitionDimmingView;
    UIView *_whiteView;
    NSString *_hostProcessBundleIdentifier;
    NSUndoManager *_akUndoManager;
    id <MarkupViewControllerDelegate> _delegate;
    UIImageView *_placeholderImageView;
    NSUInteger _inkStyle;
}

+ (double)_maxImageDimensionInView;
+ (BOOL)_isInLowMemoryEnvironment;
+ (id)markupBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)cleanImageMetadataFromData:(id)arg1;
+ (BOOL)hasPrivateImageMetadata:(id)arg1;
+ (id)supportedOutputTypes;
@property NSUInteger inkStyle; // @synthesize inkStyle=_inkStyle;
@property(retain) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(nonatomic) BOOL showShareButtonInToolbar; // @synthesize showShareButtonInToolbar=_showShareButtonInToolbar;
@property(nonatomic) BOOL centersIgnoringContentInsets; // @synthesize centersIgnoringContentInsets=_centersIgnoringContentInsets;
@property(nonatomic) __weak id <MarkupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL allowShakeToUndo; // @synthesize allowShakeToUndo=_allowShakeToUndo;
@property(retain, nonatomic) NSUndoManager *akUndoManager; // @synthesize akUndoManager=_akUndoManager;
@property(nonatomic, getter=isShapeDetectionEnabled) BOOL shapeDetectionEnabled; // @synthesize shapeDetectionEnabled=_shapeDetectionEnabled;
@property(nonatomic) BOOL forcesPDFViewTopAlignment; // @synthesize forcesPDFViewTopAlignment=_forcesPDFViewTopAlignment;
@property(copy, nonatomic) NSString *hostProcessBundleIdentifier; // @synthesize hostProcessBundleIdentifier=_hostProcessBundleIdentifier;
@property BOOL encryptPrivateMetadata; // @synthesize encryptPrivateMetadata=_encryptPrivateMetadata;
@property BOOL showAsFormSheet; // @synthesize showAsFormSheet=_showAsFormSheet;
@property BOOL userDidCancel; // @synthesize userDidCancel=_userDidCancel;
@property BOOL isAnimatingMarkupExtensionTransition; // @synthesize isAnimatingMarkupExtensionTransition=_isAnimatingMarkupExtensionTransition;
@property BOOL useFancyTransition; // @synthesize useFancyTransition=_useFancyTransition;
@property(retain) UIView *whiteView; // @synthesize whiteView=_whiteView;
@property(retain) UIView *transitionDimmingView; // @synthesize transitionDimmingView=_transitionDimmingView;
@property(retain) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(copy, nonatomic) NSString *preferredFileDisplayName; // @synthesize preferredFileDisplayName=_preferredFileDisplayName;
@property(nonatomic) BOOL alreadyLoggedSavingForThisDocument; // @synthesize alreadyLoggedSavingForThisDocument=_alreadyLoggedSavingForThisDocument;
@property(retain) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UINavigationItem *navItem; // @synthesize navItem=_navItem;
@property(retain) NSLayoutConstraint *toolbarBottomConstraint; // @synthesize toolbarBottomConstraint=_toolbarBottomConstraint;
@property(retain) NSLayoutConstraint *toolbarTopAttachedConstraint; // @synthesize toolbarTopAttachedConstraint=_toolbarTopAttachedConstraint;
@property(retain) NSLayoutConstraint *toolbarTopConstraint; // @synthesize toolbarTopConstraint=_toolbarTopConstraint;
@property(retain) AKToolbarView *modernToolbar; // @synthesize modernToolbar=_modernToolbar;
@property(retain, nonatomic) UIView *toolbar; // @synthesize toolbar=_toolbar;
@property double initialContentScale; // @synthesize initialContentScale=_initialContentScale;
@property(retain) NSData *archivedModelData; // @synthesize archivedModelData=_archivedModelData;
@property(retain) id digestedSourceContent; // @synthesize digestedSourceContent=_digestedSourceContent;
@property(retain, nonatomic) id sourceContent; // @synthesize sourceContent=_sourceContent;
@property(retain) NSString *sourceContentType; // @synthesize sourceContentType=_sourceContentType;
@property(getter=isObservingAKCurrentPageIndex) BOOL observingAKCurrentPageIndex; // @synthesize observingAKCurrentPageIndex=_observingAKCurrentPageIndex;
@property BOOL needToPerformDocumentClosedTeardown; // @synthesize needToPerformDocumentClosedTeardown=_needToPerformDocumentClosedTeardown;
@property BOOL needToPerformFullTeardown; // @synthesize needToPerformFullTeardown=_needToPerformFullTeardown;
@property(retain) UIViewController<MUContentViewControllerProtocol> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic, getter=isNavigationModeHorizontal) BOOL navigationModeHorizontal; // @synthesize navigationModeHorizontal=_navigationModeHorizontal;
@property(nonatomic) BOOL showThumbnailViewForMultipage; // @synthesize showThumbnailViewForMultipage=_showThumbnailViewForMultipage;
@property(nonatomic, getter=isThumbnailViewHidden) BOOL thumbnailViewHidden; // @synthesize thumbnailViewHidden=_thumbnailViewHidden;
@property(retain, nonatomic) UINavigationBar *navBar; // @synthesize navBar=_navBar;
@property(nonatomic) long long toolbarPosition; // @synthesize toolbarPosition=_toolbarPosition;
@property(nonatomic, getter=isToolbarHidden) BOOL toolbarHidden; // @synthesize toolbarHidden=_toolbarHidden;
// - (void).cxx_destruct;
- (long long)toolbarController:(id)arg1 positionForBar:(id)arg2;
- (void)_toolbarShareButtonTapped:(id)arg1;
- (long long)positionForBar:(id)arg1;
@property(readonly) CGSize adjustedSourceImageSize;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)penStrokeCompletedForAnnotationController:(id)arg1;
- (void)annotationController:(id)arg1 detectedEditOfType:(NSUInteger)arg2;
- (void)editDetectedForAnnotationController:(id)arg1;
- (void)editCheckpointReachedForAnnotationController:(id)arg1;
- (BOOL)contentViewController:(id)arg1 shouldHandleURL:(id)arg2;
- (id)annotationControllerOfContentViewController:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)positionSketchOverlay:(id)arg1 forContentViewController:(id)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(NSUInteger)arg1 forContentViewController:(id)arg2;
- (id)undoManagerForContentViewController:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_showTextStyleOptions:(id)arg1;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)editTextAnnotation:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)delete:(id)arg1;
@property(readonly) BOOL isUsedOnDarkBackground;
- (id)_effectiveNavBarTitleColor;
@property(copy) UIColor *navBarTitleColor;
- (id)_effectiveToolbarTintColor;
@property(copy) UIColor *toolbarTintColor;
- (id)_effectiveToolbarItemTintColor;
@property(copy) UIColor *toolbarItemTintColor;
- (id)_effectiveBackgroundColor;
@property(copy) UIColor *backgroundColor;
- (void)_updateNavBarProperties;
- (void)_updateAppearanceForTraitCollection:(id)arg1;
- (void)_updateConstraintsForBarPosition:(long long)arg1;
- (void)adjustContentInsetsForBars;
- (void)_createCancelDoneNavBar;
- (BOOL)rulerHostWantsSharedRuler;
- (id)rulerHostingView;
- (void)_setupAnnotationController;
- (void)_installContentViewControllerForUTI:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)_stopObservingAnnotationController;
- (void)_startObservingAnnotationController;
- (void)_cleanupPlaceholderImage;
- (void)_presentPlaceholderImage;
- (void)_updateundoBarButtonWithController:(id)arg1;
- (void)_setupInitialBaseModelScaleFactorWithScreenSize:(CGSize)arg1 windowDecorationSize:(CGSize)arg2;
- (BOOL)_sourceImageMayContainBaseImageAndModel;
- (void)_bailFailedAnimateEnterMarkup;
@property(readonly, nonatomic) AKController *annotationController;
- (id)filteredToolbarItemsForItems:(id)arg1 fromController:(id)arg2;
- (id)_markupBlackColor;
@property(nonatomic) NSUInteger currentPDFPageIndex;
@property(readonly, nonatomic) UIScrollView *contentViewScrollView;
@property(readonly) PDFView *pdfView;
@property(readonly) PDFDocument *pdfDocument;
- (void)setSourceContent:(id)arg1 withArchivedModelData:(id)arg2;
- (void)_saveEditing:(id)arg1;
@property(nonatomic) BOOL pencilAlwaysDraws; // @synthesize pencilAlwaysDraws=_pencilAlwaysDraws;
@property(nonatomic) BOOL annotationEditingEnabled;
- (void)restoreToolModeForContentType;
@property(nonatomic) BOOL allEditingDisabled;
- (void)_loadSourceContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateAndLoadSourceContent:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_setData:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)_writeToDataConsumer:(CGDataConsumer )arg1 embedSourceImageAndEditModel:(BOOL)arg2 error:(id )arg3;
- (void)revert;
- (void)_cancel;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (void)finalizeCrop;
- (id)createArchivedModelData;
- (id)dataRepresentationWithError:(id )arg1;
- (id)dataRepresentationEmbeddingSourceImageAndEditModel:(BOOL)arg1 error:(id )arg2;
- (BOOL)writeToURL:(id)arg1 error:(id )arg2;
- (BOOL)writeToURL:(id)arg1 embeddingSourceImageAndEditModel:(BOOL)arg2 error:(id )arg3;
@property(readonly, nonatomic) NSString *outputType;
- (void)setData:(id)arg1;
- (void)setData:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setData:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setImage:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3;
- (void)setFileURL:(id)arg1;
- (void)_setFileURL:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setLegacyToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_useLegacyToolbar;
- (long long)preferredStatusBarStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (UIEdgeInsets)sketchOverlayInsets;
- (id)undoManager;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (BOOL)canBecomeFirstResponder;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)documentDidCloseTeardown;
- (void)fullTeardown;
- (void)willBeginLoadingNewDocument;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

