//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptCell.h>

@class UIButton;

@interface CKTranscriptMessageCell : CKTranscriptCell
{
    BOOL _wantsContactImageLayout;
    UIButton *_failureButton;
}

+ (double)failureButtonWidthPlusSpacing;
@property(retain, nonatomic) UIButton *failureButton; // @synthesize failureButton=_failureButton;
@property(nonatomic) BOOL wantsContactImageLayout; // @synthesize wantsContactImageLayout=_wantsContactImageLayout;
// - (void).cxx_destruct;
- (id)contactImageView;
@property(readonly, nonatomic) BOOL failureButtonAdjustsContentAlignmentRect;
@property(nonatomic) BOOL failed;
- (void)layoutSubviewsForContents;
- (UIEdgeInsets)safeAreaInsets;
- (id)description;

@end

