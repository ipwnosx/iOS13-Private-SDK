//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVHapticPlayer;

__attribute__((visibility("hidden")))
@interface MediaControlsHapticPlayer : NSObject
{
    AVHapticPlayer *_player;
}

@property(retain, nonatomic) AVHapticPlayer *player; // @synthesize player=_player;
// - (void).cxx_destruct;
- (void)checkError:(id)arg1;
- (void)expandedButtonChanged;
- (void)dealloc;
- (void)tearDown;
- (void)prepare;

@end

