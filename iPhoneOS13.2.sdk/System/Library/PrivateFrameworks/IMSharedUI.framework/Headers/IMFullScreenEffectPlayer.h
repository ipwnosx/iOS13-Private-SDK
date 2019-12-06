//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUI/IMFullScreenEffectSoundPlayerDelegate-Protocol.h>

@class IMFullScreenEffect, IMMessagePartChatItem, NSString, NSTimer, UIImage;
@protocol IMFullScreenEffectPlayerDelegate, IMFullScreenEffectSoundPlayer;

@interface IMFullScreenEffectPlayer : NSObject <IMFullScreenEffectSoundPlayerDelegate>
{
    BOOL _wasAborted;
    BOOL _shouldRepeat;
    BOOL _triggeredByResponseKit;
    BOOL _isFromMe;
    IMFullScreenEffect *_fullScreenEffect;
    id <IMFullScreenEffectSoundPlayer> _soundPlayer;
    IMMessagePartChatItem *_messagePartChatItem;
    UIImage _messageImage;
    double _startTime;
    double _endTime;
    NSString *_languageCode;
    NSTimer *_effectTimer;
    NSString *_identifier;
    id <IMFullScreenEffectPlayerDelegate> _delegate;
}

@property(nonatomic) __weak id <IMFullScreenEffectPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isFromMe; // @synthesize isFromMe=_isFromMe;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) BOOL triggeredByResponseKit; // @synthesize triggeredByResponseKit=_triggeredByResponseKit;
@property(nonatomic) __weak NSTimer *effectTimer; // @synthesize effectTimer=_effectTimer;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) BOOL shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(nonatomic) BOOL wasAborted; // @synthesize wasAborted=_wasAborted;
@property(retain, nonatomic) UIImage *messageImage; // @synthesize messageImage=_messageImage;
@property(nonatomic) __weak IMMessagePartChatItem *messagePartChatItem; // @synthesize messagePartChatItem=_messagePartChatItem;
@property(retain, nonatomic) id <IMFullScreenEffectSoundPlayer> soundPlayer; // @synthesize soundPlayer=_soundPlayer;
@property(retain, nonatomic) IMFullScreenEffect *fullScreenEffect; // @synthesize fullScreenEffect=_fullScreenEffect;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL didPlay;
@property(readonly, nonatomic) BOOL isPlaying;
- (void)stopPlayingEffect;
- (void)startPlayingEffect;
- (void)prepareToPlayEffect;
- (void)fullScreenEffectSoundPlayerDidStopPlaying:(id)arg1;
- (void)fullScreenEffectSoundPlayerDidStartPlaying:(id)arg1;
- (void)fullScreenEffectSoundPlayerDidPrepare:(id)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)willStartPlaying;
- (void)didStopPlaying;
- (void)abortPlayingEffect;
- (void)didAbortPlaying;
- (void)_didPrepare;
- (void)loadFullScreenEffect:(CDUnknownBlockType)arg1;
- (void)_setFullScreenEffect:(id)arg1;
- (void)didSetFullScreenEffect:(id)arg1;
- (void)dealloc;
- (id)initWithMessagePartChatItem:(id)arg1 languageCode:(id)arg2;
- (id)initWithIdentifier:(id)arg1 isFromMe:(BOOL)arg2;
- (id)createSoundPlayer;
- (void)addFullScreenEffectFilterToTriggeringCell:(id)arg1;
- (void)removeFullScreenEffectFiltersFromCells:(id)arg1;
- (void)addFullScreenEffectFiltersToCells:(id)arg1;
- (BOOL)_shouldAddFilter:(id)arg1 toCell:(id)arg2;

@end

