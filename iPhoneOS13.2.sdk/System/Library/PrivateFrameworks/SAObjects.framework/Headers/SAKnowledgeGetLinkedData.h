//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAClientBoundCommand-Protocol.h>

@class NSString;

@interface SAKnowledgeGetLinkedData : SABaseClientBoundCommand <SAClientBoundCommand>
{
}

+ (id)getLinkedDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getLinkedData;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *sparqlQuery;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

