/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, UIColor;



@interface MKPanoramaAnnotation : NSObject 
{
    NSInteger _type;
    NSString *_panoramaID;
    NSString *_text;
    NSString *_streetRange;
    double _yaw;
    UIColor *_roadOverlayColor;
}

@property(readonly) UIColor *roadOverlayColor;
@property(readonly) double yaw;
@property(readonly) NSString *streetRange;
@property(readonly) NSString *text;
@property(readonly) NSString *panoramaID;
@property NSInteger type;


- (id)roadOverlayColor;
- (id)streetRange;
- (id)initWithLink:(id)arg1;
- (double)yaw;
- (id)panoramaID;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (id)text;
- (void)dealloc;
- (id)description;

@end