//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIReviewInAppRatingButtonViewController : UIViewController
{
    BOOL _enabled;
    NSString *_titleString;
    NSUInteger _style;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) NSUInteger style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
// - (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 style:(NSUInteger)arg2;

@end

