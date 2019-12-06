//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>

#import <PersonalizationPortraitInternals/PPConnectionsLocationSource-Protocol.h>

@class PPLocalNamedEntityStore;

@interface PPConnectionsNamedEntitySource : PPConnectionsSource <PPConnectionsLocationSource>
{
    PPLocalNamedEntityStore *_namedEntityStore;
}

+ (id)identifier;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(NSUInteger)arg4 consumer:(NSUInteger)arg5 explanationSet:(id)arg6;
- (id)initWithNamedEntityStore:(id)arg1;

@end

