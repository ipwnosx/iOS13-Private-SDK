//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ECIMAPCopyInfo : NSObject
{
    unsigned int _uidValidity;
    NSDictionary *_sourceUIDsToDestinationUIDs;
}

@property(retain, nonatomic) NSDictionary *sourceUIDsToDestinationUIDs; // @synthesize sourceUIDsToDestinationUIDs=_sourceUIDsToDestinationUIDs;
@property(nonatomic) unsigned int uidValidity; // @synthesize uidValidity=_uidValidity;
// - (void).cxx_destruct;

@end

