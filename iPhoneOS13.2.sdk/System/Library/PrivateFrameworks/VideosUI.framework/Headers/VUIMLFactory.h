//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VUIMLFactory : NSObject
{
}

+ (id)_urlForStyleSheetName:(id)arg1;
+ (void)_registerIOStyleSheets;
+ (void)_registerStylesheets;
+ (void)_registerStyles;
+ (void)_registerElements;
+ (id)sharedInstance;
- (id)_URLForResource:(id)arg1 inBundle:(id)arg2;
- (id)_styleSheetURLForTemplate:(id)arg1;
- (id)navigationControllerForTabIdentifier:(id)arg1;
- (id)styleSheetURLForTemplate:(id)arg1;
- (void)parseAppConfigurationForElement:(id)arg1;
- (id)imageForResource:(id)arg1;
- (id)URLForResource:(id)arg1;
- (id)imageProxyForElement:(id)arg1 withLayout:(id)arg2;
- (Class)collectionViewCellClassForElement:(id)arg1;
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;
- (id)viewForElement:(id)arg1 existingView:(id)arg2;
- (id)init;

@end

