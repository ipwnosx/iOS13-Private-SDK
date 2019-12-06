//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableArray;

@interface MCAirPrintPayload : MCPayload
{
    NSUInteger _airPrintCount;
    NSMutableArray *_ippAddresses;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) NSMutableArray *ippAddresses; // @synthesize ippAddresses=_ippAddresses;
@property(nonatomic) NSUInteger airPrintCount; // @synthesize airPrintCount=_airPrintCount;
// - (void).cxx_destruct;
- (id)restrictions;
- (id)payloadDescriptionKeyValueSections;
- (id)description;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id )arg3;

@end

