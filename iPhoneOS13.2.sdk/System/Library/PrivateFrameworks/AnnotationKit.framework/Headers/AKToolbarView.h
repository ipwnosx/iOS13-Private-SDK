//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <AnnotationKit/AKAttributePickerViewControllerDelegate-Protocol.h>
#import <AnnotationKit/AKSignatureCreationControllerDelegate-Protocol.h>
#import <AnnotationKit/AKSignaturesViewControllerDelegate-Protocol.h>
#import <AnnotationKit/AKToolsListViewControllerDelegate-Protocol.h>
#import <AnnotationKit/PKPaletteViewAnnotationDelegate-Protocol.h>
#import <AnnotationKit/PKPaletteViewPrivateDelegate-Protocol.h>

@class AKAttributePickerViewController, AKAttributesPickerButton, AKController, AKSignatureCreationViewController_iOS, AKSignaturesViewController_iOS, AKTextAttributesViewController, AKToolbarBackgroundView, AKToolsListViewController, NSLayoutConstraint, NSString, PKPaletteHostView, PKPaletteView, PKToolPicker, UIAlertController, UIBarButtonItem, UIToolbar;
@protocol AKToolbarViewOpacityEditingDelegate;

@interface AKToolbarView : UIView <AKToolsListViewControllerDelegate, AKAttributePickerViewControllerDelegate, AKSignaturesViewControllerDelegate, AKSignatureCreationControllerDelegate, UIPopoverPresentationControllerDelegate, PKPaletteViewAnnotationDelegate, PKPaletteViewPrivateDelegate>
{
    UIToolbar *_toolbar;
    AKToolbarBackgroundView *_backgroundView;
    PKPaletteHostView *_paletteHostView;
    PKPaletteView *_paletteView;
    UIBarButtonItem *_undoButton;
    UIBarButtonItem *_redoButton;
    UIBarButtonItem *_shareButton;
    UIBarButtonItem *_shapesPickerButton;
    UIBarButtonItem *_attributesPickerBarButton;
    UIBarButtonItem *_undoRedoFixedSpace;
    UIBarButtonItem *_attributesAddShapeFixedSpace;
    NSLayoutConstraint *_toolbarBottomConstraint;
    NSLayoutConstraint *_heightConstraint;
    UIAlertController *_signaturesAlertController;
    UIAlertController *_undoAlertController;
    AKTextAttributesViewController *_textAttributesViewController;
    AKSignaturesViewController_iOS *_signaturesSheetViewController;
    AKSignatureCreationViewController_iOS *_signaturesCreationController;
    AKToolsListViewController *_toolsListViewController;
    AKAttributePickerViewController *_attributePickerViewController;
    BOOL _showAttributePicker;
    BOOL _shouldUseCachedSafeAreaInsets;
    UIEdgeInsets _cachedSafeAreaInsets;
    AKAttributesPickerButton *_attributesPickerButton;
    NSLayoutConstraint *_attributesPickerButtonWidthConstraint;
    NSLayoutConstraint *_attributesPickerButtonHeigthConstraint;
    PKToolPicker *_toolPicker;
    BOOL _supportsOpacityEditing;
    BOOL _undoRedoButtonsHidden;
    BOOL _alwaysShowUndoButton;
    BOOL _shareButtonHidden;
    BOOL _translucent;
    BOOL _contentsHidden;
    BOOL _wantsClearBackgroundColorInCompactSize;
    AKController *_annotationController;
    id <AKToolbarViewOpacityEditingDelegate> _opacityEditingDelegate;
}

