//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <EmailFoundation/EFSQLBindable-Protocol.h>
#import <EmailFoundation/EFSQLExpressable-Protocol.h>
#import <EmailFoundation/EFSQLNumericValueExpressable-Protocol.h>

@class EFSQLBinding, NSString;

@interface NSNumber (EFSQLBindable) <EFSQLBindable, EFSQLExpressable, EFSQLNumericValueExpressable>
@property(readonly, nonatomic) EFSQLBinding *ef_SQLBinding;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;
@end

