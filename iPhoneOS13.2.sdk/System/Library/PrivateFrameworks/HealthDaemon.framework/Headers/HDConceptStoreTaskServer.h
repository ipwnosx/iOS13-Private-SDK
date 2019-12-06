//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/HDConceptIndexManagerObserver-Protocol.h>
#import <HealthDaemon/HDHealthOntologyManagerObserver-Protocol.h>
#import <HealthDaemon/HKConceptStoreServerInterface-Protocol.h>

@interface HDConceptStoreTaskServer : HDStandardTaskServer <HDHealthOntologyManagerObserver, HDConceptIndexManagerObserver, HKConceptStoreServerInterface>
{
}

+ (BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id )arg3;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
- (void)conceptIndexManagerDidBecomeQuiescent:(id)arg1 samplesProcessedCount:(long long)arg2;
- (void)conceptIndexManagerDidChangeExecutionState:(NSUInteger)arg1;
- (void)remote_resetOntologyUsingAssetAtLocation:(id)arg1 rememberLocation:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_cleanUpAfterUnitTestWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_queryNodeNameForAttributeWithKeyID:(id)arg1 value:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_queryCountOfConceptsAssociatedToUserRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_queryConceptsAssociatedToUserRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_breakAssociationFromSample:(id)arg1 toConcept:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_makeAssociationFromSample:(id)arg1 toConcept:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_queryRelationshipsForNodeWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_queryConceptsByRelationship:(id)arg1 fromNodeWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_queryConceptsByRelationship:(id)arg1 toNodeWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_queryConceptsByAttribute:(long long)arg1 withValue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_unitTest_queryConceptByExactNameMatch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_queryConceptByID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_displayNamesByResolvingContexts:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_conceptByResolvingContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_ontologyVersionWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_currentIndexingState:(CDUnknownBlockType)arg1;
- (void)remote_testTaskServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_startTaskServerIfNeeded;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end

