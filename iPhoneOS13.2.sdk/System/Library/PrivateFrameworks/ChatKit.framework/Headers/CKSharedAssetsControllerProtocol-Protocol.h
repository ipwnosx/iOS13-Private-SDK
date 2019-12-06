//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;
@protocol CKSharedAssetsControllerDelegate;

@protocol CKSharedAssetsControllerProtocol <NSObject>
@property(nonatomic) __weak id <CKSharedAssetsControllerDelegate> delegate;
- (BOOL)isDisplayingAttachmentContent;
- (void)updateAttachmentItems:(NSArray *)arg1;
- (void)parentScrollViewDidScroll:(CGPoint)arg1;
- (CGSize)contentSizeThatFits:(CGSize)arg1;
- (NSUInteger)assetType;
@end

