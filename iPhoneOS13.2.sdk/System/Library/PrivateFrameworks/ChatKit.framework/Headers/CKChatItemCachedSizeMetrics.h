//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class IMDoubleLinkedListNode, NSDate, NSString;

@interface CKChatItemCachedSizeMetrics : NSObject <NSSecureCoding>
{
    NSString *_chatItemGUID;
    NSString *_key;
    NSDate *_lastAccess;
    IMDoubleLinkedListNode *_node;
    CGSize _size;
    UIEdgeInsets _textAlignmentInsets;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) IMDoubleLinkedListNode *node; // @synthesize node=_node;
@property(retain, nonatomic) NSDate *lastAccess; // @synthesize lastAccess=_lastAccess;
@property(nonatomic) UIEdgeInsets textAlignmentInsets; // @synthesize textAlignmentInsets=_textAlignmentInsets;
@property(nonatomic) CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *chatItemGUID; // @synthesize chatItemGUID=_chatItemGUID;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

