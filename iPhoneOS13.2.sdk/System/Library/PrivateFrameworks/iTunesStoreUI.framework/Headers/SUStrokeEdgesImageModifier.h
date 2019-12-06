//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUImageModifier.h>

@class UIColor;

@interface SUStrokeEdgesImageModifier : SUImageModifier
{
    UIEdgeInsets _edgeInsets;
    BOOL _fitToImage;
    UIColor *_strokeColor;
    BOOL _strokeCurrentPath;
}

@property(nonatomic) BOOL strokeCurrentPath; // @synthesize strokeCurrentPath=_strokeCurrentPath;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) BOOL fitToImage; // @synthesize fitToImage=_fitToImage;
@property(nonatomic) UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)drawAfterImageForContext:(CGContextRef )arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

