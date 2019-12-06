//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, UIImage;

@interface NUWelcomeToNewsViewStyle : NSObject
{
    UIImage *_appIconImage;
    NSAttributedString *_titleAttributedString;
    NSAttributedString *_descriptionAttributedString;
}

@property(readonly, copy, nonatomic) NSAttributedString *descriptionAttributedString; // @synthesize descriptionAttributedString=_descriptionAttributedString;
@property(readonly, copy, nonatomic) NSAttributedString *titleAttributedString; // @synthesize titleAttributedString=_titleAttributedString;
@property(readonly, nonatomic) UIImage *appIconImage; // @synthesize appIconImage=_appIconImage;
// - (void).cxx_destruct;
- (id)createDescriptionAttributedString;
- (id)createTitleAttributedString;
- (id)init;

@end

