//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface HKHostingAreaLayoutView : UIView
{
    UIView *_hostedView;
}

+ (id)colorBackgroundViewHostingView:(id)arg1;
+ (id)viewHostingView:(id)arg1;
@property(retain, nonatomic) UIView *hostedView; // @synthesize hostedView=_hostedView;
// - (void).cxx_destruct;
- (CGSize)intrinsicContentSize;
- (BOOL)translatesAutoresizingMaskIntoConstraints;

@end

