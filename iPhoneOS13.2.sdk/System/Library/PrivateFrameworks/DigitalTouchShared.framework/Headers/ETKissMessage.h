//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DigitalTouchShared/ETMessage.h>

@class KissNode, NSMutableArray, NSMutableSet, SKTexture, SKUniform;

@interface ETKissMessage : ETMessage
{
    SKTexture *_atlas;
    SKUniform *_atlasUniform;
    NSMutableArray *_points;
    NSMutableArray *_angles;
    NSMutableArray *_delays;
    NSMutableSet *_kissMarkNodes;
    double _lastKissTime;
    KissNode *_lastKiss;
    BOOL _didDelegateWillStopPlaying;
    BOOL _didDelegateDidStopPlaying;
}

+ (id)_kissColor;
+ (unsigned short)messageType;
// - (void).cxx_destruct;
- (void)setParentMessage:(id)arg1;
- (BOOL)reachedSizeLimit;
- (double)messageDuration;
- (id)messageTypeAsString;
- (void)stopPlaying;
- (void)_notifyDelegateWillStopPlaying;
- (void)_notifyDelegateDidStopPlaying;
- (void)_displayKissAtPoint:(CGPoint)arg1 angle:(double)arg2 leavesMark:(BOOL)arg3 inScene:(id)arg4;
- (void)_setKissLeavesMark:(id)arg1;
- (void)displayInScene:(id)arg1;
- (BOOL)_hasKissesThatLeaveMark;
- (void)addKissAtNormalizedPoint:(CGPoint)arg1 angle:(double)arg2 time:(double)arg3 toScene:(id)arg4;
- (void)_initAtlas;
- (BOOL)_leaveMarkAtDelay:(double)arg1;
- (id)archiveData;
- (id)initWithArchiveData:(id)arg1;
- (id)init;

@end

