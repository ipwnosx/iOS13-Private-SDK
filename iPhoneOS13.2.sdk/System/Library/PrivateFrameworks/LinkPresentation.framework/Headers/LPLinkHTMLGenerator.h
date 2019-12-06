//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMDocument, DOMDocumentFragment, DOMElement, LPCSSResolver, LPCaptionBarPresentationProperties, LPHTMLComponent, LPHTMLVideoComponent, LPImage, LPImagePresentationProperties, LPLinkMetadata, LPMetadataProvider, LPPointUnit, LPTheme, LPVideo, NSArray, NSString, NSURL, UIColor;
@protocol LPLinkHTMLGeneratorDelegate;

@interface LPLinkHTMLGenerator : NSObject
{
    LPMetadataProvider *_pendingMetadataProvider;
    BOOL _mayReceiveAdditionalMetadata;
    BOOL _usesComputedPresentationProperties;
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    NSString *_quotedText;
    LPImage *_image;
    LPImagePresentationProperties *_imageProperties;
    NSArray *_alternateImages;
    LPVideo *_video;
    UIColor *_backgroundColor;
    LPPointUnit *_minimumRootHeight;
    DOMElement *_rootElement;
    LPHTMLComponent *_linkComponent;
    LPHTMLVideoComponent *_videoComponent;
    BOOL _everBuiltView;
    BOOL _useVariablesWhenUsingInlineStyles;
    BOOL _includeClassNamesWhenUsingInlineStyles;
    BOOL _includeDarkInterfaceInlineStyles;
    BOOL _allowsTapToLoad;
    BOOL _useInlineStyles;
    BOOL _applyCornerRadiusToLink;
    BOOL _generateEmailCompatibleMarkup;
    BOOL _isPreliminary;
    id <LPLinkHTMLGeneratorDelegate> _delegate;
    LPLinkMetadata *_metadata;
    NSURL *_URL;
    DOMDocument *_parentDocument;
    LPCSSResolver *_cssResolver;
    long long _style;
    LPTheme *_theme;
}

+ (void)initialize;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) BOOL isPreliminary; // @synthesize isPreliminary=_isPreliminary;
@property(readonly, nonatomic) LPTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) LPCSSResolver *cssResolver; // @synthesize cssResolver=_cssResolver;
@property(readonly, nonatomic) DOMDocument *parentDocument; // @synthesize parentDocument=_parentDocument;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) BOOL generateEmailCompatibleMarkup; // @synthesize generateEmailCompatibleMarkup=_generateEmailCompatibleMarkup;
@property(nonatomic) BOOL applyCornerRadiusToLink; // @synthesize applyCornerRadiusToLink=_applyCornerRadiusToLink;
@property(nonatomic) BOOL useInlineStyles; // @synthesize useInlineStyles=_useInlineStyles;
@property(nonatomic) __weak id <LPLinkHTMLGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setAllowsTapToLoad:) BOOL _allowsTapToLoad; // @synthesize _allowsTapToLoad;
@property(nonatomic, setter=_setIncludeDarkInterfaceInlineStyles:) BOOL _includeDarkInterfaceInlineStyles; // @synthesize _includeDarkInterfaceInlineStyles;
@property(nonatomic, setter=_setIncludeClassNamesWhenUsingInlineStyles:) BOOL _includeClassNamesWhenUsingInlineStyles; // @synthesize _includeClassNamesWhenUsingInlineStyles;
@property(nonatomic, setter=_setUseVariablesWhenUsingInlineStyles:) BOOL _useVariablesWhenUsingInlineStyles; // @synthesize _useVariablesWhenUsingInlineStyles;
// - (void).cxx_destruct;
- (void)_didFollowLink;
@property(readonly, nonatomic) BOOL _canTapToLoad;
- (void)_rebuildView;
- (id)_createQuoteComponent;
- (id)_createMediaComponent;
- (id)_createMediaBottomCaptionBar;
- (id)_createMediaTopCaptionBar;
- (id)_createCaptionBar;
@property(readonly, nonatomic) LPPointUnit *minimumRootHeight;
@property(readonly, nonatomic) LPPointUnit *rootWidth;
@property(readonly, nonatomic) BOOL hasTallMedia;
@property(readonly, nonatomic) BOOL useFlexibleWidth;
- (void)_setPresentationProperties:(id)arg1;
- (void)_computePresentationPropertiesFromMetadata;
- (void)_setMetadata:(id)arg1 isFinal:(BOOL)arg2;
- (void)injectCSSIfNeeded;
- (void)clearCurrentLayout;
- (id)_URLForImage:(id)arg1;
- (id)_URLForResource:(id)arg1 withMIMEType:(id)arg2;
@property(readonly, nonatomic) BOOL delegateRespondsToURLForResource;
@property(readonly, retain, nonatomic) DOMDocumentFragment *documentFragment;
- (void)_fetchMetadata;
@property(readonly, nonatomic) BOOL hasPendingMetadataProvider;
- (id)_createRootElement;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2 document:(id)arg3;
- (id)initWithPresentationProperties:(id)arg1 document:(id)arg2;
- (id)initWithURL:(id)arg1 document:(id)arg2;
- (id)initWithMetadataLoadedFromURL:(id)arg1 document:(id)arg2;
- (id)init;

@end

