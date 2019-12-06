//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICAttachmentDrawingModel.h>

@class UIImage;

@interface ICAttachmentDrawingModel (PreviewGeneration)
- (UIImage )generateImageUsingFullscreenRenderer;
- (BOOL)generatePreviewsInOperation:(id)arg1;
- (BOOL)needToGeneratePreviews;
- (BOOL)generatePreviewsDuringCloudActivity;
- (void)drawPreviewInRect:(CGRect)arg1;
- (BOOL)canConvertToHTMLForSharing;
- (id)attributesForSharingHTMLWithTagName:(id )arg1 textContent:(id )arg2;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (id)providerFileTypes;
- (id)providerDataTypes;
- (id)activityItems;
- (id)activityItem;
@property(readonly, nonatomic) UIImage *imageForActivityItem;
- (void)saveDrawing:(id)arg1 withImage:(UIImage )arg2 forImageDrawing:(id)arg3;
- (CDUnknownBlockType)genericBrickThumbnailCreator;
- (CDUnknownBlockType)genericListThumbnailCreator;
@end

