//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CADCalStoreInfoProvider-Protocol.h>

@protocol CADDatabaseProvider;

__attribute__((visibility("hidden")))
@interface CADCalendarDatabaseCalStoreInfoProvider : NSObject <CADCalStoreInfoProvider>
{
    id <CADDatabaseProvider> _databaseProvider;
}

@property(readonly, nonatomic) __weak id <CADDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
// - (void).cxx_destruct;
- (id)storeInfoList;
- (id)initWithDatabaseProvider:(id)arg1;

@end
