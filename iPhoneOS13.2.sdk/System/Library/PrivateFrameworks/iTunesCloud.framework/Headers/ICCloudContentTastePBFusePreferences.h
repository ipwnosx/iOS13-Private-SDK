//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface ICCloudContentTastePBFusePreferences : PBCodable <NSCopying>
{
    NSMutableArray *_preferences;
}

+ (Class)preferencesType;
@property(retain, nonatomic) NSMutableArray *preferences; // @synthesize preferences=_preferences;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)preferencesAtIndex:(NSUInteger)arg1;
- (NSUInteger)preferencesCount;
- (void)addPreferences:(id)arg1;
- (void)clearPreferences;

@end

