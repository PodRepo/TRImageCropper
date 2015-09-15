//
//  ViewController.m
//  TRImageCropper
//
//  Created by joshua li on 15/9/15.
//
//

#import "ViewController.h"

#import "TRImagePicker.h"

@interface ViewController ()
@property(nonatomic, strong) TRImagePicker *imagePicker;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
   

    
    // Do any additional setup after loading the view, typically from a nib.
}
- (IBAction)tap:(id)sender {
    
    _imagePicker = [[TRImagePicker alloc] init];
    _imagePicker.delegate = self;
    
    [_imagePicker pickImageWithTarget:self type:TRImagePickTypePhotoLibrary];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
