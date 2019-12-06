//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIStyleEffectConfiguration.h>

@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration
{
    NSString *_backgroundType;
    BOOL _effectShowsValue;
    int _shouldRespectOutputBlending;
}

@property(nonatomic) BOOL effectShowsValue; // @synthesize effectShowsValue=_effectShowsValue;
@property(copy, nonatomic) NSString *backgroundType; // @synthesize backgroundType=_backgroundType;
- (void)setSelectionType:(long long)arg1;
- (id)description;
- (BOOL)shouldRespectOutputBlending;
- (void)setShouldRespectOutputBlending:(BOOL)arg1;
- (BOOL)shouldIgnoreForegroundColor;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;

@end

