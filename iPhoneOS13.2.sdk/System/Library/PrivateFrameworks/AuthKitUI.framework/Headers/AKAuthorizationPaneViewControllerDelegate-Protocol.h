//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AKAuthorization, AKAuthorizationPaneViewController, AKAuthorizationPresentationContext, AKAuthorizationUserResponse, NSDictionary, NSError, NSString;
@protocol AKAuthorizationEditableDataSources, AKAuthorizationPasswordAuthenticationDelegate;

@protocol AKAuthorizationPaneViewControllerDelegate <NSObject>
- (void)authorizationPaneViewController:(AKAuthorizationPaneViewController *)arg1 didRequestAuthorizationWithUserProvidedInformation:(AKAuthorizationUserResponse *)arg2 completion:(void (^)(AKAuthorization *, NSError *))arg3;
- (void)authorizationPaneViewController:(AKAuthorizationPaneViewController *)arg1 dismissWithAuthorization:(AKAuthorization *)arg2 error:(NSError *)arg3;

@optional
- (void)performPasswordAuthenticationForPaneViewController:(AKAuthorizationPaneViewController<AKAuthorizationPasswordAuthenticationDelegate> *)arg1;
- (void)performAppleIDAuthorizationForPaneViewController:(AKAuthorizationPaneViewController *)arg1;
- (void)authorizationPaneViewController:(AKAuthorizationPaneViewController<AKAuthorizationEditableDataSources> *)arg1 pushEditScope:(NSString *)arg2 presentationContext:(AKAuthorizationPresentationContext *)arg3 options:(NSDictionary *)arg4;
- (void)authorizationPaneViewController:(AKAuthorizationPaneViewController *)arg1 didRequestIconWithCompletion:(void (^)(AKIconContext *, NSError *))arg2;
@end

