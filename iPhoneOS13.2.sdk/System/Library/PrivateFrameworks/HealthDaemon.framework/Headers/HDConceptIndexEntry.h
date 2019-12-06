//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSUUID;

@interface HDConceptIndexEntry : NSObject
{
    NSUUID *_sampleUUID;
    long long _conceptIdentifier;
    long long _conceptVersion;
    NSString *_keyPath;
    NSUInteger _compoundIndex;
    NSUInteger _type;
    NSNumber *_ontologyVersion;
}

@property(readonly, copy, nonatomic) NSNumber *ontologyVersion; // @synthesize ontologyVersion=_ontologyVersion;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUInteger compoundIndex; // @synthesize compoundIndex=_compoundIndex;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) long long conceptVersion; // @synthesize conceptVersion=_conceptVersion;
@property(readonly, nonatomic) long long conceptIdentifier; // @synthesize conceptIdentifier=_conceptIdentifier;
@property(readonly, copy, nonatomic) NSUUID *sampleUUID; // @synthesize sampleUUID=_sampleUUID;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithSampleUUID:(id)arg1 conceptIdentifier:(long long)arg2 conceptVersion:(long long)arg3 keyPath:(id)arg4 compoundIndex:(NSUInteger)arg5 type:(NSUInteger)arg6 ontologyVersion:(id)arg7;
- (id)init;

@end

