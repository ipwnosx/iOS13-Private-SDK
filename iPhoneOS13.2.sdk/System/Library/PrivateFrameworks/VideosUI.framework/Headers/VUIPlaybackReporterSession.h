//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol TVPPlayback;

__attribute__((visibility("hidden")))
@interface VUIPlaybackReporterSession : NSObject
{
    NSMutableDictionary *_metadata;
//    struct os_unfair_lock_s _metadataLock;
    BOOL _reportingEnabled;
    NSObject<TVPPlayback> *_player;
    NSString *_UUID;
    id _context;
}

+ (id)transitionReasonForMediaControllerStopReason:(id)arg1 autoStart:(id)arg2;
+ (id)transitionReasonForMediaControllerStartReason:(id)arg1 autoStart:(id)arg2;
+ (id)transitionTypeForMediaControllerAutoStart:(id)arg1;
@property(nonatomic) BOOL reportingEnabled; // @synthesize reportingEnabled=_reportingEnabled;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak NSObject<TVPPlayback> *player; // @synthesize player=_player;
// - (void).cxx_destruct;
- (id)consumeMetadataForKey:(id)arg1;
- (void)setMetadata:(id)arg1 forKey:(id)arg2;
- (id)metadataForKey:(id)arg1;
- (id)description;
- (id)initWithPlayer:(id)arg1 context:(id)arg2;
- (id)consumeStartReason;
- (id)consumeStartType;
- (id)consumeStopReason;
- (id)consumeStopType;

@end

