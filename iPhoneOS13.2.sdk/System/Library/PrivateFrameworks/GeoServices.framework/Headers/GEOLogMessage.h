//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface GEOLogMessage : PBCodable <NSCopying>
{
    NSMutableArray *_logMsgEvents;
    unsigned int _groupRetryCount;
    int _logMessageType;
    struct {
        unsigned int has_groupRetryCount:1;
        unsigned int has_logMessageType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)logMsgEventType;
// - (void).cxx_destruct;
@property(nonatomic) BOOL hasGroupRetryCount;
@property(nonatomic) unsigned int groupRetryCount;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsLogMessageType:(id)arg1;
- (id)logMessageTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasLogMessageType;
@property(nonatomic) int logMessageType;
- (id)logMsgEventAtIndex:(NSUInteger)arg1;
- (NSUInteger)logMsgEventsCount;
- (void)addLogMsgEvent:(id)arg1;
- (void)clearLogMsgEvents;
@property(retain, nonatomic) NSMutableArray *logMsgEvents;

@end

