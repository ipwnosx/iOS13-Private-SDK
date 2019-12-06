//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>

@class HDCodableSample, NSData, NSString;

@interface HDCodableCDADocumentSample : PBCodable <HDDecoding, NSCopying>
{
    NSString *_authorName;
    NSString *_custodianName;
    NSData *_documentData;
    int _omittedContent;
    NSString *_patientName;
    HDCodableSample *_sample;
    NSString *_title;
   struct {
        unsigned int omittedContent:1;
    } _has;
}

@property(retain, nonatomic) NSString *custodianName; // @synthesize custodianName=_custodianName;
@property(retain, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(retain, nonatomic) NSString *patientName; // @synthesize patientName=_patientName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSData *documentData; // @synthesize documentData=_documentData;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasCustodianName;
@property(readonly, nonatomic) BOOL hasAuthorName;
@property(readonly, nonatomic) BOOL hasPatientName;
@property(readonly, nonatomic) BOOL hasTitle;
@property(readonly, nonatomic) BOOL hasDocumentData;
- (int)StringAsOmittedContent:(id)arg1;
- (id)omittedContentAsString:(int)arg1;
@property(nonatomic) BOOL hasOmittedContent;
@property(nonatomic) int omittedContent; // @synthesize omittedContent=_omittedContent;
@property(readonly, nonatomic) BOOL hasSample;
- (BOOL)applyToObject:(id)arg1;

@end

