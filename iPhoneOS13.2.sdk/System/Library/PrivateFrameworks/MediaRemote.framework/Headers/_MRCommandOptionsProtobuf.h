//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString;

@interface _MRCommandOptionsProtobuf : PBCodable <NSCopying>
{
    double _playbackPosition;
    long long _radioStationID;
    NSUInteger _trackID;
    NSString *_commandID;
    NSString *_contentItemID;
    NSString *_contextID;
    NSString *_destinationAppDisplayID;
    NSString *_insertAfterContentItemID;
    NSData *_languageOption;
    NSString *_mediaType;
    NSString *_nowPlayingContentItemID;
    NSData *_playbackQueueContext;
    int _playbackQueueDestinationOffset;
    int _playbackQueueInsertionPosition;
    int _playbackQueueOffset;
    float _playbackRate;
    NSData *_playbackSession;
    NSString *_radioStationHash;
    float _rating;
    NSString *_remoteControlInterface;
    int _repeatMode;
    int _replaceIntent;
    int _sendOptions;
    NSString *_senderID;
    int _shuffleMode;
    float _skipInterval;
    NSString *_sourceID;
    NSString *_stationURL;
    NSData *_systemAppPlaybackQueueData;
    NSData *_userIdentityData;
    BOOL _beginSeek;
    BOOL _endSeek;
    BOOL _externalPlayerCommand;
    BOOL _negative;
    BOOL _requestDefermentToPlaybackQueuePosition;
    BOOL _shouldBeginRadioPlayback;
    BOOL _shouldOverrideManuallyCuratedQueue;
   struct {
        unsigned int playbackPosition:1;
        unsigned int radioStationID:1;
        unsigned int trackID:1;
        unsigned int playbackQueueDestinationOffset:1;
        unsigned int playbackQueueInsertionPosition:1;
        unsigned int playbackQueueOffset:1;
        unsigned int playbackRate:1;
        unsigned int rating:1;
        unsigned int repeatMode:1;
        unsigned int replaceIntent:1;
        unsigned int sendOptions:1;
        unsigned int shuffleMode:1;
        unsigned int skipInterval:1;
        unsigned int beginSeek:1;
        unsigned int endSeek:1;
        unsigned int externalPlayerCommand:1;
        unsigned int negative:1;
        unsigned int requestDefermentToPlaybackQueuePosition:1;
        unsigned int shouldBeginRadioPlayback:1;
        unsigned int shouldOverrideManuallyCuratedQueue:1;
    } _has;
}

