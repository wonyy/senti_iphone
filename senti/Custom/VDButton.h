//
// Copyright 2010-2011 Vincent Demay
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>

typedef enum {
	VDTabBarReflexiveStyle, //default
	VDTabBarGradientStyle,
} VDTabBarStyle;

///////////////////////////////////////////////////////////////////
@interface VDButton : UIButton {
	UIImage* image;
    UIImage* image_sel;
	
	//TYPE
	UIColor* _from;
	UIColor* _to;
	VDTabBarStyle _style;
}
@property (nonatomic, retain) UIImage* image;
@property (nonatomic, retain) UIImage* image_sel;
@property (nonatomic, retain) UIColor* from;
@property (nonatomic, retain) UIColor* to;
@property (nonatomic) VDTabBarStyle style;

@end
