//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <VoiceShortcuts/MTLJSONSerializing-Protocol.h>

@class NSDate, NSString;

@interface VCIDApplicationSyncState : MTLModel <MTLJSONSerializing>
{
    NSString *_checksum;
    NSDate *_registeredDate;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSDate *registeredDate; // @synthesize registeredDate=_registeredDate;
@property(copy, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
// - (void).cxx_destruct;

@end

