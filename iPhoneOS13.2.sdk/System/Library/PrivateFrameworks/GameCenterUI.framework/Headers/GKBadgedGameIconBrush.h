//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKThemeBrush.h>

@interface GKBadgedGameIconBrush : GKThemeBrush
{
    GKThemeBrush *_badgeBrush;
}

@property(retain, nonatomic) GKThemeBrush *badgeBrush; // @synthesize badgeBrush=_badgeBrush;
// - (void).cxx_destruct;
- (void)drawInRect:(CGRect)arg1 withContext:(CGContextRef )arg2 input:(id)arg3;
- (double)scaleForInput:(id)arg1;
- (CGSize)sizeForInput:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

