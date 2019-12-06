//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCKeyValueStoreCoding-Protocol.h>

@class NSData, NTPBRecordBase, PBCodable;

@interface FCFaultableRecord : NSObject <FCKeyValueStoreCoding>
{
//    struct os_unfair_lock_s _recordLock;
    PBCodable *_record;
    NSData *_recordData;
    NTPBRecordBase *_recordBase;
}

+ (id)readValueFromKeyValuePair:(id)arg1;
+ (int)keyValuePairType;
+ (id)faultableRecordWithRecordData:(id)arg1;
+ (id)faultableRecordWithRecord:(id)arg1;
// property(nonatomic) struct os_unfair_lock_s recordLock; // @synthesize recordLock=_recordLock;
@property(retain, nonatomic) NTPBRecordBase *recordBase; // @synthesize recordBase=_recordBase;
@property(retain, nonatomic) NSData *recordData; // @synthesize recordData=_recordData;
@property(retain, nonatomic) PBCodable *record; // @synthesize record=_record;
// - (void).cxx_destruct;
- (void)writeToKeyValuePair:(id)arg1;
- (id)init;

@end

