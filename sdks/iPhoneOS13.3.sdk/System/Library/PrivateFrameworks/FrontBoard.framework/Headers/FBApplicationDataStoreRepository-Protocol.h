//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBApplicationDataStoreRepositoryReading-Protocol.h>
#import <FrontBoard/FBApplicationDataStoreRepositoryWriting-Protocol.h>

@protocol FBApplicationDataStoreRepositoryDelegate;

@protocol FBApplicationDataStoreRepository <FBApplicationDataStoreRepositoryReading, FBApplicationDataStoreRepositoryWriting>
@property(nonatomic) __weak id <FBApplicationDataStoreRepositoryDelegate> delegate;
@end
