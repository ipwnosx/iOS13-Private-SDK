//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKStroke.h>

@class UIColor;

@interface PKMutableStroke : PKStroke
{
    UIColor *__color;
}

@property(copy, nonatomic) UIColor *_color; // @synthesize _color=__color;
// - (void).cxx_destruct;
- (void)_setColor:(id)arg1;
- (void)_setLocation:(CGPoint)arg1 atIndex:(NSUInteger)arg2;
- (void)_applyTransform:(CGAffineTransform)arg1;

@end

