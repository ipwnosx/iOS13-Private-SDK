//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFDiffableItemGroup-Protocol.h>

@class NSArray, NSString;

@interface HFSimpleDiffableItemGroup : NSObject <HFDiffableItemGroup, NSCopying>
{
    NSString *_groupIdentifier;
    NSArray *_diffableItems;
}

@property(copy, nonatomic) NSArray *diffableItems; // @synthesize diffableItems=_diffableItems;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

