//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectID;

@interface PLTransientOrderKey : NSObject
{
    long long _orderValue;
    NSManagedObjectID *_objectID;
    NSManagedObjectContext *_moc;
}

@property(retain, nonatomic) NSManagedObjectContext *moc; // @synthesize moc=_moc;
@property(retain, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) long long orderValue; // @synthesize orderValue=_orderValue;
// - (void).cxx_destruct;
- (id)description;
- (id)secondaryOrderSortKey;
- (id)childManagedObject;

@end

