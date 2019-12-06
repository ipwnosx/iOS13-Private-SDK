//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteFetchDelegate-Protocol.h>

@interface CNAutocompleteFetchBlockDelegate : NSObject <CNAutocompleteFetchDelegate>
{
    id /* CDUnknownBlockType */ _resultHandler;
    id /* CDUnknownBlockType */ _errorHandler;
    id /* CDUnknownBlockType */ _finishHandler;
    id /* CDUnknownBlockType */ _beganNetworkActivityHandler;
    id /* CDUnknownBlockType */ _endedNetworkActivityHandler;
    id /* CDUnknownBlockType */ _supplementalResultHandler;
    id /* CDUnknownBlockType */ _adjustmentHandler;
    id /* CDUnknownBlockType */ _willSortHandler;
    id /* CDUnknownBlockType */ _comparatorHandler;
}

@property(copy) id /* CDUnknownBlockType */ comparatorHandler; // @synthesize comparatorHandler=_comparatorHandler;
@property(copy) id /* CDUnknownBlockType */ willSortHandler; // @synthesize willSortHandler=_willSortHandler;
@property(copy) id /* CDUnknownBlockType */ adjustmentHandler; // @synthesize adjustmentHandler=_adjustmentHandler;
@property(copy) id /* CDUnknownBlockType */ supplementalResultHandler; // @synthesize supplementalResultHandler=_supplementalResultHandler;
@property(copy) id /* CDUnknownBlockType */ endedNetworkActivityHandler; // @synthesize endedNetworkActivityHandler=_endedNetworkActivityHandler;
@property(copy) id /* CDUnknownBlockType */ beganNetworkActivityHandler; // @synthesize beganNetworkActivityHandler=_beganNetworkActivityHandler;
@property(copy) id /* CDUnknownBlockType */ finishHandler; // @synthesize finishHandler=_finishHandler;
@property(copy) id /* CDUnknownBlockType */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy) id /* CDUnknownBlockType */ resultHandler; // @synthesize resultHandler=_resultHandler;
// - (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)arg1;
- (CDUnknownBlockType)resultComparatorForAutocompleteFetch:(id)arg1;
- (void)autocompleteFetch:(id)arg1 willSortResults:(id)arg2;
- (id)autocompleteFetch:(id)arg1 willAdjustResults:(id)arg2;
- (BOOL)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)autocompleteFetchDidEndNetworkActivity:(id)arg1;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;

@end

