//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFResultFeedback.h>


@interface SFResultEngagementFeedback : SFResultFeedback <NSCopying>
{
    BOOL _actionEngaged;
    BOOL _matchesUnengagedSuggestion;
    NSUInteger _triggerEvent;
    NSUInteger _destination;
    NSUInteger _actionTarget;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger actionTarget; // @synthesize actionTarget=_actionTarget;
@property(nonatomic) NSUInteger destination; // @synthesize destination=_destination;
@property(nonatomic) NSUInteger triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(nonatomic) BOOL matchesUnengagedSuggestion; // @synthesize matchesUnengagedSuggestion=_matchesUnengagedSuggestion;
@property(readonly, nonatomic) BOOL actionEngaged; // @synthesize actionEngaged=_actionEngaged;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithResult:(id)arg1 triggerEvent:(NSUInteger)arg2 destination:(NSUInteger)arg3 actionTarget:(NSUInteger)arg4;
- (id)initWithResult:(id)arg1 triggerEvent:(NSUInteger)arg2 destination:(NSUInteger)arg3;
- (id)initWithResult:(id)arg1 actionEngaged:(BOOL)arg2 triggerEvent:(NSUInteger)arg3 destination:(NSUInteger)arg4;

@end

