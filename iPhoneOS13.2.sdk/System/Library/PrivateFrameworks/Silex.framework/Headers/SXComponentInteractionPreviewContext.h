//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInteractionPreviewContext-Protocol.h>

@class UIViewController;

@interface SXComponentInteractionPreviewContext : NSObject <SXComponentInteractionPreviewContext>
{
    UIViewController *_viewController;
    CGRect _sourceRect;
}

@property(readonly, nonatomic) CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
// - (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 sourceRect:(CGRect)arg2;

@end

