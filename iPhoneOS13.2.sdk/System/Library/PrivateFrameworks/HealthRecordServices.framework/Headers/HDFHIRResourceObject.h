//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthRecordServices/HDFHIRJSONObject.h>

@class HKFHIRIdentifier, NSDate, NSURL;

@interface HDFHIRResourceObject : HDFHIRJSONObject
{
    HKFHIRIdentifier *_identifier;
    NSDate *_receivedDate;
    unsigned long long _extractionHints;
}

+ (_Bool)supportsSecureCoding;
+ (id)identifierDetectedInJSONObject:(id)arg1 error:(id *)arg2;
+ (id)resourceObjectWithJSONObject:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 extractionHints:(unsigned long long)arg5 error:(id *)arg6;
+ (id)resourceObjectWithJSONObject:(id)arg1 serverBaseURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 error:(id *)arg5;
+ (id)resourceObjectWithResourceData:(id)arg1 receivedDate:(id)arg2 extractionHints:(unsigned long long)arg3 error:(id *)arg4;
@property(readonly, nonatomic) unsigned long long extractionHints; // @synthesize extractionHints=_extractionHints;
@property(readonly, copy, nonatomic) NSDate *receivedDate; // @synthesize receivedDate=_receivedDate;
@property(readonly, copy, nonatomic) HKFHIRIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *serverBaseURL;
- (id)_initWithResourceIdentifier:(id)arg1 JSONObject:(id)arg2 sourceURL:(id)arg3 FHIRVersion:(id)arg4 receivedDate:(id)arg5 extractionHints:(unsigned long long)arg6;
- (id)copyWithOriginDataFrom:(id)arg1;

@end