@property(retain, nonatomic) NSData *userIdentityData; // @synthesize userIdentityData=_userIdentityData;
@property(retain, nonatomic) NSData *playbackSession; // @synthesize playbackSession=_playbackSession;
@property(nonatomic) BOOL endSeek; // @synthesize endSeek=_endSeek;
@property(nonatomic) BOOL beginSeek; // @synthesize beginSeek=_beginSeek;
@property(retain, nonatomic) NSString *remoteControlInterface; // @synthesize remoteControlInterface=_remoteControlInterface;
@property(retain, nonatomic) NSString *senderID; // @synthesize senderID=_senderID;
@property(retain, nonatomic) NSString *commandID; // @synthesize commandID=_commandID;
@property(retain, nonatomic) NSString *nowPlayingContentItemID; // @synthesize nowPlayingContentItemID=_nowPlayingContentItemID;
@property(retain, nonatomic) NSString *insertAfterContentItemID; // @synthesize insertAfterContentItemID=_insertAfterContentItemID;
@property(retain, nonatomic) NSData *playbackQueueContext; // @synthesize playbackQueueContext=_playbackQueueContext;
@property(retain, nonatomic) NSData *languageOption; // @synthesize languageOption=_languageOption;
@property(nonatomic) int playbackQueueDestinationOffset; // @synthesize playbackQueueDestinationOffset=_playbackQueueDestinationOffset;
@property(nonatomic) int playbackQueueOffset; // @synthesize playbackQueueOffset=_playbackQueueOffset;
@property(retain, nonatomic) NSString *contentItemID; // @synthesize contentItemID=_contentItemID;
@property(nonatomic) int playbackQueueInsertionPosition; // @synthesize playbackQueueInsertionPosition=_playbackQueueInsertionPosition;
@property(nonatomic) BOOL shouldBeginRadioPlayback; // @synthesize shouldBeginRadioPlayback=_shouldBeginRadioPlayback;
@property(retain, nonatomic) NSString *stationURL; // @synthesize stationURL=_stationURL;
@property(nonatomic) BOOL shouldOverrideManuallyCuratedQueue; // @synthesize shouldOverrideManuallyCuratedQueue=_shouldOverrideManuallyCuratedQueue;
@property(nonatomic) BOOL requestDefermentToPlaybackQueuePosition; // @synthesize requestDefermentToPlaybackQueuePosition=_requestDefermentToPlaybackQueuePosition;
@property(retain, nonatomic) NSString *destinationAppDisplayID; // @synthesize destinationAppDisplayID=_destinationAppDisplayID;
@property(retain, nonatomic) NSData *systemAppPlaybackQueueData; // @synthesize systemAppPlaybackQueueData=_systemAppPlaybackQueueData;
@property(retain, nonatomic) NSString *radioStationHash; // @synthesize radioStationHash=_radioStationHash;
@property(nonatomic) long long radioStationID; // @synthesize radioStationID=_radioStationID;
@property(nonatomic) NSUInteger trackID; // @synthesize trackID=_trackID;
@property(retain, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property(nonatomic) double playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property(nonatomic) BOOL negative; // @synthesize negative=_negative;
@property(nonatomic) float rating; // @synthesize rating=_rating;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) float skipInterval; // @synthesize skipInterval=_skipInterval;
@property(nonatomic) BOOL externalPlayerCommand; // @synthesize externalPlayerCommand=_externalPlayerCommand;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasUserIdentityData;
@property(readonly, nonatomic) BOOL hasPlaybackSession;
@property(nonatomic) BOOL hasEndSeek;
@property(nonatomic) BOOL hasBeginSeek;
@property(readonly, nonatomic) BOOL hasRemoteControlInterface;
@property(readonly, nonatomic) BOOL hasSenderID;
@property(readonly, nonatomic) BOOL hasCommandID;
- (int)StringAsReplaceIntent:(id)arg1;
- (id)replaceIntentAsString:(int)arg1;
@property(nonatomic) BOOL hasReplaceIntent;
@property(nonatomic) int replaceIntent; // @synthesize replaceIntent=_replaceIntent;
@property(readonly, nonatomic) BOOL hasNowPlayingContentItemID;
@property(readonly, nonatomic) BOOL hasInsertAfterContentItemID;
@property(readonly, nonatomic) BOOL hasPlaybackQueueContext;
@property(readonly, nonatomic) BOOL hasLanguageOption;
@property(nonatomic) BOOL hasPlaybackQueueDestinationOffset;
@property(nonatomic) BOOL hasPlaybackQueueOffset;
@property(readonly, nonatomic) BOOL hasContentItemID;
@property(nonatomic) BOOL hasPlaybackQueueInsertionPosition;
@property(nonatomic) BOOL hasShouldBeginRadioPlayback;
@property(readonly, nonatomic) BOOL hasStationURL;
@property(nonatomic) BOOL hasShouldOverrideManuallyCuratedQueue;
@property(nonatomic) BOOL hasRequestDefermentToPlaybackQueuePosition;
- (int)StringAsSendOptions:(id)arg1;
- (id)sendOptionsAsString:(int)arg1;
@property(nonatomic) BOOL hasSendOptions;
@property(nonatomic) int sendOptions; // @synthesize sendOptions=_sendOptions;
@property(readonly, nonatomic) BOOL hasDestinationAppDisplayID;
@property(readonly, nonatomic) BOOL hasSystemAppPlaybackQueueData;
@property(readonly, nonatomic) BOOL hasRadioStationHash;
@property(nonatomic) BOOL hasRadioStationID;
@property(nonatomic) BOOL hasTrackID;
@property(readonly, nonatomic) BOOL hasContextID;
- (int)StringAsShuffleMode:(id)arg1;
- (id)shuffleModeAsString:(int)arg1;
@property(nonatomic) BOOL hasShuffleMode;
@property(nonatomic) int shuffleMode; // @synthesize shuffleMode=_shuffleMode;
- (int)StringAsRepeatMode:(id)arg1;
- (id)repeatModeAsString:(int)arg1;
@property(nonatomic) BOOL hasRepeatMode;
@property(nonatomic) int repeatMode; // @synthesize repeatMode=_repeatMode;
@property(nonatomic) BOOL hasPlaybackPosition;
@property(nonatomic) BOOL hasNegative;
@property(nonatomic) BOOL hasRating;
@property(nonatomic) BOOL hasPlaybackRate;
@property(nonatomic) BOOL hasSkipInterval;
@property(nonatomic) BOOL hasExternalPlayerCommand;
@property(readonly, nonatomic) BOOL hasMediaType;
@property(readonly, nonatomic) BOOL hasSourceID;

@end

