//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCTagsFetchOperation, NSDictionary;

@protocol FCTagsFetchOperationDelegate <NSObject>
- (void)tagsFetchOperation:(FCTagsFetchOperation *)arg1 didFetchTagsByID:(NSDictionary *)arg2;
@end
