//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKBalloonImageView.h>

@class IMManualUpdater;

__attribute__((visibility("hidden")))
@interface CKAudioProgressView : CKBalloonImageView
{
    BOOL _playing;
    BOOL _played;
    BOOL _color;
    float _progress;
    int _style;
    IMManualUpdater *_displayUpdater;
}

+ (id)templateImageWithControlImage:(id)arg1;
+ (id)templateImageWithType:(unsigned char)arg1;
+ (id)imageWithType:(unsigned char)arg1 color:(BOOL)arg2;
+ (float)progressForTime:(double)arg1 duration:(double)arg2;
@property(retain, nonatomic) IMManualUpdater *displayUpdater; // @synthesize displayUpdater=_displayUpdater;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) BOOL color; // @synthesize color=_color;
@property(nonatomic, getter=isPlayed) BOOL played; // @synthesize played=_played;
@property(nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=_playing;
@property(nonatomic) float progress; // @synthesize progress=_progress;
// - (void).cxx_destruct;
- (void)setNeedsPrepareForDisplay;
- (void)prepareForDisplayIfNeeded;
- (void)prepareForDisplay;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

