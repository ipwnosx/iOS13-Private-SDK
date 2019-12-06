//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCalendar/ICSWriting-Protocol.h>

@class ICSDateValue, NSArray, NSMutableDictionary, NSNumber;

@interface ICSRecurrenceRule : NSObject <NSSecureCoding, ICSWriting>
{
    NSUInteger _freq;
    NSMutableDictionary *_parameters;
}

+ (BOOL)supportsSecureCoding;
+ (id)recurrenceRuleFromICSString:(id)arg1;
+ (id)recurrenceRuleFromICSCString:(const char )arg1 withTokenizer:(id)arg2;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)shouldObscureValue;
- (id)parametersToObscure;
- (id)propertiesToObscure;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)ICSStringWithOptions:(NSUInteger)arg1 appendingToString:(id)arg2;
- (id)ICSStringWithOptions:(NSUInteger)arg1;
@property(nonatomic) NSNumber *wkst;
@property(retain, nonatomic) NSArray *bysetpos;
@property(retain, nonatomic) NSArray *bymonth;
@property(retain, nonatomic) NSArray *byweekno;
@property(retain, nonatomic) NSArray *byyearday;
@property(retain, nonatomic) NSArray *bymonthday;
@property(retain, nonatomic) NSArray *byday;
@property(retain, nonatomic) NSArray *byhour;
@property(retain, nonatomic) NSArray *byminute;
@property(retain, nonatomic) NSArray *bysecond;
@property(nonatomic) NSNumber *interval;
@property(nonatomic) NSNumber *count;
@property(retain, nonatomic) ICSDateValue *until;
@property(nonatomic) NSUInteger freq;
- (void)removeParameterValueForName:(id)arg1;
- (void)setParameterValue:(id)arg1 forName:(id)arg2;
- (id)parameterValueForName:(id)arg1;
- (id)initWithFrequency:(NSUInteger)arg1;
- (void)_ICSStringWithOptions:(NSUInteger)arg1 appendingToString:(id)arg2;
- (void)cleanUpForStartDate:(id)arg1;
- (id)occurrencesForStartDate:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 inTimeZone:(id)arg4;

@end

