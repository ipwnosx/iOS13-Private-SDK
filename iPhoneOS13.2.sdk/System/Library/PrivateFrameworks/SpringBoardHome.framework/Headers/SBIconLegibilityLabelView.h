//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoardHome/SBIconLabelView-Protocol.h>

@class SBIconLabelImageParameters, SBIconView;

@interface SBIconLegibilityLabelView : _UILegibilityView <SBIconLabelView>
{
    SBIconView *_iconView;
    SBIconLabelImageParameters *_imageParameters;
}

@property(retain, nonatomic) SBIconLabelImageParameters *imageParameters; // @synthesize imageParameters=_imageParameters;
@property(nonatomic) __weak SBIconView *iconView; // @synthesize iconView=_iconView;
// - (void).cxx_destruct;
- (void)updateIconLabelWithSettings:(id)arg1 imageParameters:(id)arg2;
- (id)initWithSettings:(id)arg1;

@end

