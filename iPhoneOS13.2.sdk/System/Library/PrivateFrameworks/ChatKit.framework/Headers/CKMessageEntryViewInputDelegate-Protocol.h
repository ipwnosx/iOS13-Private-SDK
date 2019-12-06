//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKMessageEntryView, NSIndexPath;

@protocol CKMessageEntryViewInputDelegate <NSObject>
- (long long)messageEntryViewHighLightInputButton:(CKMessageEntryView *)arg1;
- (BOOL)messageEntryShouldHideCaret:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidTakeFocus:(CKMessageEntryView *)arg1;
- (void)messageEntryViewHandwritingButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryViewBrowserButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryViewPhotoButtonHit:(CKMessageEntryView *)arg1;

@optional
- (void)messageEntryViewDidCollapse:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidExpand:(CKMessageEntryView *)arg1;
- (void)messageEntryView:(CKMessageEntryView *)arg1 didSelectPluginAtIndex:(NSIndexPath *)arg2;
- (void)messageEntryViewPhotoButtonTouchDown:(CKMessageEntryView *)arg1;
@end

