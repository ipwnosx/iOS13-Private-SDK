//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HAPMetadataUnit : HMFObject
{
    NSString *_name;
    NSString *_unitDescription;
}

+ (id)init:(id)arg1 withDictionary:(id)arg2;
@property(retain, nonatomic) NSString *unitDescription; // @synthesize unitDescription=_unitDescription;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (void)dump;
- (id)description;
- (id)generateDictionary;
- (id)initWithName:(id)arg1 description:(id)arg2;

@end

