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


#import <UIKit/UIKit.h>
#import "VDButton.h"

@interface VDTabBarController : UITabBarController<UITabBarDelegate> {
	NSMutableArray *_overbuttons;
	NSMutableArray *tabImages;
    NSMutableArray *tabselImages;
	
	UIColor* _from;
	UIColor* _to;
	VDTabBarStyle _style;
}

- (void) reflexiveColor:(UIColor*) color;
- (void) gradientColorFrom:(UIColor*)from to:(UIColor*) to;
- (void)selectTab:(int)tabID;

@end
