//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUILoadResourceOperation.h>

@class SSVLoadURLOperation;

__attribute__((visibility("hidden")))
@interface SKUILoadSortDataOperation : SKUILoadResourceOperation
{
    SSVLoadURLOperation *_underlyingOperation;
}

@property __weak SSVLoadURLOperation *underlyingOperation; // @synthesize underlyingOperation=_underlyingOperation;
// - (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)initWithResourceRequest:(id)arg1;

@end

