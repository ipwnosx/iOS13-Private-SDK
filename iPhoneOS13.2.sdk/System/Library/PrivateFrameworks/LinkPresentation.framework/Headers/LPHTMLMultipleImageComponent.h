//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPHTMLComponent.h>

@class LPImageViewStyle, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface LPHTMLMultipleImageComponent : LPHTMLComponent
{
    LPImageViewStyle *_style;
    NSString *_themePath;
    NSArray *_images;
}

+ (id)styleSet;
+ (id)ruleDictionaryForStyleWithDarkInterface:(id)arg1;
+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)additionalGlobalOutOfLineStyleDeclarations;
+ (id)additionalRulesForStyle:(id)arg1;
+ (id)baseRules;
// - (void).cxx_destruct;
- (void)buildComponents;
- (void)_computeRowAndColumnSpecificationsForImages:(id)arg1;
- (id)initWithImages:(id)arg1 style:(id)arg2 themePath:(id)arg3 generator:(id)arg4 constrainHeight:(BOOL)arg5;

@end