+ (id)redoButtonImage;
+ (id)undoButtonImage;
+ (id)redoButtonImageWithStyle:(NSUInteger)arg1;
+ (id)undoButtonImageWithStyle:(NSUInteger)arg1;
@property(nonatomic) BOOL wantsClearBackgroundColorInCompactSize; // @synthesize wantsClearBackgroundColorInCompactSize=_wantsClearBackgroundColorInCompactSize;
@property(nonatomic) __weak id <AKToolbarViewOpacityEditingDelegate> opacityEditingDelegate; // @synthesize opacityEditingDelegate=_opacityEditingDelegate;
@property(nonatomic) BOOL contentsHidden; // @synthesize contentsHidden=_contentsHidden;
@property(nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent=_translucent;
@property(nonatomic, getter=isShareButtonHidden) BOOL shareButtonHidden; // @synthesize shareButtonHidden=_shareButtonHidden;
@property(nonatomic) BOOL alwaysShowUndoButton; // @synthesize alwaysShowUndoButton=_alwaysShowUndoButton;
@property(nonatomic) BOOL undoRedoButtonsHidden; // @synthesize undoRedoButtonsHidden=_undoRedoButtonsHidden;
@property(nonatomic) __weak AKController *annotationController; // @synthesize annotationController=_annotationController;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (CGRect)frameObscuredInView:(id)arg1;
- (id)inkPicker;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;
- (long long)tagForPKPaletteAnnotationType:(long long)arg1;
- (void)endOpacityEditing;
- (void)paletteViewDidSelectOpacityOption:(id)arg1;
- (void)paletteViewDidSelectPlusButton:(id)arg1;
- (id)paletteViewSelectedAnnotationColor:(id)arg1;
- (void)paletteViewDidChangePosition:(id)arg1;
- (void)paletteViewDidToggleRuler:(id)arg1;
- (void)paletteViewSelectedToolInkDidChange:(id)arg1;
- (id)paletteViewUndoManager:(id)arg1;
- (BOOL)paletteView:(id)arg1 shouldSetSelectedToolColor:(id)arg2;
@property(nonatomic) BOOL supportsOpacityEditing;
- (void)attributePicker:(id)arg1 didSelectToolWithTag:(long long)arg2 attributeTag:(long long)arg3;
- (void)toolsListDidSelectOpacityItem:(id)arg1;
- (void)toolsList:(id)arg1 didSelectToolWithTag:(long long)arg2;
- (void)signatureCreationControllerDidCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToManageSignatures:(id)arg1;
- (void)signaturesViewControllerDidSelectSignature:(id)arg1;
- (void)signaturesViewControllerDidCancel:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect )arg2 inView:(inout id )arg3;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)_setPopoverPresentationSource:(id)arg1 fromSender:(id)arg2 sourceRect:(CGRect)arg3;
- (void)_setPopoverPresentationSource:(id)arg1 fromSender:(id)arg2;
- (void)_showUndoAlertPopover:(id)arg1;
- (void)_showShapeAttributesPopover:(id)arg1;
- (void)_showMarkupToolsPopover:(id)arg1;
- (void)_updateTraitCollectionForViewController:(id)arg1;
- (void)_presentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_dismissCurrentlyPresentedPopoverAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_showTextStylePopover:(id)arg1;
- (void)_showSignaturesPopover:(id)arg1 fromSourceView:(id)arg2 sourceRect:(CGRect)arg3;
- (void)didDismissPopover;
- (void)dismissPresentedPopovers;
- (id)presentedViewController;
- (id)popoverPresentingController;
- (BOOL)isPresentingPopover;
- (BOOL)isPresentingPopovers;
@property(nonatomic) id shareButtonTarget;
@property(nonatomic) SEL shareButtonAction;
- (void)_showColorPicker:(id)arg1;
- (void)_showShapeAttributes:(id)arg1;
- (void)_showTextAttributes:(id)arg1;
- (void)_showShapesPicker:(id)arg1;
- (void)_redo:(id)arg1;
- (void)_undoLongPress:(id)arg1;
- (void)_cleanupAfterUndoAlert;
- (void)_undoAll:(id)arg1;
- (void)_undo:(id)arg1;
- (void)_annotationSelectionNotification:(id)arg1;
- (void)_undoManagerNotification:(id)arg1;
- (void)revalidateItems;
- (void)_installAttributesPickerButtonInPaletteContextEditingViewIfNeeded;
- (void)_updateAttributesPickerButtonWithCurrentSelection:(id)arg1;
- (id)createUndoViewController;
- (void)resetToLastDrawingTool;
- (id)selectedAnnotations;
- (void)setContentsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldUseCompactHeight;
- (BOOL)shouldUseCompactWidth;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (UIEdgeInsets)_safeAreaInsetsWithCachingIfNeeded;
- (void)_shouldUseCachedSafeAreaInsets:(BOOL)arg1;
- (void)_saveCachedSafeAreaInsets;
- (void)updateConstraints;
- (void)layoutSubviews;
- (NSUInteger)layoutForSize:(CGSize)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)_keyWindowDidBecomeActive:(id)arg1;
- (void)_updatePalette;
- (void)forceHideRuler;
- (BOOL)shouldHide;
- (void)_updateAttributeControllerInk:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)_setToolPickerVisible:(BOOL)arg1 forResponder:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)_forceToolPickerVisible:(BOOL)arg1;
- (BOOL)setToolPickerVisible:(BOOL)arg1 forFirstResponder:(id)arg2;
- (void)_setupPaletteViewIfNecessary;
- (void)hideModernToolbarView;
- (void)_textEffectsWindowIsHosted:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) BOOL useNewFullscreenPalette;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

