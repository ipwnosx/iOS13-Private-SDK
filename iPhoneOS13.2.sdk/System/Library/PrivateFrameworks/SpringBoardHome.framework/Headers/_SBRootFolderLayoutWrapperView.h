//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface _SBRootFolderLayoutWrapperView : UIView
{
    double _statusBarHeightAdjustment;
    double _headerOffset;
    UIView *_wrappedView;
    CGSize _extendedSize;
}

@property(retain, nonatomic) UIView *wrappedView; // @synthesize wrappedView=_wrappedView;
@property(nonatomic) CGSize extendedSize; // @synthesize extendedSize=_extendedSize;
@property(nonatomic) double headerOffset; // @synthesize headerOffset=_headerOffset;
@property(nonatomic) double statusBarHeightAdjustment; // @synthesize statusBarHeightAdjustment=_statusBarHeightAdjustment;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (void)_updateLayout;
- (void)layoutSubviews;

@end

