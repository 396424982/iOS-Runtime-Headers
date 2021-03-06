/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class CADisplayLink;

@interface CNFVideoGroupView : UIControl <UIGestureRecognizerDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    int _corner;
    } _cornerLocationsRect;
    CADisplayLink *_displayLink;
    BOOL _startedThrowAnimation;
    } _target;
    } _velocity;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cornerLocationsRect;

- (float)_gridViewRubberBandValueForValue:(float)arg1 target:(float)arg2 timeInterval:(float)arg3 velocity:(float*)arg4;
- (void)addPanningGestureRecognizer;
- (void)cancelThrowAnimation;
- (struct CGPoint { float x1; float x2; })centerPointForCurrentVideoGroupCorner;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cornerLocationsRect;
- (void)dealloc;
- (void)finishedThrowAnimation;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanDetected:(id)arg1;
- (void)handlePanGestureFinished:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)refreshPositionInCorner;
- (void)setCorner:(int)arg1;
- (void)setCornerLocationsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTransformForNewCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)startThrowAnimation;
- (struct CGPoint { float x1; float x2; })transformedCenter;
- (void)updateThrowAnimation:(id)arg1;

@end
