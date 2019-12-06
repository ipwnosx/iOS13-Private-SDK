//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString;

@interface FCCKPResponseOperationResultErrorExtension : PBCodable <NSCopying>
{
    NSString *_extensionName;
    NSData *_extensionPayload;
    unsigned int _typeCode;
   struct {
        unsigned int typeCode:1;
    } _has;
}

@property(retain, nonatomic) NSData *extensionPayload; // @synthesize extensionPayload=_extensionPayload;
@property(nonatomic) unsigned int typeCode; // @synthesize typeCode=_typeCode;
@property(retain, nonatomic) NSString *extensionName; // @synthesize extensionName=_extensionName;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasExtensionPayload;
@property(nonatomic) BOOL hasTypeCode;
@property(readonly, nonatomic) BOOL hasExtensionName;
- (void)dealloc;

@end

