//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModeAssertionStoreRecordDictionaryEncoding-Protocol.h>

@class NSString;

@interface DNDSModeAssertionInvalidationDetailsRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>
{
    NSString *_identifier;
}

+ (id)recordForInvalidationDetails:(id)arg1;
// + (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 )arg2;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)object;
// - (id)dictionaryWithKeys:(const CDStruct_0a6492a9 )arg1 options:(NSUInteger)arg2;

@end

