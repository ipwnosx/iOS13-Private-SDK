//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMSFamilyAccountPair : NSObject
{
    NSUInteger _downloaderAccountID;
    NSUInteger _familyID;
    NSUInteger _purchaserAccountID;
}

@property(readonly, nonatomic) NSUInteger purchaserAccountID; // @synthesize purchaserAccountID=_purchaserAccountID;
@property(readonly, nonatomic) NSUInteger familyID; // @synthesize familyID=_familyID;
@property(readonly, nonatomic) NSUInteger downloaderAccountID; // @synthesize downloaderAccountID=_downloaderAccountID;
- (id)initWithDownloaderAccountID:(NSUInteger)arg1 purchaserAccountID:(NSUInteger)arg2 familyID:(NSUInteger)arg3;

@end

