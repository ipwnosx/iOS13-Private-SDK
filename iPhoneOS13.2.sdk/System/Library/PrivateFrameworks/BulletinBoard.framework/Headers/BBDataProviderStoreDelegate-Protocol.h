//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BBDataProvider, BBParentSectionDataProviderFactory;
@protocol BBDataProviderStore;

@protocol BBDataProviderStoreDelegate <NSObject>
- (void)dataProviderStore:(id <BBDataProviderStore>)arg1 didRemoveDataProvider:(BBDataProvider *)arg2;
- (void)dataProviderStore:(id <BBDataProviderStore>)arg1 didAddDataProvider:(BBDataProvider *)arg2 performMigration:(BOOL)arg3 completion:(void (^)(void))arg4;

@optional
- (void)dataProviderStore:(id <BBDataProviderStore>)arg1 didAddParentSectionFactory:(BBParentSectionDataProviderFactory *)arg2;
@end

