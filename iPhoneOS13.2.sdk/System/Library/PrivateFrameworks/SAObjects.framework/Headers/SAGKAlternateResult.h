//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;
@protocol SAClientBoundCommand;

@interface SAGKAlternateResult : AceObject <SAAceSerializable>
{
}

+ (id)alternateResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)alternateResult;
@property(copy, nonatomic) NSString *name;
@property(retain, nonatomic) id <SAClientBoundCommand> command;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

