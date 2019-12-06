//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMManagementStateCommand_Status : CEMPayloadBase
{
    NSArray *_statusCommands;
    NSArray *_statusDeclarations;
}

+ (id)buildRequiredOnlyWithCommands:(id)arg1 withDeclarations:(id)arg2;
+ (id)buildWithCommands:(id)arg1 withDeclarations:(id)arg2;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSArray *statusDeclarations; // @synthesize statusDeclarations=_statusDeclarations;
@property(copy, nonatomic) NSArray *statusCommands; // @synthesize statusCommands=_statusCommands;
// - (void).cxx_destruct;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

