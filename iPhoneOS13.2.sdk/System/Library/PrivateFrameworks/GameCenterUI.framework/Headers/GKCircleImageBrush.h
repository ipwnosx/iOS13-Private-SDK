//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKImageBrush.h>

#import <GameCenterUI/GKBrushIdentification-Protocol.h>

@interface GKCircleImageBrush : GKImageBrush <GKBrushIdentification>
{
    CGSize _sizeOverride;
}

@property(nonatomic) CGSize sizeOverride; // @synthesize sizeOverride=_sizeOverride;
- (void)drawInRect:(CGRect)arg1 withContext:(CGContextRef )arg2 input:(id)arg3;
- (double)scaleForInput:(id)arg1;
- (CGSize)sizeForInput:(id)arg1;
- (id)renderedImageIdentifier;

@end

