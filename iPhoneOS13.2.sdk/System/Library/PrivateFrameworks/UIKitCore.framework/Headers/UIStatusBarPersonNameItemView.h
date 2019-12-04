//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarPersonNameItemView : UIStatusBarItemView
{
    NSString *_personNameString;
    double _letterSpacing;
    double _maxWidth;
}

- (id)accessibilityHUDRepresentation;
- (long long)legibilityStyle;
- (double)extraRightPadding;
- (double)addContentOverlap:(double)arg1;
- (double)resetContentOverlap;
- (id)contentsImage;
- (_Bool)_updateWithPersonName:(id)arg1 maxWidth:(double)arg2;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (double)standardPadding;

@end
