//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ENGroupID, NSString;

@interface IDSCloudKitKeyElectionStoreItem : NSObject
{
    NSString *_groupName;
    ENGroupID *_groupID;
}

@property(retain, nonatomic) ENGroupID *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
// - (void).cxx_destruct;
- (id)description;

@end

