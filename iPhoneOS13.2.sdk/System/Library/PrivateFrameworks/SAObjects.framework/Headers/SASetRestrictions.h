//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAClientStateServerBoundCommand-Protocol.h>
#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray;

@interface SASetRestrictions : SABaseCommand <SAServerBoundCommand, SAClientStateServerBoundCommand>
{
}

+ (id)setRestrictionsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setRestrictions;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *restrictions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

