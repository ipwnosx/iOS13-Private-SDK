//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AKTrustedPhoneNumber : NSObject
{
    NSNumber *_identifier;
    NSString *_numberWithDialCode;
    NSString *_obfuscatedNumber;
    NSString *_pushMode;
}

@property(retain, nonatomic) NSString *pushMode; // @synthesize pushMode=_pushMode;
@property(retain, nonatomic) NSString *obfuscatedNumber; // @synthesize obfuscatedNumber=_obfuscatedNumber;
@property(retain, nonatomic) NSString *numberWithDialCode; // @synthesize numberWithDialCode=_numberWithDialCode;
@property(retain, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithJSONDictionary:(id)arg1;

@end

