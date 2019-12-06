//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlaybackCoordinatorProviding-Protocol.h>

@class SVWeakObjectCache;
@protocol SVPlaybackCoordinatorFactory;

@interface SVPlaybackCoordinatorManager : NSObject <SVPlaybackCoordinatorProviding>
{
    id <SVPlaybackCoordinatorFactory> _factory;
    SVWeakObjectCache *_playbackCoordinators;
}

@property(readonly, nonatomic) SVWeakObjectCache *playbackCoordinators; // @synthesize playbackCoordinators=_playbackCoordinators;
@property(readonly, nonatomic) id <SVPlaybackCoordinatorFactory> factory; // @synthesize factory=_factory;
// - (void).cxx_destruct;
- (id)playbackCoordinatorForVideo:(id)arg1;
- (id)initWithPlaybackCoordinatorFactory:(id)arg1;

@end

