//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridHeadlineCellLayoutOptions : HUGridCellLayoutOptions
{
    BOOL _editing;
    double _minimumFontSize;
    double _editingBackgroundHeight;
    double _headlineBaselineOffset;
    long long _viewSizeSubclass;
    double _viewWidth;
    double _containerLeadingMargin;
    double _containerTrailingMargin;
}

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1 viewSizeSubclass:(long long)arg2 viewWidth:(double)arg3 navigationBarBottomInset:(double)arg4 containerLeadingMargin:(double)arg5 containerTrailingMargin:(double)arg6;
+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;
@property(readonly, nonatomic) double containerTrailingMargin; // @synthesize containerTrailingMargin=_containerTrailingMargin;
@property(readonly, nonatomic) double containerLeadingMargin; // @synthesize containerLeadingMargin=_containerLeadingMargin;
@property(readonly, nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(readonly, nonatomic) long long viewSizeSubclass; // @synthesize viewSizeSubclass=_viewSizeSubclass;
@property(nonatomic) double headlineBaselineOffset; // @synthesize headlineBaselineOffset=_headlineBaselineOffset;
@property(nonatomic) double editingBackgroundHeight; // @synthesize editingBackgroundHeight=_editingBackgroundHeight;
@property(nonatomic) double minimumFontSize; // @synthesize minimumFontSize=_minimumFontSize;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
- (double)cellInnerMargin;
@property(readonly, nonatomic) double editingBackgroundMinimumWidth;
// - (id)copyWithZone:(_NSZone )arg1;

@end

