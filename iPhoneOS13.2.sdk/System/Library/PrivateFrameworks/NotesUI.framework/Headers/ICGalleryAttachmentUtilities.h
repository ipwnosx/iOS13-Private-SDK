//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICGalleryAttachmentUtilities : NSObject
{
}

+ (CGSize)sizeOfSubAttachment:(id)arg1 forHeight:(double)arg2;
+ (double)requiredWidthForAttachment:(id)arg1 viewHeight:(double)arg2 maxWidth:(double)arg3;
+ (CGSize)sizeOfViewForAttachment:(id)arg1 textViewContentWidth:(double)arg2;
+ (UIImage )imageForSubAttachment:(id)arg1 rotateForMacImageGallery:(BOOL)arg2 allowCached:(BOOL)arg3;
+ (UIImage )imageForSubAttachment:(id)arg1 allowCached:(BOOL)arg2;
+ (UIImage )imageForSubAttachment:(id)arg1;
+ (id)createAndAddSubAttachmentsToGalleryAttachment:(id)arg1 fromDocuments:(id)arg2 imageCache:(id)arg3;
+ (id)createSubAttachmentFromDocument:(id)arg1 imageCache:(id)arg2 galleryAttachment:(id)arg3;

@end

