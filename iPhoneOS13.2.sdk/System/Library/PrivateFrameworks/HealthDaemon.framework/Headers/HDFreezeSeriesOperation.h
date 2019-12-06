//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalableOperation.h>

@class NSDictionary, NSUUID;

@interface HDFreezeSeriesOperation : HDJournalableOperation
{
    NSUUID *_identifier;
    NSDictionary *_metadata;
    Class _entityClass;
    NSUUID *_frozenIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUUID *frozenIdentifier; // @synthesize frozenIdentifier=_frozenIdentifier;
@property(readonly, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id )arg3;
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2 entityClass:(Class)arg3;

@end

