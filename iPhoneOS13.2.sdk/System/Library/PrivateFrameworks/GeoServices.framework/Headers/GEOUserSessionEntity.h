//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber, NSString;

@interface GEOUserSessionEntity : NSObject <NSCopying>
{
//     struct GEOSessionID _sessionID;
    unsigned int _sequenceNumber;
    double _sessionCreationTime;
    double _sessionRelativeTimestamp;
}

@property(readonly, nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) double sessionRelativeTimestamp; // @synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp;
@property(nonatomic) double sessionCreationTime; // @synthesize sessionCreationTime=_sessionCreationTime;
// @property(readonly, nonatomic) struct GEOSessionID sessionID; // @synthesize sessionID=_sessionID;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)updateSessionIDFromUUIDString:(id)arg1;
- (void)updateWithSessionEntityString:(id)arg1;
- (BOOL)_isValidSessionIDHighOrLowString:(id)arg1;
@property(readonly, nonatomic) NSString *sessionIDHighString;
@property(readonly, nonatomic) NSString *sessionIDLowString;
@property(readonly, nonatomic) NSNumber *sessionIDHigh;
@property(readonly, nonatomic) NSNumber *sessionIDLow;
@property(readonly, nonatomic) NSString *sessionUUIDString;
@property(readonly, nonatomic) NSString *sessionIDString;
@property(readonly, nonatomic) NSString *sessionEntityString;
- (id)description;
- (id)initWithSessionEntityString:(id)arg1;
// - (id)initWithSessionID:(struct GEOSessionID)arg1 sessionCreationTime:(double)arg2 sequenceNumber:(unsigned int)arg3;
- (double)sessionRelativeTimestampForEventTime:(double)arg1;

@end

