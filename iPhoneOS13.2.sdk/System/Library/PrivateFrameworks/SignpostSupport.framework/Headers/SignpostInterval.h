//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SignpostSupport/SignpostObject.h>

@class NSString, SignpostEvent;

@interface SignpostInterval : SignpostObject
{
    SignpostEvent *_beginEvent;
    SignpostEvent *_endEvent;
}

+ (id)serializationTypeNumber;
@property(retain, nonatomic) SignpostEvent *endEvent; // @synthesize endEvent=_endEvent;
@property(retain, nonatomic) SignpostEvent *beginEvent; // @synthesize beginEvent=_beginEvent;
// - (void).cxx_destruct;
- (id)debugDescription;
- (id)_eventDescriptions;
- (float)durationSeconds;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBeginEvent:(id)arg1 endEvent:(id)arg2;
- (int)tz_dsttime;
- (int)tz_minuteswest;
- (int)tv_usec;
- (long long)tv_sec;
- (BOOL)telemetryEnabled;
- (id)number2Value;
- (id)number2Name;
- (id)number1Value;
- (id)number1Name;
- (id)string2Value;
- (id)string2Name;
- (id)string1Value;
- (id)string1Name;
- (NSUInteger)scope;
- (NSUInteger)durationMachContinuousTime;
- (NSUInteger)endMachContinuousTime;
- (NSUInteger)startMachContinuousTime;
//  (BOOL)endTimezone:(struct timezone )arg1;
//  (BOOL)beginTimezone:(struct timezone )arg1;
- (BOOL)_hasEndTimeval;
- (BOOL)_hasBeginTimeval;
//  (void)_adjustEndTimeVal:(struct timeval )arg1;
//  (void)_adjustBeginTimeVal:(struct timeval )arg1;
- (id)descriptionWithTimeFormat:(NSUInteger)arg1 verbosity:(unsigned char)arg2;
- (id)_descriptionStringForColumn:(NSUInteger)arg1 timeFormat:(NSUInteger)arg2 asBegin:(BOOL)arg3;
@property(readonly, nonatomic) NSString *_intervalTypeString;
@property(readonly, nonatomic) BOOL isSyntheticInterval;
- (id)humanReadableType;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2;
- (id)initWithDictionary:(id)arg1;

@end

