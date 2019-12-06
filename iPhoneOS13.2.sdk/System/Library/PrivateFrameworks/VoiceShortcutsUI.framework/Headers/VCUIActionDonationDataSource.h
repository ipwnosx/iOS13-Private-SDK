//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSOrderedSet, UITableView;
@protocol OS_dispatch_queue;

@interface VCUIActionDonationDataSource : NSObject <UITableViewDataSource>
{
    UITableView *_tableView;
    Class _fetcherClass;
    NSObject<OS_dispatch_queue> *_queue;
    NSOrderedSet *_donations;
}

+ (void)initialize;
@property(copy, nonatomic) NSOrderedSet *donations; // @synthesize donations=_donations;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) Class fetcherClass; // @synthesize fetcherClass=_fetcherClass;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
// - (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)donationAtIndexPath:(id)arg1;
- (void)refreshDonations;
- (id)initWithFetcher:(Class)arg1;

@end

