//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/QLPreviewItem-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, UITraitCollection;
@protocol CKFileTransfer, OS_dispatch_group;

@interface CKMediaObject : NSObject <QLPreviewItem>
{
    BOOL _isFromMe;
    BOOL _suppressPreviewForUnknownSender;
    BOOL _forceInlinePreviewGeneration;
    id <CKFileTransfer> _transfer;
    UITraitCollection *_transcriptTraitCollection;
    NSURL *_cachedHighQualityFileURL;
    NSObject<OS_dispatch_group> *_highQualityFetchInProgressGroup;
    NSUInteger _oopPreviewRequestCount;
}

+ (id)mediaClasses;
+ (id)attachmentSummary:(NSUInteger)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)iconCache;
+ (BOOL)shouldUseTranscoderGeneratedPreviewSize;
+ (BOOL)shouldShadePreview;
+ (BOOL)shouldScaleUpPreview;
+ (BOOL)isPreviewable;
@property(nonatomic) NSUInteger oopPreviewRequestCount; // @synthesize oopPreviewRequestCount=_oopPreviewRequestCount;
@property(nonatomic) BOOL forceInlinePreviewGeneration; // @synthesize forceInlinePreviewGeneration=_forceInlinePreviewGeneration;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *highQualityFetchInProgressGroup; // @synthesize highQualityFetchInProgressGroup=_highQualityFetchInProgressGroup;
@property(retain, nonatomic) NSURL *cachedHighQualityFileURL; // @synthesize cachedHighQualityFileURL=_cachedHighQualityFileURL;
@property(retain, nonatomic) UITraitCollection *transcriptTraitCollection; // @synthesize transcriptTraitCollection=_transcriptTraitCollection;
@property(nonatomic) BOOL suppressPreviewForUnknownSender; // @synthesize suppressPreviewForUnknownSender=_suppressPreviewForUnknownSender;
@property(nonatomic) BOOL isFromMe; // @synthesize isFromMe=_isFromMe;
@property(retain, nonatomic) id <CKFileTransfer> transfer; // @synthesize transfer=_transfer;
// - (void).cxx_destruct;
- (BOOL)isPromisedItem;
@property(readonly, nonatomic) NSURL *previewItemURL;
@property(readonly, nonatomic) BOOL canShareItem;
- (void)fetchHighQualityFile:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL validatePreviewFormat;
@property(readonly, nonatomic) BOOL generatePreviewOutOfProcess;
@property(readonly, nonatomic) BOOL needsAnimation;
@property(readonly, nonatomic) int mediaType;
- (id)pasteboardItem;
@property(readonly, copy, nonatomic) NSString *UTIType;
@property(readonly, copy, nonatomic) NSString *mimeType;
@property(readonly, copy, nonatomic) NSDictionary *transcoderUserInfo;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, copy, nonatomic) NSURL *fileURL;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy, nonatomic) NSString *transferGUID;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTransfer:(id)arg1 isFromMe:(BOOL)arg2 suppressPreview:(BOOL)arg3 forceInlinePreview:(BOOL)arg4;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)composeImagesForEntryContentViewWidth:(double)arg1;
- (id)ASTCDataFromImage:(id)arg1;
- (id)JPEGDataFromImage:(id)arg1;
- (id)fileManager;
- (id)previewDispatchCache;
- (id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (CGSize)bbSize;
- (id)bbPreviewFillToSize:(CGSize)arg1;
- (BOOL)validPreviewExistsAtURL:(id)arg1;
- (id)savedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;
@property(readonly, copy, nonatomic) NSString *previewFilenameExtension;
- (CGSize)transcodingPreviewPxSize;
//  (struct IMPreviewConstraints)transcodingPreviewConstraints;
//  (CGSize)transcoderGeneratedSizeForConstraints:(struct IMPreviewConstraints)arg1;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3;
- (void)_sampleImageEdges:(id)arg1 usingRect:(CGRect)arg2 forMostlyWhitePixels:(NSUInteger )arg3 otherPixels:(NSUInteger )arg4;
//  (struct IMPreviewConstraints)_previewConstraintsForWidth:(double)arg1;
- (id)_transcodeControllerSharedInstance;
- (void)generateOOPPreviewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (void)prewarmPreviewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (void)cacheAndPersistPreview:(id)arg1 orientation:(BOOL)arg2;
- (id)fileSizeString;
- (id)downloadProgressString;
- (id)downloadProgressImage;
- (BOOL)transcoderPreviewGenerationFailed;
- (BOOL)shouldShowDisclosure;
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (void)export:(id)arg1;
- (BOOL)canExport;
- (BOOL)shouldBeQuickLooked;
- (BOOL)shouldShowViewer;
- (id)location;
- (id)_qlThumbnailGeneratorSharedGenerator;
- (id)richIcon;
- (id)icon;
- (id)subtitle;
- (id)title;
- (Class)inlineStickerBalloonViewClass;
- (Class)previewBalloonViewClass;
- (Class)coloredBalloonViewClass;
- (Class)balloonViewClassForWidth:(double)arg1 orientation:(BOOL)arg2;
- (BOOL)isPreviewable;

@end

