
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, TRImagePickType)
{
    TRImagePickTypePhotoLibrary,
    TRImagePickTypeCamera
};

@class TRImagePicker;

typedef void (^TRImagePickBlock)(BOOL status, UIImage* image);




@protocol TRImagePickerDelegate <NSObject>

-(void)imagePicker:(TRImagePicker *)imagePicker didFinished:(UIImage *)image;

@optional
-(void)imagePickerDidCancel;

@end

@interface TRImagePicker : NSObject

@property (nonatomic, assign) id<TRImagePickerDelegate> delegate;
@property (nonatomic, strong) TRImagePickBlock block;

-(void)takePhotoWithTarget:(UIViewController *)target withblock:(TRImagePickBlock)block;

-(void)pickImageWithTarget:(UIViewController *)target type:(TRImagePickType)type isCrop:(BOOL)isCrop;

-(void)pickImageWithTarget:(UIViewController *)target type:(TRImagePickType)type;

@end
