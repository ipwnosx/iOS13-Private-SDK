//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface NTPBSubscriptionDetectionScreenView : PBCodable <NSCopying>
{
    int _countOfSubscriptionsDetected;
   struct {
        unsigned int countOfSubscriptionsDetected:1;
    } _has;
}

@property(nonatomic) int countOfSubscriptionsDetected; // @synthesize countOfSubscriptionsDetected=_countOfSubscriptionsDetected;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCountOfSubscriptionsDetected;

@end

