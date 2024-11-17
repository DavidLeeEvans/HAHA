package characters;

import spine.AnimationStateData;
import spine.SkeletonData;
import spine.starling.SkeletonAnimation;

abstract class AbstractBaseCharacter extends SkeletonAnimation{
    public function new(skeletonData:SkeletonData, stateData:AnimationStateData = null) {
        super(skeletonData,stateData);
    }
}