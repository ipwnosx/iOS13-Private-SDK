//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol MSPPropertyListReplicaSerialization <NSObject>
@property(readonly, nonatomic) id propertyListRepresentation;
- (id)propertyListRepresentationDecoratingRecordsWithBlock:(NSDictionary * (^)(id <MSPReplicaRecord>))arg1;
- (id)initWithPropertyListRepresentation:(id)arg1 recordCreationHandler:(id <MSPReplicaRecord> (^)(NSUUID *, id <MSPReplicaRecord>))arg2;
@end

