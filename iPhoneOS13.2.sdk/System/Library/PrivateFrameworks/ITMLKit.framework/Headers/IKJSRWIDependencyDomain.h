//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IKJSRWIDependencyDomain : NSObject
{
    NSString *_identifier;
    Class _agentClass;
    NSDictionary *_types;
    NSDictionary *_commands;
    NSDictionary *_events;
}

+ (void)processDomains:(id)arg1;
+ (id)allDomains;
+ (id)domainAgentClassMap;
+ (id)allowedDomains;
@property(readonly, nonatomic) NSDictionary *events; // @synthesize events=_events;
@property(readonly, nonatomic) NSDictionary *commands; // @synthesize commands=_commands;
@property(readonly, nonatomic) NSDictionary *types; // @synthesize types=_types;
@property(retain, nonatomic) Class agentClass; // @synthesize agentClass=_agentClass;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (BOOL)isValidForEventsWithError:(id )arg1;
- (BOOL)isValidForTypesWithError:(id )arg1;
- (BOOL)isValidForAgentWithError:(id )arg1;
- (BOOL)isValidWithError:(id )arg1;
@property(readonly, nonatomic) NSString *dispatcherClassString;
- (id)initWithDomainDictionary:(id)arg1 agentClass:(Class)arg2;

@end

