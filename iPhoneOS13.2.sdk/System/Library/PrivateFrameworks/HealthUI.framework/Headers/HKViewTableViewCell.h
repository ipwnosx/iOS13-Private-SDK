//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIView;

@interface HKViewTableViewCell : UITableViewCell
{
    UIView *_hostedView;
}

@property(readonly, nonatomic) UIView *hostedView; // @synthesize hostedView=_hostedView;
// - (void).cxx_destruct;
- (void)_pinViewToContent:(id)arg1;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;

@end

