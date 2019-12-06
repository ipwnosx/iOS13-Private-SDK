//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMMediaError, DOMTimeRanges, NSString;

@interface DOMHTMLMediaElement : DOMHTMLElement
{
}

- (void)fastSeek:(double)arg1;
- (void)pause;
- (void)play;
- (double)getStartDate;
- (id)canPlayType:(id)arg1;
- (void)load;
@property(copy) NSString *mediaGroup;
@property BOOL webkitClosedCaptionsVisible;
@property(readonly) BOOL webkitHasClosedCaptions;
@property BOOL webkitPreservesPitch;
@property BOOL defaultMuted;
@property BOOL muted;
@property double volume;
@property BOOL controls;
@property BOOL loop;
@property BOOL autoplay;
@property(readonly) BOOL ended;
@property(readonly) DOMTimeRanges *seekable;
@property(readonly) DOMTimeRanges *played;
@property double playbackRate;
@property double defaultPlaybackRate;
@property(readonly) BOOL paused;
@property(readonly) double duration;
@property double currentTime;
@property(readonly) BOOL seeking;
@property(readonly) unsigned short readyState;
@property(readonly) DOMTimeRanges *buffered;
@property(copy) NSString *preload;
@property(readonly) unsigned short networkState;
@property(copy) NSString *crossOrigin;
@property(readonly, copy) NSString *currentSrc;
@property(copy) NSString *src;
@property(readonly) DOMMediaError *error;

@end

