//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailing/QLTThumbnailRequest.h>

@class FPItem;

@interface QLTUbiquitousFileThumbnailRequest : QLTThumbnailRequest
{
    FPItem *_item;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) FPItem *item; // @synthesize item=_item;
// - (void).cxx_destruct;
- (BOOL)shouldProvideFoldedGenericIcon;
- (id)computeContentType;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithFPItem:(id)arg1 size:(CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(BOOL)arg5;

@end

