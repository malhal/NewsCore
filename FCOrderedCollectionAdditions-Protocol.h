//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary;
@protocol FCOrderedCollection;

@protocol FCOrderedCollectionAdditions
- (NSDictionary *)fc_diffAgainstSortedOrderedCollection:(id <FCOrderedCollection>)arg1 usingComparator:(long long (^)(id, id))arg2;
- (_Bool)fc_isSortedUsingComparator:(long long (^)(id, id))arg1;
- (void)fc_enumerateObjectsPairwiseUsingBlock:(void (^)(id, id, unsigned long long, _Bool *))arg1;
@end

