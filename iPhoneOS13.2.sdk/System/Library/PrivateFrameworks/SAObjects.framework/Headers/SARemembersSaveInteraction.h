//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SARemembersSaveInteraction : SABaseClientBoundCommand <SAAceSerializable>
{
}

+ (id)saveInteractionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)saveInteraction;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *jsonEncodedIntentResponse;
@property(copy, nonatomic) NSString *jsonEncodedIntent;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

