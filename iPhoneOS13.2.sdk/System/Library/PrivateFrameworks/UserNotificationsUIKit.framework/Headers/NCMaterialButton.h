//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <UserNotificationsUIKit/MTVisualStylingRequiring-Protocol.h>

@class MTVisualStylingProvider, NSArray, NSMutableDictionary;

@interface NCMaterialButton : UIButton <MTVisualStylingRequiring>
{
    MTVisualStylingProvider *_visualStylingProvider;
    NSMutableDictionary *_styling;
    NSMutableDictionary *_imageViewStyling;
}

@property(retain, nonatomic) NSMutableDictionary *imageViewStyling; // @synthesize imageViewStyling=_imageViewStyling;
@property(retain, nonatomic) NSMutableDictionary *styling; // @synthesize styling=_styling;
// - (void).cxx_destruct;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (id)visualStylingProviderForCategory:(long long)arg1;
- (void)_applyImageViewStyling;
- (void)_applyButtonStyling;
- (void)_applyStyling;
- (void)_setFlagsRelatedToState:(NSUInteger)arg1 to:(BOOL)arg2;
- (void)setImageViewStyle:(long long)arg1 forState:(NSUInteger)arg2;
- (void)setStyle:(long long)arg1 forState:(NSUInteger)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

