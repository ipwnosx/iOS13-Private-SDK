//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSIndexSet, NSMutableArray, NSString, Protocol, _UIFeedbackParameters, _UIFeedbackPattern;
@protocol UICoordinateSpace, _UIFeedbackPlayer;

@interface _UIFeedback : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _playing;
    float _position;
    _UIFeedbackParameters *_audioParameters;
    _UIFeedbackParameters *_hapticParameters;
    long long _audioOutputMode;
    long long _hapticOutputMode;
    _UIFeedbackPattern *_parentPattern;
    double _delay;
    NSDictionary *_debugDictionary;
    NSString *_name;
    NSString *_category;
    NSUInteger _eventToken;
    id <UICoordinateSpace> _coordinateSpace;
    id <_UIFeedbackPlayer> _player;
}

+ (id)feedbackWithDictionaryRepresentation:(id)arg1;
+ (Class)_parametersClass;
+ (Class)classForType:(id)arg1;
+ (id)type;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic, getter=_player, setter=_setPlayer:) id <_UIFeedbackPlayer> player; // @synthesize player=_player;
@property(nonatomic, getter=_coordinateSpace, setter=_setCoordinateSpace:) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(nonatomic, getter=_eventToken, setter=_setEventToken:) NSUInteger eventToken; // @synthesize eventToken=_eventToken;
@property(retain, nonatomic, getter=_category, setter=_setCategory:) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic, getter=_name, setter=_setName:) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic, getter=_debugDictionary) NSDictionary *debugDictionary; // @synthesize debugDictionary=_debugDictionary;
@property(nonatomic, getter=_delay, setter=_setDelay:) double delay; // @synthesize delay=_delay;
@property(nonatomic, getter=_parentPattern, setter=_setParentPattern:) __weak _UIFeedbackPattern *parentPattern; // @synthesize parentPattern=_parentPattern;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=_playing;
@property(nonatomic) float position; // @synthesize position=_position;
@property(nonatomic) long long hapticOutputMode; // @synthesize hapticOutputMode=_hapticOutputMode;
@property(nonatomic) long long audioOutputMode; // @synthesize audioOutputMode=_audioOutputMode;
@property(readonly, nonatomic) _UIFeedbackParameters *hapticParameters; // @synthesize hapticParameters=_hapticParameters;
@property(readonly, nonatomic) _UIFeedbackParameters *audioParameters; // @synthesize audioParameters=_audioParameters;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=_effectiveFeedbackData) NSArray *effectiveFeedbackData;
- (id)description;
- (void)stop;
- (void)play;
- (void)_playedAtTime:(double)arg1 engine:(id)arg2;
@property(readonly, nonatomic, getter=_effectiveDelay) double effectiveDelay;
@property(readonly, nonatomic, getter=_allSystemSoundIDs) NSIndexSet *allSystemSoundIDs;
@property(readonly, nonatomic, getter=_allEventTypes) NSIndexSet *allEventTypes;
@property(readonly, nonatomic, getter=_individualFeedbacks) NSArray *individualFeedbacks;
@property(readonly, nonatomic, getter=_effectiveSystemSoundID) unsigned int effectiveSystemSoundID;
@property(readonly, nonatomic, getter=_effectiveEventType) NSUInteger effectiveEventType;
@property(readonly, nonatomic, getter=_effectivePlayableFeedbackTypes) NSUInteger effectivePlayableFeedbackTypes;
@property(readonly, nonatomic, getter=_effectiveEnabledFeedbackTypes) NSUInteger effectiveEnabledFeedbackTypes;
@property(readonly, nonatomic, getter=_effectiveFeedbackTypes) NSUInteger effectiveFeedbackTypes;
@property(readonly, nonatomic, getter=_playableProtocol) Protocol *playableProtocol;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(readonly) NSMutableArray *systemSoundSources;
@property(readonly) NSMutableArray *visualizerSources;

@end

