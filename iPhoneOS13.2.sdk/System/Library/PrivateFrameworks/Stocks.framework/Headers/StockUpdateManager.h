//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/StockUpdaterDelegate-Protocol.h>

@class NSHashTable, NSMutableArray;

@interface StockUpdateManager : NSObject <StockUpdaterDelegate>
{
    BOOL _postingRemoteUpdateNotification;
    NSMutableArray *_activeUpdaters;
    NSMutableArray *_inactiveUpdaters;
    NSHashTable *_updateObservers;
}

+ (id)sharedManager;
// - (void).cxx_destruct;
- (void)_updaterDidCancelOrFinish:(id)arg1;
- (void)_kickoffUpdater:(id)arg1 forStocks:(id)arg2 comprehensive:(BOOL)arg3 forceUpdate:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_updateStocksBasic:(id)arg1 forced:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateStaleStocksBasicWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAllStocksBasicWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateStockBasicWithCompletion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateAllStocksBasic:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateAllStocksBasic;
- (void)updateStockComprehensive:(id)arg1 forced:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateStockComprehensive:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateStockComprehensive:(id)arg1;
- (void)updateStocksComprehensive:(id)arg1;
- (void)reset;
- (void)cancel;
- (void)failWithError:(id)arg1;
- (BOOL)hadError;
- (BOOL)isLoading;
- (id)availableStockUpdater;
- (void)resetUpdaters;
- (void)stockUpdater:(id)arg1 didFailWithError:(id)arg2 whileUpdatingStocks:(id)arg3 comprehensive:(BOOL)arg4;
- (void)stockUpdater:(id)arg1 didUpdateStocks:(id)arg2 isComprehensive:(BOOL)arg3;
- (void)stockUpdater:(id)arg1 didRequestUpdateForStocks:(id)arg2 isComprehensive:(BOOL)arg3;
- (void)_stocksDidReload;
- (void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeUpdateObserver:(id)arg1;
- (void)addUpdateObserver:(id)arg1;
- (void)stocksDidUpdateRemotely;
- (void)dealloc;
- (id)init;

@end

