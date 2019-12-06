//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString;

@interface _MRSendHIDReportMessageProtobuf : PBCodable <NSCopying>
{
    NSData *_report;
    NSString *_virtualDeviceID;
}

@property(retain, nonatomic) NSData *report; // @synthesize report=_report;
@property(retain, nonatomic) NSString *virtualDeviceID; // @synthesize virtualDeviceID=_virtualDeviceID;
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
@property(readonly, nonatomic) BOOL hasReport;
@property(readonly, nonatomic) BOOL hasVirtualDeviceID;

@end

