/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIToolbar, NSMutableArray, UIImageView, UIBarButtonItem, UIBarButtonItemProxy;

@interface UIToolbarCustomizeView : UIView {
    struct CGPoint { 
        float x; 
        float y; 
    UIImageView *_dragImage;
    UIBarButtonItem *_draggingItem;
    UIBarButtonItemProxy *_draggingProxy;
    NSMutableArray *_fixedItems;
    NSMutableArray *_proxies;
    UIBarButtonItem *_replaceItem;
    UIImageView *_replacementGlow;
    } _startPoint;
    UIToolbar *_toolbar;
}

- (void)_finishTouchesEndedChangeAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)adjustDragImageWithTouches:(id)arg1 withEvent:(id)arg2;
- (void)buttonBarTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)buttonBarTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)buttonBarTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (BOOL)canHandleSwipes;
- (void)dealloc;
- (id)itemInToolbarWithTouches:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setToolbar:(id)arg1 currentItems:(id)arg2 availableItems:(id)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end