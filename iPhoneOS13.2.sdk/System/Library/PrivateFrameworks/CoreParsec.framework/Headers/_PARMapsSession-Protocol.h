//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSString;

@protocol _PARMapsSession <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSData *metadata;
@property(nonatomic) double relativeTimestamp;
@property(nonatomic) unsigned int sequenceNumber;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *enviroment;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

