//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NUAdContextProvider-Protocol.h>
#import <NewsUI/NUPageNextActionable-Protocol.h>
#import <NewsUI/NUPageStyling-Protocol.h>

@class NSString, UIViewController;
@protocol NUPageable;

@protocol NUPage <NUPageStyling, NUPageNextActionable, NUAdContextProvider>
@property(readonly, nonatomic) BOOL allowNeighboringAdvertising;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)activityProvider:(void (^)(id <NUActivityProvider>))arg1;
- (UIViewController<NUPageable> *)viewController;
- (void)unprepare;
- (void)prepare;
@end

