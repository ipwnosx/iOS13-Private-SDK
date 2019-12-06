//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXAVPlayerFactory-Protocol.h>

@protocol SXAVPlayerItemFactory;

@interface SXAVPlayerFactory : NSObject <SXAVPlayerFactory>
{
    int _audioMode;
    id <SXAVPlayerItemFactory> _playerItemFactory;
}

@property(readonly, nonatomic) id <SXAVPlayerItemFactory> playerItemFactory; // @synthesize playerItemFactory=_playerItemFactory;
@property(readonly, nonatomic) int audioMode; // @synthesize audioMode=_audioMode;
// - (void).cxx_destruct;
- (id)createPlayerWithURL:(id)arg1;
- (id)initWithAudioMode:(int)arg1 playerItemFactory:(id)arg2;

@end

