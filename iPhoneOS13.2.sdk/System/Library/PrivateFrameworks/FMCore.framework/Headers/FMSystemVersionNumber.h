//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FMSystemVersionNumber : NSObject
{
    long long _baseNumber;
    NSString *_baseLetter;
    long long _buildNumber;
    NSString *_suffix;
}

@property(copy, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property(nonatomic) long long buildNumber; // @synthesize buildNumber=_buildNumber;
@property(copy, nonatomic) NSString *baseLetter; // @synthesize baseLetter=_baseLetter;
@property(nonatomic) long long baseNumber; // @synthesize baseNumber=_baseNumber;
// - (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)initWithString:(id)arg1;
- (id)init;

@end

