//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TPMachineIDList : NSObject
{
    NSArray *_entries;
}

@property(readonly) NSArray *entries; // @synthesize entries=_entries;
// - (void).cxx_destruct;
- (id)machineIDsInStatus:(NSUInteger)arg1;
- (id)description;
- (id)entryFor:(id)arg1;
- (id)initWithEntries:(id)arg1;

@end

