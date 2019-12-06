//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/FPCollectionDataSource-Protocol.h>
#import <FileProvider/FPSpotlightDataSourceDelegate-Protocol.h>

@class FPExtensionDataSource, FPSearchQueryDescriptor, FPSpotlightDataSource;
@protocol FPSpotlightDataSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPSearchQueryDataSource : NSObject <FPCollectionDataSource, FPSpotlightDataSourceDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
    BOOL _invalidated;
    FPSpotlightDataSource *_spotlightDataSource;
    FPExtensionDataSource *_serverSearchDataSource;
    id <FPSpotlightDataSourceDelegate> _delegate;
    FPSearchQueryDescriptor *_queryDescriptor;
}

@property(readonly, nonatomic) FPSearchQueryDescriptor *queryDescriptor; // @synthesize queryDescriptor=_queryDescriptor;
@property(nonatomic) __weak id <FPSpotlightDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)dataSource:(id)arg1 didChangeItemsOrigin:(NSUInteger)arg2;
- (BOOL)dataSourceShouldAlwaysReplaceContents:(id)arg1;
- (void)dataSource:(id)arg1 wasInvalidatedWithError:(id)arg2;
- (void)dataSource:(id)arg1 receivedUpdatedItems:(id)arg2 deletedItems:(id)arg3 hasMoreChanges:(BOOL)arg4;
- (void)dataSource:(id)arg1 replaceContentsWithItems:(id)arg2 hasMoreChanges:(BOOL)arg3;
@property(readonly, nonatomic) BOOL hasMoreIncoming;
- (void)enumerationMightHaveResumed;
- (void)invalidate;
- (void)start;
- (id)initWithQueryDescriptor:(id)arg1 predicate:(id)arg2;

@end

