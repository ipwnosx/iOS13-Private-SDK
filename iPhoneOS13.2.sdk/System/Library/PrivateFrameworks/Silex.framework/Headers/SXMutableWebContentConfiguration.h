//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXWebContentConfiguration.h>

@class NSDictionary, NSLocale, NSString;

@interface SXMutableWebContentConfiguration : SXWebContentConfiguration
{
    NSString *storeFront;
    NSLocale *locale;
    NSString *contentSizeCategory;
    NSDictionary *dataSources;
    CGSize canvasSize;
    CGRect contentFrame;
}

@property(copy, nonatomic) NSDictionary *dataSources; // @synthesize dataSources;
@property(nonatomic) CGRect contentFrame; // @synthesize contentFrame;
@property(nonatomic) CGSize canvasSize; // @synthesize canvasSize;
@property(copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale;
@property(copy, nonatomic) NSString *storeFront; // @synthesize storeFront;
// - (void).cxx_destruct;

@end

