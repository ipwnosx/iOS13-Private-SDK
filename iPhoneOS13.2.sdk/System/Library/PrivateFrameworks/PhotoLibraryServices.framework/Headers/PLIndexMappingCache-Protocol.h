//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSDictionary, PLContainerChangeNotification;
@protocol NSObject><NSCopying;

@protocol PLIndexMappingCache 
@property(readonly, copy, nonatomic) id <NSCopying> cachedIndexMapState;
- (Class)derivedChangeNotificationClass;
- (_Bool)mappedDataSourceChanged:(PLContainerChangeNotification *)arg1 remoteNotificationData:(NSDictionary *)arg2;

@optional
- (id)currentStateForChange;
@end
