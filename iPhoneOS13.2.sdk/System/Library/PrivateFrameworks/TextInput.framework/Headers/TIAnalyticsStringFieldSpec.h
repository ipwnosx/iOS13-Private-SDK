//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIAnalyticsFieldSpec.h>

@class NSArray;

@interface TIAnalyticsStringFieldSpec : TIAnalyticsFieldSpec
{
    NSArray *_allowedValues;
}

@property(readonly, nonatomic) NSArray *allowedValues; // @synthesize allowedValues=_allowedValues;
// - (void).cxx_destruct;
- (BOOL)validate:(id)arg1 error:(id )arg2;
- (id)initWithName:(id)arg1 allowedValues:(id)arg2;

@end

