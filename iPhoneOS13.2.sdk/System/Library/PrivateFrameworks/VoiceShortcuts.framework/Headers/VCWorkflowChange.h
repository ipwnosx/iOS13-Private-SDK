//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcuts/VCDatabaseChange.h>

@interface VCWorkflowChange : VCDatabaseChange
{
    NSUInteger _syncHash;
}

+ (NSUInteger)syncHashForRecord:(id)arg1;
+ (Class)recordClass;
+ (int)messageType;
@property(readonly, nonatomic) NSUInteger syncHash; // @synthesize syncHash=_syncHash;

@end

