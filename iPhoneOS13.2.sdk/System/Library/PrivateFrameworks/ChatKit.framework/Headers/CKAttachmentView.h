//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ChatKit/CKAttachmentView-Protocol.h>

@class CKMediaObject, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CKAttachmentView : UIView <CKAttachmentView>
{
    CKMediaObject *_mediaObject;
    UIImageView *_iconImageView;
    UILabel *_actionLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
// - (void).cxx_destruct;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (id)icon;
- (void)configureIconImageView:(BOOL)arg1;
- (void)setIcon:(id)arg1;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

