//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDKnob.h>

@class TSUImage;

@interface TSDButtonKnob : TSDKnob
{
    TSUImage *mImage;
    BOOL mEnabled;
    BOOL mHighlighted;
}

@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=mHighlighted;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=mEnabled;
@property(retain, nonatomic) TSUImage *image; // @synthesize image=mImage;
- (void)p_updateLayerImage;
- (id)knobImage;
- (BOOL)isHitByUnscaledPoint:(CGPoint)arg1 andRep:(id)arg2 returningDistance:(double )arg3;
- (void)dealloc;
- (id)initWithType:(int)arg1 position:(CGPoint)arg2 radius:(double)arg3 tag:(NSUInteger)arg4 onRep:(id)arg5;
- (id)initWithImage:(id)arg1 tag:(NSUInteger)arg2 onRep:(id)arg3;

@end

