//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, WFVariable, WFVariableConfigurationViewController;

@protocol WFVariableConfigurationViewControllerDelegate <NSObject>
- (void)configurationViewController:(WFVariableConfigurationViewController *)arg1 presentPromptWithTitle:(NSString *)arg2 message:(NSString *)arg3 fieldConfigurationHandler:(void (^)(id <WFAlertTextField>))arg4 commitHandler:(void (^)(NSString *))arg5;
- (void)configurationViewController:(WFVariableConfigurationViewController *)arg1 didUpdateVariable:(WFVariable *)arg2;
@end

