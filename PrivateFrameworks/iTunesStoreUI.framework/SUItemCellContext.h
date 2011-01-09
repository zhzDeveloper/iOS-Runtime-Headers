/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */



@interface SUItemCellContext : SUArtworkCellContext 
{
    struct __CFDictionary { } *_cachedRatingImages;
    struct { 
        NSInteger version; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
        int (*equal)(); 
        int (*hash)(); 
    } _stringSizeCacheKeyCallBacks;
    struct __CFDictionary { } *_stringSizes;
}

@property ? stringSizeCacheKeyCallBacks;


- (id)init;
- (void)dealloc;
- (id)ratingImageForRating:(float)arg1 style:(NSInteger)arg2;
- (struct CGSize { float x1; float x2; })sizeForString:(id)arg1 font:(id)arg2 constrainedToSize:(struct CGSize { float x1; float x2; })arg3;
- (struct { NSInteger x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); })stringSizeCacheKeyCallBacks;
- (void)setStringSizeCacheKeyCallBacks:(struct { NSInteger x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); })arg1;
- (void)resetLayoutCaches;

@end