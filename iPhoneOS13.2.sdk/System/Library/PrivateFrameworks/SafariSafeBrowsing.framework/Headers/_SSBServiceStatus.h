//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _SSBServiceStatus : NSObject
{
//     struct ServiceStatus _serviceStatus;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger databaseUpdaterState;
@property(readonly, nonatomic) NSArray *databaseUpdatersStatuses;
- (id)bundleIdentifierForConnectionAtIndex:(NSUInteger)arg1;
- (int)processIdentifierForConnectionAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger connectionCount;
@property(readonly, copy, nonatomic) NSArray *activeTransactions;
@property(readonly) int processIdentifier;
@property(readonly, copy, nonatomic) NSString *name;
// - (id)initWithServiceStatus:(struct ServiceStatus)arg1;

@end

