//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TVMediaQueryEvaluator, UIViewController, _TVAppDocumentController;

@protocol _TVAppDocumentControllerDelegate <NSObject>

@optional
- (void)appDocumentController:(_TVAppDocumentController *)arg1 didHostTemplateViewController:(UIViewController *)arg2 usedTransitions:(BOOL)arg3;
- (void)appDocumentController:(_TVAppDocumentController *)arg1 willHostTemplateViewController:(UIViewController *)arg2 usesTransitions:(inout BOOL )arg3;
- (TVMediaQueryEvaluator *)mediaQueryEvaluatorForAppDocumentController:(_TVAppDocumentController *)arg1;
@end

