//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIKBRTTouchHistory : NSObject <NSCopying>
{
    NSMutableArray *_history;
    CGPoint _historyOffset;
    double _lastDecayTime;
    BOOL _isLeftHand;
}

@property(nonatomic) BOOL isLeftHand; // @synthesize isLeftHand=_isLeftHand;
// - (void).cxx_destruct;
- (void)_updateOffset;
- (void)reset;
- (void)_decayHistoryToSize:(NSUInteger)arg1;
- (void)_sortHistory;
- (void)decayHistory;
- (void)clearHistory;
- (void)adjustHistoryOffset:(CGPoint)arg1;
- (void)removeInfo:(id)arg1;
- (void)addInfo:(id)arg1;
- (BOOL)containsInfo:(id)arg1;
@property(readonly, nonatomic) CGPoint historyOffset;
@property(readonly, nonatomic) double lastTime;
@property(readonly, nonatomic) BOOL hasHistory;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithIsLeftHand:(BOOL)arg1;

@end

