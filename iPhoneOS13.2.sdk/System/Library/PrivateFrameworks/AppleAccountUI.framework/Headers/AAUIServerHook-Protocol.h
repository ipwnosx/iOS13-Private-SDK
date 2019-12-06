//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AAUIServerHookResponse, NSDictionary, NSHTTPURLResponse, RUIElement, RUIObjectModel;
@protocol AAUIServerHookDelegate;

@protocol AAUIServerHook <NSObject>
@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate;
- (void)processObjectModel:(RUIObjectModel *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)processElement:(RUIElement *)arg1 attributes:(NSDictionary *)arg2 objectModel:(RUIObjectModel *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (BOOL)shouldMatchModel:(RUIObjectModel *)arg1;
- (BOOL)shouldMatchElement:(RUIElement *)arg1;

@optional
@property(retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
- (void)harvestDataFromResponse:(NSHTTPURLResponse *)arg1;
@end

