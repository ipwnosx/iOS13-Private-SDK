//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSString, NSURL, SAUIImageResource;

@interface SAVCSContentDetailPage : SAAceView
{
}

+ (id)contentDetailPageWithDictionary:(id)arg1 context:(id)arg2;
+ (id)contentDetailPage;
@property(copy, nonatomic) NSURL *utsSearchUrl;
@property(copy, nonatomic) NSString *utsId;
@property(nonatomic) BOOL userDriven;
@property(copy, nonatomic) NSURL *url;
@property(copy, nonatomic) NSString *showId;
@property(copy, nonatomic) NSString *seasonId;
@property(copy, nonatomic) NSString *loadingText;
@property(nonatomic) BOOL isEvod;
@property(copy, nonatomic) NSString *imagesJsonContentPayload;
@property(retain, nonatomic) SAUIImageResource *image;
@property(copy, nonatomic) NSString *contentType;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

