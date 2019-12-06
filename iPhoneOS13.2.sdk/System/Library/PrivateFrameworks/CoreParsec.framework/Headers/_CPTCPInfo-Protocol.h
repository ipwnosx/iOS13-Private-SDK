//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSString;

@protocol _CPTCPInfo <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) NSUInteger txRetransmitBytes;
@property(copy, nonatomic) NSString *statsType;
@property(nonatomic) NSUInteger wiredTXPackets;
@property(nonatomic) NSUInteger wiredRXPackets;
@property(nonatomic) NSUInteger wifiTXPackets;
@property(nonatomic) NSUInteger wifiRXPackets;
@property(nonatomic) unsigned int varRTT;
@property(nonatomic) NSUInteger txRetransmitPackets;
@property(nonatomic) NSUInteger txPackets;
@property(nonatomic) NSUInteger txBytes;
@property(nonatomic) NSUInteger rxPackets;
@property(nonatomic) NSUInteger rxOutOfOrderBytes;
@property(nonatomic) NSUInteger rxDuplicateBytes;
@property(nonatomic) NSUInteger rxBytes;
@property(nonatomic) unsigned int minRTT;
@property(nonatomic) unsigned int connectSuccesses;
@property(nonatomic) unsigned int connectAttempts;
@property(nonatomic) NSUInteger cellTXPackets;
@property(nonatomic) NSUInteger cellRXPackets;
@property(nonatomic) unsigned int avgRTT;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

