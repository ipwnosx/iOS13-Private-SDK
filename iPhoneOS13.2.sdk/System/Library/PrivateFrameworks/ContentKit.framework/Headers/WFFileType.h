//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFType.h>

@class NSArray, NSDictionary, NSString, NSURL, WFImage;

@interface WFFileType : WFType
{
    NSString *_string;
//    const struct __CFString _utType;
    NSString *_pboardType;
    NSString *_OSType;
}

//  (id)typesForTagClass:(const struct __CFString )arg1 tag:(const struct __CFString )arg2 conformingToType:(const struct __CFString )arg3;
//  (id)typeForTagClass:(const struct __CFString )arg1 tag:(const struct __CFString )arg2;
+ (id)typesFromUTTypes:(id)arg1;
+ (id)typesFromUTTypes:(id)arg1 excludingType:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)typeFromPasteboardType:(id)arg1;
+ (id)typeFromMIMEType:(id)arg1;
+ (id)typeFromFileExtension:(id)arg1;
+ (id)typeFromFilename:(id)arg1;
//  (id)typeWithUTType:(const struct __CFString )arg1 string:(id)arg2;
//  (id)typeWithUTType:(const struct __CFString )arg1;
+ (id)typeWithString:(id)arg1;
//  (id)cachedFileTypeForUTType:(const struct __CFString )arg1;
@property(readonly, nonatomic) NSString *OSType; // @synthesize OSType=_OSType;
@property(readonly, nonatomic) NSString *pboardType; // @synthesize pboardType=_pboardType;
// - (void).cxx_destruct;
//  (id)conformingTypesWithTagClass:(const struct __CFString )arg1 tag:(id)arg2;
//  (id)preferredTagWithClass:(const struct __CFString )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *MIMEType;
@property(readonly, nonatomic) NSString *fileExtension;
@property(readonly, nonatomic) NSArray *typesConformedTo;
@property(readonly, nonatomic) NSURL *declaringBundleURL;
@property(readonly, nonatomic) NSDictionary *typeDeclaration;
@property(readonly, nonatomic) NSString *typeDescription;
@property(readonly, nonatomic, getter=isDynamic) BOOL dynamic;
@property(readonly, nonatomic, getter=isDeclared) BOOL declared;
- (id)conformingTypesWithMIMEType:(id)arg1;
- (id)conformingTypesWithFileExtension:(id)arg1;
- (BOOL)conformsToUTTypes:(id)arg1;
//  (BOOL)conformsToUTType:(const struct __CFString )arg1;
- (BOOL)conformsToType:(id)arg1;
//  (BOOL)isEqualToUTType:(const struct __CFString )arg1;
- (BOOL)isEqualToString:(id)arg1;
- (BOOL)isEqualToType:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
// property(readonly, nonatomic) const struct __CFString utType; // @synthesize utType=_utType;
- (void)dealloc;
//  (id)initWithUTType:(const struct __CFString )arg1 string:(id)arg2;
//  (id)initWithUTType:(const struct __CFString )arg1;
@property(readonly, nonatomic) WFImage *documentIcon;
@property(readonly, nonatomic) WFImage *icon;

@end

