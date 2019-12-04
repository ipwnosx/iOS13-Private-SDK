//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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
- (void)buildComponents;
- (void)_computeRowAndColumnSpecificationsForImages:(id)arg1;
- (id)initWithImages:(id)arg1 style:(id)arg2 themePath:(id)arg3 generator:(id)arg4 constrainHeight:(_Bool)arg5;

@end
