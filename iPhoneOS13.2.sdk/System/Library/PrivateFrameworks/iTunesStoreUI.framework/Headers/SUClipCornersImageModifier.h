//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUImageModifier.h>

@interface SUClipCornersImageModifier : SUImageModifier
{
    double _cornerRadius;
    int _corners;
}

@property(nonatomic) int corners; // @synthesize corners=_corners;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (CGPathRef)_copyClippingPathForRect:(CGRect)arg1;
- (void)drawBeforeImageForContext:(CGContextRef )arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3;
- (void)drawAfterImageForContext:(CGContextRef )arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3;
- (BOOL)isEqual:(id)arg1;

@end

