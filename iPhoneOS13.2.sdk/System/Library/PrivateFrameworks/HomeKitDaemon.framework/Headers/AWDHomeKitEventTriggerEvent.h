//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class AWDHomeKitCalendarEvent, AWDHomeKitCharacteristicEvent, AWDHomeKitCharacteristicThresholdEvent, AWDHomeKitDurationEvent, AWDHomeKitLocationEvent, AWDHomeKitPresenceEvent, AWDHomeKitSignificantTimeEvent;

@interface AWDHomeKitEventTriggerEvent : PBCodable <NSCopying>
{
    AWDHomeKitCalendarEvent *_calendarEvent;
    AWDHomeKitCharacteristicEvent *_charEvent;
    AWDHomeKitCharacteristicThresholdEvent *_charThresholdEvent;
    AWDHomeKitDurationEvent *_durationEvent;
    AWDHomeKitLocationEvent *_locationEvent;
    AWDHomeKitPresenceEvent *_presenceEvent;
    AWDHomeKitSignificantTimeEvent *_significantTimeEvent;
    AWDHomeKitCharacteristicThresholdEvent *_thresholdEvent;
    BOOL _endEvent;
   struct {
        unsigned int endEvent:1;
    } _has;
}

@property(retain, nonatomic) AWDHomeKitDurationEvent *durationEvent; // @synthesize durationEvent=_durationEvent;
@property(retain, nonatomic) AWDHomeKitPresenceEvent *presenceEvent; // @synthesize presenceEvent=_presenceEvent;
@property(retain, nonatomic) AWDHomeKitCharacteristicThresholdEvent *thresholdEvent; // @synthesize thresholdEvent=_thresholdEvent;
@property(retain, nonatomic) AWDHomeKitSignificantTimeEvent *significantTimeEvent; // @synthesize significantTimeEvent=_significantTimeEvent;
@property(retain, nonatomic) AWDHomeKitCalendarEvent *calendarEvent; // @synthesize calendarEvent=_calendarEvent;
@property(retain, nonatomic) AWDHomeKitCharacteristicThresholdEvent *charThresholdEvent; // @synthesize charThresholdEvent=_charThresholdEvent;
@property(retain, nonatomic) AWDHomeKitLocationEvent *locationEvent; // @synthesize locationEvent=_locationEvent;
@property(retain, nonatomic) AWDHomeKitCharacteristicEvent *charEvent; // @synthesize charEvent=_charEvent;
@property(nonatomic) BOOL endEvent; // @synthesize endEvent=_endEvent;
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
@property(readonly, nonatomic) BOOL hasDurationEvent;
@property(readonly, nonatomic) BOOL hasPresenceEvent;
@property(readonly, nonatomic) BOOL hasThresholdEvent;
@property(readonly, nonatomic) BOOL hasSignificantTimeEvent;
@property(readonly, nonatomic) BOOL hasCalendarEvent;
@property(readonly, nonatomic) BOOL hasCharThresholdEvent;
@property(readonly, nonatomic) BOOL hasLocationEvent;
@property(readonly, nonatomic) BOOL hasCharEvent;
@property(nonatomic) BOOL hasEndEvent;

@end

